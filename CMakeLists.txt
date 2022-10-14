cmake_minimum_required(VERSION 3.16)
project(refactoring)

set(CMAKE_CXX_STANDARD 20)

add_executable(refactoring main.cpp
        include/customer.hxx
        include/movie.hxx
        include/rental.hxx
        sources/customer.cxx
        sources/movie.cxx
        sources/rental.cxx
        )
