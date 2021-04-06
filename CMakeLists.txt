cmake_minimum_required(VERSION 3.10.2)
project(failing_unit_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)


################
# Dependencies #
################

find_package(ament_cmake REQUIRED)
find_package(mpi_cmake_modules REQUIRED)
ament_export_dependencies( mpi_cmake_modules )

######################
# Install and export #
######################

ament_package()

##############
# Unit Tests #
##############

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(test_${PROJECT_NAME}_cpp tests/main.cpp tests/unit_tests.cpp)
endif()


FAILING COMPILATION
