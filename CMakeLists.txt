cmake_minimum_required(VERSION 3.15)
project(RangeV3Sample)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/libs/range-v3/include)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(RangeV3Sample main.cpp
        any_all_none_of.cpp
        calendar.cpp
        comprehension_conversion.cpp
        comprehensions.cpp
        count.cpp
        count_if.cpp
        filter_transform.cpp
        find.cpp
        for_each_assoc.cpp
        for_each_sequence.cpp
        hello.cpp
        is_sorted.cpp
        sort_unique.cpp
        )

target_link_libraries(RangeV3Sample ${Boost_LIBRARIES})