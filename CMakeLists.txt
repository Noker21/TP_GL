cmake_minimum_required( VERSION 3.0 )
project( TP04 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

add_executable( Resault src/FigureGeo.cpp src/line.cpp src/main.cpp src/PolyReg.cpp )
target_link_libraries( Resault )
