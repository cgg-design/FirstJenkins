####### Main Application  #######
# Main executable
#################################

# add the executabl, it's in same dir
add_executable(${MAIN} "main.cpp")
# Executable lirary: ${PROJECT}_Executable
# main mit my_lib.h linken
target_link_libraries(${MAIN} PUBLIC ${LIBRARY_NAME} ${LIBRARY_ADDNAME} ${LIBRARY_NAME_SUB} ${LIBRARY_NAME_MUL} ${LIBRARY_NAME_SQR})
# Use of linalg library: linalg function shall be used in library my_lib.cpp
target_link_libraries(${LIBRARY_NAME} PUBLIC ${LIBRARY_LINALG})
# Wo liegt diese header file
target_include_directories(${MAIN} PUBLIC ${PROJECT_BINARY_DIR} )
target_compile_features(${LIBRARY_NAME} PUBLIC cxx_std_17)
target_compile_features(${LIBRARY_ADDNAME}  PUBLIC cxx_std_17)
target_compile_features(${LIBRARY_NAME_SUB} PUBLIC cxx_std_17) 
target_compile_features(${LIBRARY_NAME_MUL} PUBLIC cxx_std_17)
#target_compile_features(${LIBRARY_NAME_SQR} PUBLIC cxx_std_17)
