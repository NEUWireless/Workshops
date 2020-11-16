# yes, build systems are complicated enough to have that many versions!
cmake_minimum_required(VERSION 3.9)

# triggers internal CMake build logic...
project(cpp_workshop)

# compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# where to build from
include_directories(${PROJECT_SOURCE_DIR})

# executable, followed by sources (we didn't talk about multi-file projects)
add_executable(max max.cc)
add_executable(fib fib.cc)
