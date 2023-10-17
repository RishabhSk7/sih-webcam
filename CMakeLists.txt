cmake_minimum_required(VERSION 3.10)

project(OpenCV-webcam-test)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the OpenCV package
find_package(OpenCV REQUIRED)
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Define the executable and specify source files
add_executable(OpenCV-webcam-test src/main.cpp)

# Add include directories for OpenCV and Qt
target_include_directories(OpenCV-webcam-test PRIVATE ${OpenCV_INCLUDE_DIRS})
target_include_directories(OpenCV-webcam-test PRIVATE ${Qt6Widgets_INCLUDE_DIRS})

# Link against OpenCV
target_link_libraries(OpenCV-webcam-test PRIVATE ${OpenCV_LIBS})
