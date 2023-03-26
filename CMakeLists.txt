cmake_minimum_required(VERSION 3.24)
project(Combat_Chronicles)

set(CMAKE_APPLE_SILICON_PROCESS, arm64)
set(CMAKE_OSX_ARCHITECTURES, arm64)
set(CMAKE_CXX_STANDARD 17)
find_package(SDL2 REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)
find_package(SDL2_ttf REQUIRED)

add_executable(Combat_Chronicles main.cpp Game.cpp Game.h)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})
target_link_libraries(Combat_Chronicles  ${SDL2_LIBRARIES}    SDL2_image::SDL2_image SDL2_ttf::SDL2_ttf)

