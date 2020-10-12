# CMakeList.txt : CMake project for Computacion_grafica_y_OpenGL, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Computacion_grafica_y_OpenGL "Computacion_grafica_y_OpenGL.cpp" )

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

target_link_libraries(Computacion_grafica_y_OpenGL PRIVATE glad::glad)
target_link_libraries(Computacion_grafica_y_OpenGL PRIVATE glfw)
# TODO: Add tests and install targets if needed.
