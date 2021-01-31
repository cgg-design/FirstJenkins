########### main CMakeLists.txt  ###########
# Build: cmake -D USE_PRINTF=ON ..

cmake_minimum_required(VERSION 3.18)

# variable deklarieren und initialisieren
# set the project name and version
set(PROJECT "CPPJenkins")
project("${PROJECT}_Project" VERSION 1.2.3 LANGUAGES CXX)
# Global CMake variables are here
set(CMAKE_CXX_STANDARD          17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSION         OFF) # nicht verwenden den Compiler, der nicht vom anderen genutzt ist.

# Project/library name
set(LIBRARY_NAME "${PROJECT}_MyLib")
set(MAIN         "${PROJECT}_Executable")
#Bring the headers, such as Student.h into the project
include_directories(includes)

# # Options for generating /building: Default is OFF=> cout
# # cd build && cmake -D USE_PRINTF=ON ..
# Option(USE_PRINTF "If you want either to use printf (ON) or cout (OFF)" OFF)
# #Configuration file
# configure_file("${PROJECT_SOURCE_DIR}/include/projectConfig.h.in"
               # "${PROJECT_BINARY_DIR}/projectConfig.h" @ONLY)

# Add libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/")  # weiter .cpp
add_subdirectory("${PROJECT_SOURCE_DIR}/apps/") # main.cpp