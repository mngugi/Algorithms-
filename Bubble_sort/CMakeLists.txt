cmake_minimum_required(VERSION 3.10)

# Project name and language
project(BubbleSortC C)

# Use C11 standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Create executable
add_executable(bubble_sort main.c)
