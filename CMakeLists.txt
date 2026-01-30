cmake_minimum_required(VERSION 3.28)
project(untitled6)

set(CMAKE_CXX_STANDARD 17)


# 1 Find the GTK package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK2 REQUIRED gtk+-2.0)

# 2. Create your executable
add_executable(database gtktest.c)
add_executable(database1 gtktest1.c)
# 3. Link the libraries correctly
target_include_directories(database PRIVATE ${GTK2_INCLUDE_DIRS})
target_link_libraries(database PRIVATE ${GTK2_LIBRARIES})
target_compile_options(database PRIVATE ${GTK2_CFLAGS_OTHER})

target_include_directories(database1 PRIVATE ${GTK2_INCLUDE_DIRS})
target_link_libraries(database1 PRIVATE ${GTK2_LIBRARIES})
target_compile_options(database1 PRIVATE ${GTK2_CFLAGS_OTHER})