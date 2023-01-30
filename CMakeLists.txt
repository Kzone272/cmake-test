cmake_minimum_required(VERSION 3.25)

project(CmakeTesting
  VERSION 1.0
  DESCRIPTION "Project for learning how to use CMake"
  LANGUAGES CXX
)

find_package(Eigen3 CONFIG REQUIRED)

add_subdirectory(src)
