cmake_minimum_required(VERSION 3.10)

project(BubbleSortC C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include headers
include_directories(include)

# Create executable
add_executable(bubble_sort
    main.c
    src/bubble_sort.c
)
