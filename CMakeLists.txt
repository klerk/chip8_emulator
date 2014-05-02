cmake_minimum_required(VERSION 2.8)

project(chip8_emu)

include(cpp11.cmake)

find_package(Boost)

include_directories(
    include
    ${BOOST_INCLUDE_DIR}
)


set(INCLUDE_FILES
    include/cpu.hpp
    include/screen.hpp
)

set(SOURCE_FILES
    src/main.cpp
    src/cpu.cpp
    src/screen.cpp
)

add_executable(
    chip8_emu
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)

