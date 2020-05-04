cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)
SET(CMAKE_CXX_FLAGS "-std=c++17 -O3")
set(S_Path source/services/)
set(C_Path source/controllers/)
set(M_Path source/models/)

#OpenSSL
include_directories("source/libraries/openssl/include")
link_directories("source/libraries/openssl/lib")

#CrossGUID
include_directories("source/libraries/crossguid/include")
link_directories("source/libraries/crossguid/lib")

#MSSQL
include_directories("C:\\Program Files\\Microsoft SQL Server\\Client SDK\\ODBC\\170\\SDK\\Include")
link_directories("C:\\Program Files\\Microsoft SQL Server\\Client SDK\\ODBC\\170\\SDK\\Lib")

#MYSQL
include_directories("C:\\Program Files\\MySQL\\Connector C++ 8.0\\include")
link_directories("C:\\Program Files\\MySQL\\Connector C++ 8.0\\lib64")


add_library(activity ${C_Path}activity_controller.cpp)

add_library(coreServices ${S_Path}core_services.cpp)
add_library(authServices ${S_Path}auth_service.cpp)
add_library(mapperServices ${S_Path}mapper_service.cpp)
add_library(databaseServices ${S_Path}database_services.cpp)

add_library(userModels ${M_Path}app_user_models.cpp)

add_executable(mainAPP source/app.cpp)
target_link_libraries(mainAPP PRIVATE coreServices userModels)
target_link_libraries(coreServices PUBLIC activity authServices mapperServices)
target_link_libraries(mapperServices PRIVATE authServices)

#OpenSSL and CrossGUID libraries Added To AUTH_SERVICES
target_link_libraries(authServices PRIVATE libssl.a libcrypto.a libcrossguid-dgb.a)

#ODBC Connector Library

