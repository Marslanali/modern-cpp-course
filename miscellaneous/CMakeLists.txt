cmake_minimum_required(VERSION 3.5.1)
project(learncpp-with-The-Cherno)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread ")

#set(SOURCE_FILES  src/Threads src/FunctionPointer.cpp)
#set(HEADER_FILES )

# Thread.cpp executable
#add_executable(Threads  ${PROJECT_SOURCE_DIR}/src/Threads.cpp)

# FunctionPointer.cpp executable
add_executable(FunctionPointer-part1 ${PROJECT_SOURCE_DIR}/src/FunctionPointer-part1.cpp)
add_executable(FunctionPointer-part2 ${PROJECT_SOURCE_DIR}/src/FunctionPointer-part2.cpp)

# finding-length-of-longest-substring.cpp executable
add_executable(finding-length-of-longest-substring  ${PROJECT_SOURCE_DIR}/src/finding-length-of-longest-substring.cpp )

add_executable(Pointers ${PROJECT_SOURCE_DIR}/src/Pointers.cpp)
add_executable(References ${PROJECT_SOURCE_DIR}/src/References.cpp)
add_executable(Structs ${PROJECT_SOURCE_DIR}/src/Structs.cpp)
add_executable(Static ${PROJECT_SOURCE_DIR}/src/Static.cpp)

add_executable(SmartPointers-part1 ${PROJECT_SOURCE_DIR}/src/SmartPointers-part1.cpp)
add_executable(SmartPointers-part2 ${PROJECT_SOURCE_DIR}/src/SmartPointer-part2.cpp)