cmake_minimum_required(VERSION 3.00)
project(app)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(app src/main.cpp src/calculator/arithmetics.h)
