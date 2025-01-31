cmake_minimum_required(VERSION 3.20)
project(MyProject)

# https://google.github.io/googletest/quickstart-cmake.html

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(hello src/main.c src/greeter.c)

add_executable(
  greeter_test
  src/greeter.c
  src/greeter_test.cc
)

target_link_libraries(
  greeter_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(greeter_test)
