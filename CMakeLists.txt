cmake_minimum_required(VERSION 3.21)
project(amazaingC)

set(CMAKE_CXX_STANDARD 14)


#find_library(OpenCV)
find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(amazaingC main.cpp BasicsC/MainC.cpp BasicsC/MainC.h BasicsC/ArrayBasicsC/ArrayBasicsC.cpp BasicsC/ArrayBasicsC/ArrayBasicsC.h ArithmeticC/SortArithmeticC/SortArithmeticC.cpp ArithmeticC/SortArithmeticC/SortArithmeticC.h ArithmeticC/ArithmeticMainC.cpp ArithmeticC/ArithmeticMainC.h ArithmeticC/BinarySearchC/BinarySearchC.cpp ArithmeticC/BinarySearchC/BinarySearchC.h ArithmeticC/ArrayArithmeticC/ArrayArithmeticC.cpp ArithmeticC/ArrayArithmeticC/ArrayArithmeticC.h BasicsC/STLBasicsC/STLBasicsC.cpp BasicsC/STLBasicsC/STLBasicsC.h BasicsC/STLBasicsC/MapBasicsC/MapBasicsC.cpp BasicsC/STLBasicsC/MapBasicsC/MapBasicsC.h BasicsC/STLBasicsC/VectorBasicsC/VectorBasicsC.cpp BasicsC/STLBasicsC/VectorBasicsC/VectorBasicsC.h OpenCV/MainOpenCV.cpp OpenCV/MainOpenCV.h BasicsC/STLBasicsC/StringBasicsC/StringBasicsC.cpp BasicsC/STLBasicsC/StringBasicsC/StringBasicsC.h ArithmeticC/StringArithmeticC/StringArithmeticC.cpp ArithmeticC/StringArithmeticC/StringArithmeticC.h BasicsC/STLBasicsC/StackBasicsC/StackBasicsC.cpp BasicsC/STLBasicsC/StackBasicsC/StackBasicsC.h BasicsC/STLBasicsC/DequeBasicsC/DequeBasicsC.cpp BasicsC/STLBasicsC/DequeBasicsC/DequeBasicsC.h ArithmeticC/StackArithmeticC/StackArithmeticC.cpp ArithmeticC/StackArithmeticC/StackArithmeticC.h BasicsC/STLBasicsC/SetBasicsC/SetBasicsC.cpp BasicsC/STLBasicsC/SetBasicsC/SetBasicsC.h BasicsC/STLBasicsC/ListBasicsC/ListBasicsC.cpp BasicsC/STLBasicsC/ListBasicsC/ListBasicsC.h)
target_link_libraries(amazaingC ${OpenCV_LIBS})