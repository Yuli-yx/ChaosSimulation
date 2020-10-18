cmake_minimum_required(VERSION 3.10)
project(ChaosSimulation)


set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 REQUIRED)


add_executable(ChaosSimulation main.cpp chaos.cpp)

target_link_libraries(ChaosSimulation Eigen3::Eigen)