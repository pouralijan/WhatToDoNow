cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME WhatToDoNow)
project(${PROJECT_NAME})

set(EXECUTABLE_NAME WhatToDoNow)
set(CMAKE_CXX_STANDAR 11)

include_directories(../src)

set(SOURCE_LIST 
    ./src/Main.cpp
    )

add_executable(${EXECUTABLE_NAME} ${SOURCE_LIST})

install(TARGETS ${EXECUTABLE_NAME} RUNTIME DESTINATION bin)
