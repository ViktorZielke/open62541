# -- How to cross compile with ptxdist and OSELASE.Toolchain -- 
# 1) follow installation steps as described in ptxdist documentation
# 2) export toolchain (usually installed in /opt )
# export PATH=$PATH:/opt/OSELAS.Toolchain-2012.12.1/arm-cortexa8-linux-gnueabihf/gcc-4.7.3-glibc-2.16.0-binutils-2.22-kernel-3.6-sanitized/bin
# 3) use this toolchain file 
# cmake -DCMAKE_TOOLCHAIN_FILE=../cmake/Toolchain-ptxdist.cmake -DBUILD_EXAMPLESERVER=ON ..
# make
s
set(CMAKE_C_COMPILER arm-cortexa8-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER arm-cortexa8-linux-gnueabihf-g++)
set(CMAKE_STRIP arm-cortexa8-linux-gnueabihf-strip)
