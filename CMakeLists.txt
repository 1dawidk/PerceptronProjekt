cmake_minimum_required(VERSION 3.8)
project(PerceptronProjekt)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Perceptron/Perceptron.cpp Perceptron/Perceptron.h Perceptron/Neuron.cpp Perceptron/Neuron.h Perceptron/PerceptronSettings.h Perceptron/Implement/McCullochPitts_Neuron.cpp Perceptron/Implement/McCullochPitts_Neuron.h)
add_executable(PerceptronProjekt ${SOURCE_FILES})