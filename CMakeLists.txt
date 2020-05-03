cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)
set(S_Path source/services/)
set(C_Path source/controllers/)
set(M_Path source/models/)

include_directories("source/libraries/openssl/include")
link_directories("source/libraries/openssl/lib")

add_library(coreServices ${S_Path}core_services.cpp)
add_library(activity ${C_Path}activity_controller.cpp)
add_library(authServices ${S_Path}auth_service.cpp)

add_executable(mainAPP source/app.cpp)
target_link_libraries(mainAPP PRIVATE coreServices)
target_link_libraries(coreServices PUBLIC activity authServices)
target_link_libraries(authServices PRIVATE libssl.a libcrypto.a)


