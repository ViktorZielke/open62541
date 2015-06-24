#ifndef UA_TYPES_ENCODING_BINARY_H_
#define UA_TYPES_ENCODING_BINARY_H_

#include "ua_types.h"
#include "ua_util.h"

/**
 * @ingroup types
 *
 * @defgroup encoding_binary Binary Encoding
 *
 * @brief Functions for binary en- and decoding of built-in datatypes as defined
 * in the standard. The encoding of the remaining datatypes is autogenerated
 * from XML descriptions.
 *
 * All datatypes have similar functions with a common postfix. DO NOT CALL THESE
 * FUNCTIONS WITH NULL-POINTERS IF IT IS NOT EXPLICITLY PERMITTED.
 *
 * - _encode: Encodes a variable into a bytestring. If an error occurs
 *   (indicated by the return value), the bytestring may be left in an
 *   inconsistent state.
 *
 * - _decode: Decodes a variable stored in a bytestring. The destination is
 *   cleaned up (init) before decoding into it. If an error occurs (indicated by
 *   the return value), the destination is cleaned up (deleteMembers, but no
 *   init) before returning.
 *
 * @{
 */

#define UA_TYPE_BINARY_ENCODING(TYPE)                                   \
    UA_StatusCode TYPE##_encodeBinary(TYPE const *src, UA_ByteString *dst, size_t *UA_RESTRICT offset); \
    UA_StatusCode TYPE##_decodeBinary(UA_ByteString const *src, size_t *UA_RESTRICT offset, TYPE *dst);

UA_TYPE_BINARY_ENCODING(UA_Boolean)
UA_TYPE_BINARY_ENCODING(UA_SByte)
UA_TYPE_BINARY_ENCODING(UA_Byte)
UA_TYPE_BINARY_ENCODING(UA_Int16)
UA_TYPE_BINARY_ENCODING(UA_UInt16)
UA_TYPE_BINARY_ENCODING(UA_Int32)
UA_TYPE_BINARY_ENCODING(UA_UInt32)
UA_TYPE_BINARY_ENCODING(UA_Int64)
UA_TYPE_BINARY_ENCODING(UA_UInt64)
UA_TYPE_BINARY_ENCODING(UA_Float)
UA_TYPE_BINARY_ENCODING(UA_Double)
UA_TYPE_BINARY_ENCODING(UA_String)
UA_TYPE_BINARY_ENCODING(UA_DateTime)
UA_TYPE_BINARY_ENCODING(UA_Guid)
UA_TYPE_BINARY_ENCODING(UA_ByteString)
UA_TYPE_BINARY_ENCODING(UA_XmlElement)
UA_TYPE_BINARY_ENCODING(UA_NodeId)
UA_TYPE_BINARY_ENCODING(UA_ExpandedNodeId)
UA_TYPE_BINARY_ENCODING(UA_StatusCode)
UA_TYPE_BINARY_ENCODING(UA_QualifiedName)
UA_TYPE_BINARY_ENCODING(UA_LocalizedText)
UA_TYPE_BINARY_ENCODING(UA_ExtensionObject)
UA_TYPE_BINARY_ENCODING(UA_DataValue)
UA_TYPE_BINARY_ENCODING(UA_Variant)
UA_TYPE_BINARY_ENCODING(UA_DiagnosticInfo)

UA_StatusCode UA_encodeBinary(const void *src, const UA_DataType *dataType, UA_ByteString *dst,
                              size_t *UA_RESTRICT offset);
UA_StatusCode UA_decodeBinary(const UA_ByteString *src, size_t * UA_RESTRICT offset, void *dst,
                              const UA_DataType *dataType);
/// @}

#endif /* UA_TYPES_ENCODING_BINARY_H_ */
