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
# nicht verwenden den Compiler, der nicht vom anderen genutzt ist.
set(CMAKE_CXX_EXTENSION         OFF) 

# Project/library name
set(LIBRARY_NAME        "${PROJECT}_Lib")
set(LIBRARY_ADDNAME 	"${PROJECT}_Add")
set(LIBRARY_NAME_SUB 	"${PROJECT}_Sub")
set(LIBRARY_NAME_MUL 	"${PROJECT}_Mul")
set(MAIN         "${PROJECT}_Executable")
# Bring the headers, such as Student.h into the project
# include_directories(includes)

# Add libraries fo findout CMakeLists Fils
add_subdirectory("${PROJECT_SOURCE_DIR}/add/")
add_subdirectory("${PROJECT_SOURCE_DIR}/sub/")
add_subdirectory("${PROJECT_SOURCE_DIR}/mul/")

# Add libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/") 
add_subdirectory("${PROJECT_SOURCE_DIR}/apps/")