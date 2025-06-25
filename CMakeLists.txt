cmake_minimum_required(VERSION 4.0.3)

project(MyApp)

# Specifiy C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Add include directory
include_directories(include)

add_executable(MyApp
    src/main.cpp
    src/Person.cpp
)

