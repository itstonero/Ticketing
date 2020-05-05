cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)

include_directories("C:/Program Files/boost/include/boost-1_73")
include_directories("source/libraries/openssl/include")
link_directories("source/libraries/openssl/lib")


add_subdirectory(source/controllers)
add_subdirectory(source/services)
add_subdirectory(source/shared)
add_subdirectory(source/models)
add_subdirectory(source/app)
