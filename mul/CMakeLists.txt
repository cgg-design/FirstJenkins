###############################
###     calc_sub library    ###
###############################

set(LIBRARY_SOURCES "calc_mul.cpp")
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/includes/")

# Option for generating/building: target
add_library(${LIBRARY_NAME_MUL} OBJECT ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME_MUL} PUBLIC ${LIBRARY_INCLUDES})
target_compile_features(${LIBRARY_NAME_MUL} PUBLIC cxx_std_17)


