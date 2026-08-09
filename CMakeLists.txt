cmake_minimum_required(VERSION 3.14)
project(2task_10-1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(greeter_lib STATIC greeter.cpp)

target_include_directories(greeter_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(2task_10-1 main.cpp)

target_link_libraries(2task_10-1 PRIVATE greeter_lib)
