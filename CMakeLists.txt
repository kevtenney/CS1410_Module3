cmake_minimum_required(VERSION 3.8)
project(lec6)
#For the compiler...these are the instructions for it
set(CMAKE_CXX_STANDARD 11)

# Set files to compile
#set(SOURCE_FILES functions.cpp)
#set(SOURCE_FILES functionsStruct.cpp)
#set(SOURCE_FILES functionsreturn.cpp)
set(SOURCE_FILES Point.cpp)
add_executable(lec6 ${SOURCE_FILES})