project(primes_library)


set(HEADER_FILES PrimeNumber.h)

set(SOURCE_FILES PrimeNumber.cpp)

add_library(primes_library ${SOURCE_FILES} ${HEADER_FILES})
