cmake_minimum_required(VERSION 3.27)

project(tmpReadDxf LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tmpReadDxf
    main.cpp
    dx_data.h
    dx_iface.cpp dx_iface.h
)

include_directories( ${CMAKE_SOURCE_DIR}/../../CodeLibs/libdxfrw/src )
target_link_libraries(tmpReadDxf ${CMAKE_SOURCE_DIR}/libdxfrw.a)

#install(TARGETS tmpReadDxf
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
