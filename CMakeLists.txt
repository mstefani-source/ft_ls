message("CMake " "is " "the " "most " "powerful " "buildsystem!")
project(ft_ls)
cmake_minimum_required(VERSION 3.19)
set(CMAKE_C_STANDARD 99)
set(LIB_VERSION "1")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message ("compilerid = ${CMAKE_CXX_COMPILER_ID}")

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(-fdiagnostics-color=always)
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_compile_options(-fcolor-diagnostics)
endif()

add_definitions("-Wall" "-Werror" "-Wextra" "-g")

add_executable(ft_ls src/ft_ls.c
					src/ft_parsarg.c
					src/ft_list_all.c
					)

target_include_directories(ft_ls PRIVATE libft includes) 

add_library (libft SHARED libft/ft_putstr.c 
						libft/ft_putnbr.c
						libft/ft_abs.c
						libft/ft_strlen.c
						libft/ft_putchar.c
						libft/ft_memcmp.c
						libft/ft_strcmp.c
						libft/ft_printf.c)

set_target_properties(libft PROPERTIES PREFIX "")
set_target_properties(libft PROPERTIES OUTPUT_NAME "libft")
set_target_properties(libft PROPERTIES SUFFIX ".so.${LIB_VERSION}")

target_link_libraries(ft_ls libft)
