cmake_minimum_required(VERSION 3.16)
project(auto-subtitles CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(autosubtitles
    src/main.cpp
    src/transcribe.cpp
    src/translate.cpp
    src/formats.cpp
)

target_include_directories(autosubtitles PRIVATE include)

if(WIN32)
    target_link_libraries(autosubtitles PRIVATE userenv)
endif()
