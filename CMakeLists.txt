cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES C CXX)

set(BOOST_DIR "C:/Program Files/boost")
set(MYSQL_DIR "C:/Program Files/MySQL/Connector C++ 8.0")
set(OPENSSL_DIR "source/libraries/openssl")

include_directories(${BOOST_DIR}/include/boost-1_73)
include_directories(${MYSQL_DIR}/include)
include_directories(${OPENSSL_DIR}/include)

link_directories(${OPENSSL_DIR}/lib)

add_subdirectory(source/controllers)
add_subdirectory(source/services)
add_subdirectory(source/models)
add_subdirectory(source/shared)
add_subdirectory(source/app)
