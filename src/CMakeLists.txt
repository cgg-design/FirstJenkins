### Bibliotheque ###
# MyLib library

set(LIBRARY_SOURCES "my_lib.cpp")
# set(LIBRARY_SOURCES "calc_add.cpp")
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/include/")

# Add library .a 
add_library(${LIBRARY_NAME} OBJECT ${LIBRARY_SOURCES})
# Wo liegt die header file
target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})
target_compile_features(${LIBRARY_NAME} PUBLIC cxx_std_17)
