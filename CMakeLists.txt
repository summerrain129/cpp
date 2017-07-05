cmake_minimum_required(VERSION 3.7)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Learning/learning.cpp GUIFun/BasicGui.cpp testGame/main.cpp testGame/main.h BishalCPP/bishal.cpp BishalCPP/bishal.h)
add_executable(cpp ${SOURCE_FILES})