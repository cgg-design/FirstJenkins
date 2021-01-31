##  Bibliotheque  ##
# MyLib library

set(LIBRARY_SOURCES "calc_add.cpp") 
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/includes/")

# Add library .a 
add_library(${LIBRARY_ADDNAME} OBJECT ${LIBRARY_SOURCES})
# Wo liegt die header file
target_include_directories(${LIBRARY_ADDNAME} PUBLIC ${LIBRARY_INCLUDES})
target_compile_features(${LIBRARY_ADDNAME} PUBLIC cxx_std_17)

