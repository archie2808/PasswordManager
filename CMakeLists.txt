cmake_minimum_required(VERSION 3.27)
project(PasswordManager)

set(CMAKE_CXX_STANDARD 23)

add_executable(PasswordManager main.cpp)


# Link libraries
# Add SQLiteCpp subdirectory
add_subdirectory(SQLiteCpp)
# Include SQLiteCpp headers
include_directories(SQLiteCpp/include)
# Link with SQLiteCpp library
target_link_libraries(PasswordManager SQLiteCpp)
