cmake_minimum_required(VERSION 3.0)
project(sfml-template)

# Add your project's source files
file(GLOB SOURCES "src/*.h" "src/*.cpp")

# Set the path to SFML
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR ${CMAKE_SOURCE_DIR}/external/SFML-2.6.1/lib/cmake/SFML)

# Find SFML components
find_package(SFML 2.6.1 COMPONENTS system window graphics REQUIRED)

# Include SFML headers
include_directories(${CMAKE_SOURCE_DIR}/external/SFML-2.6.1/include)

# Add your executable
add_executable(sfml-template WIN32 ${SOURCES})

# Link SFML libraries to your executable
target_link_libraries(sfml-template sfml-system sfml-window sfml-graphics)

# Set output directory for executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
