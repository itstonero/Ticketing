add_executable(mainAPP mainApp.cpp)

add_library(mySQL SHARED IMPORTED ${MYSQL}/lib64/vs14/mysqlcppconn8.lib)

target_link_libraries(mainAPP PRIVATE mySQL)