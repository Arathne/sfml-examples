cmake_minimum_required( VERSION 3.16.2 )

project( sfml_examples
        VERSION 1.0
        DESCRIPTION "SFML Examples"
        LANGUAGES CXX C )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/examples )

find_package( OpenGL REQUIRED )
find_package( SFML 2.5 COMPONENTS graphics system REQUIRED )

add_subdirectory( window )
add_subdirectory( clock )
