cmake_minimum_required(VERSION 3.20)
project(MyProject)

# Add main.c and greeter.c to the executable

add_executable(hello src/main.c src/greeter.c)
