cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)
SET(CMAKE_CXX_FLAGS "-std=c++17 -O3")

#MYSQL
include_directories("C:\\Program Files\\MySQL\\Connector C++ 8.0\\include\\jdbc")
link_directories("C:\\Program Files\\MySQL\\Connector C++ 8.0\\lib64\\vs14")
link_directories("C:\\Program Files\\MySQL\\Connector C++ 8.0\\lib64")

#BOOST
include_directories("C:\\Program Files\\boost\\include\\boost-1_73")
link_directories("C:\\Program Files\\boost\\lib")

add_executable(mainAPP main.cpp)

target_link_libraries(mainAPP PRIVATE mysqlcppconn.lib mysqlcppconn-7-vs14.dll)
#target_link_libraries(mainAPP PRIVATE mysqlcppconn8-2-vs14.dll)
