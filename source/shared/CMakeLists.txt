add_library(utilities appShared/util_model.cpp appShared/util_model.hpp)

target_include_directories(utilities PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})