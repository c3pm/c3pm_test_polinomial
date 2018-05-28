cmake_minimum_required(VERSION 3.10)
project(c3pm_test_polinomial)

set(CMAKE_CXX_STANDARD 11)

include_directories(imports/c3pm_test_libmath)
include_directories(src/exports)

add_executable(c3pm_test_polinomial
        imports/c3pm_test_libmath/libmath.cpp
        imports/c3pm_test_libmath/libmath.h
        src/exports/polinomial.cpp
        src/exports/polinomial.h
        src/unittest_main.cpp)
