cmake_minimum_required(VERSION 3.10)

project(WeekendRayTracer)

file(GLOB all_srcs
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
    )

add_executable(raytracer ${all_srcs})
