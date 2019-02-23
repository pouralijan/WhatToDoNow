cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME WhatToDoNow)
project(${PROJECT_NAME})

set(EXECUTABLE_NAME WhatToDoNow)
set(CMAKE_CXX_STANDAR 20)

include_directories(../src)

set(SOURCE_LIST 
    ./src/Main.cc
    ./src/Work.cc
    ./src/WorksQueue.cc
    )

add_executable(${EXECUTABLE_NAME} ${SOURCE_LIST})

install(TARGETS ${EXECUTABLE_NAME} RUNTIME DESTINATION bin)
