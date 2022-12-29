cmake_minimum_required(VERSION 3.23.0)
project(head-only-lib VERSION 0.1.0)

add_library(Utils INTERFACE)
target_sources(Utils INTERFACE 
    FILE_SET HEADERS
    BASE_DIRS include/head_onlys
    FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/head_onlys/utils.hpp
)

install(TARGETS Utils
    EXPORT UtilsExport
    FILE_SET HEADERS
    DESTINATION include/head_onlys
)

install(EXPORT UtilsExport
    NAMESPACE Upstream::
    DESTINATION lib/cmake/Utils
)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Utils)