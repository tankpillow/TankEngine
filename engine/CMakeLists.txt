cmake_minimum_required(VERSION 3.25)
project(TankEngine_Engine)

# Configure C/C++ Standard.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add Dependencies.
include(FetchContent)
FetchContent_Declare(
    sdl2
    GIT_REPOSITORY "https://github.com/libsdl-org/SDL.git"
    GIT_TAG "release-2.30.8"
)

FetchContent_MakeAvailable(sdl2)

set(SOURCES
    src/core/GameWindow.cpp
    src/utils/Logger.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC SDL2::SDL2)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
