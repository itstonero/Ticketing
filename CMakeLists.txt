cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)


SET(CMAKE_CXX_FLAGS "-std=c++17 -O3")
set(MYSQL_DIR "C:/Program Files/MySQL/Connector C++ 8.0")
set(BOOST_DIR "C:/Program Files/boost")
set(PROJECT_NAME mainAPP)


include_directories(${BOOST_DIR}/include/boost-1_73)
include_directories(${MYSQL_DIR}/include/jdbc)

cmake_minimum_required(VERSION 3.8)

project(MyApp VERSION 1 LANGUAGES CXX)

SET(CMAKE_CXX_FLAGS "-std=c++17 -O3")
set(SERVICES_DIR source/services/)
set(CONTROLLERS_DIR source/controllers/)
set(MODELS_DIR source/models/)
set(BOOST_DIR "C:/Program Files/boost")


include_directories(${BOOST_DIR}/include/boost-1_73)
include_directories("source/libraries/openssl/include")
link_directories("source/libraries/openssl/lib")



#APP MODELS
add_library(userModels ${MODELS_DIR}app_user_models.cpp)
add_library(authModels ${MODELS_DIR}auth_models.cpp)
add_library(roleModels ${MODELS_DIR}role_model.cpp)
add_library(salesModels ${MODELS_DIR}sales_models.cpp)
add_library(ticketModels ${MODELS_DIR}ticket_models.cpp)

#APP SERVICES
add_library(coreServices ${SERVICES_DIR}core_services.cpp)
add_library(authServices ${SERVICES_DIR}auth_service.cpp)
add_library(mapperServices ${SERVICES_DIR}mapper_service.cpp)
add_library(loggerServices ${SERVICES_DIR}logger.cpp)
add_library(databaseServices ${SERVICES_DIR}database_services.cpp)

#APP CONTROLLERS
add_library(userController ${CONTROLLERS_DIR}app_user_controller.cpp)
add_library(authController ${CONTROLLERS_DIR}auth_controller.cpp)
add_library(roleController ${CONTROLLERS_DIR}role_controller.cpp)
add_library(salesController ${CONTROLLERS_DIR}sales_controller.cpp)
add_library(adminController ${CONTROLLERS_DIR}admin_activity_controller.cpp)
add_library(ticketController ${CONTROLLERS_DIR}ticket_controller.cpp)
add_library(workerController ${CONTROLLERS_DIR}worker_activity_controller.cpp)
add_library(activityController ${CONTROLLERS_DIR}activity_controller.cpp)
add_library(superAdminController ${CONTROLLERS_DIR}super_admin_activity_controller.cpp)

#EXECUTABLE
add_executable(mainAPP source/app.cpp)

#DEPENDENCIES
target_link_libraries(mainAPP PRIVATE coreServices authServices mapperServices userModels)
target_link_libraries(mapperServices PRIVATE authServices)
target_link_libraries(authServices PRIVATE libssl.a libcrypto.a)


