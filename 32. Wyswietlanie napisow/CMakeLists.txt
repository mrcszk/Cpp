cmake_minimum_required(VERSION 3.13)
project(32__Wyswietlanie_napisow)

set(CMAKE_CXX_STANDARD 14)

add_executable(32__Wyswietlanie_napisow main.cpp MovieSubtitles.h MovieSubtitles.cpp Exceptions/Exception.h Exceptions/NoFileException.h Exceptions/InvalidSequenceException.h Exceptions/Exception.cpp Exceptions/NoFileException.cpp Exceptions/InvalidSequenceException.cpp)