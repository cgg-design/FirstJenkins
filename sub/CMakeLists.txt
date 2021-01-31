######### Bibliotheque ########
##     calc_sub library      ##
###############################

set(LIBRARY_SOURCES "calc_sub.cpp")
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/includes/")

# Option for generating/building: target
add_library(${LIBRARY_NAME_SUB} OBJECT ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME_SUB} PUBLIC ${LIBRARY_INCLUDES})
target_compile_features(${LIBRARY_NAME_SUB} PUBLIC cxx_std_17)
