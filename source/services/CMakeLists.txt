add_library(loggerServices appServices/logger.cpp appServices/logger.hpp)
add_library(authServices appServices/auth_service.cpp appServices/auth_service.hpp)
add_library(coreServices appServices/core_services.cpp appServices/core_services.hpp)
add_library(databaseServices appServices/database_services.cpp appServices/database_services.hpp)
add_library(mapperServices appServices/mapper_service.cpp appServices/mapper_service.hpp)


target_link_libraries(mapperServices PUBLIC appUserModels authControllers)
target_link_libraries(databaseServices PUBLIC appUserModels)
target_link_libraries(loggerServices PUBLIC authServices utilities appUserModels authControllers)


target_include_directories(loggerServices PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(authServices PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(coreServices PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(databaseServices PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(mapperServices PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})




