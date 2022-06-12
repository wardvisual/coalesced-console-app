# cmake version to be used
cmake_minimum_required(VERSION 3.0.0)

# project name
project(cs1-gsix-final VERSION 0.1.0)

# flags

# files

# include
include(CTest)
include_directories( ./src/includes/* ./src/lib/* ./src/main/*  )

# testing
enable_testing()

# target
add_executable(cs1-gsix-final main.cpp)
add_executable(cs1-gsix-final-2 app.cpp)

# external libs

# setter
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
