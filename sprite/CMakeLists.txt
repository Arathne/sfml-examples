add_executable( sprite main.cpp )

set( png "${CMAKE_CURRENT_SOURCE_DIR}/epicface.png" )
target_compile_definitions( sprite PRIVATE EPIC_FACE="${png}" )

target_link_libraries( sprite sfml-system sfml-graphics OpenGL::GL )
