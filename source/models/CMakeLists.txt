add_library(appUserModels appModels/app_user_models.cpp appModels/app_user_models.hpp)
add_library(authModels appModels/auth_models.cpp appModels/auth_models.hpp)
add_library(roleModels appModels/role_model.cpp appModels/role_model.hpp)
add_library(salesModels appModels/sales_models.cpp appModels/sales_models.hpp)
add_library(ticketModels appModels/ticket_models.cpp appModels/ticket_models.hpp)

target_link_libraries(appUserModels PUBLIC utilities)
target_link_libraries(authModels PUBLIC utilities)
target_link_libraries(roleModels PUBLIC utilities)


target_include_directories(appUserModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(ticketModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(authModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(salesModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(roleModels PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
