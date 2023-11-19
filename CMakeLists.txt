cmake_minimum_required(VERSION 3.1...3.25)

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(
	LearnWebGPU
	VERSION 0.1.0
	LANGUAGES CXX C
)

include(cmake/CompilerWarnings.cmake)

add_subdirectory(glfw)
add_subdirectory(webgpu)
add_subdirectory(glfw3webgpu)

add_executable(template
	bin/main.cpp
	webgpu-utils.h
	webgpu-utils.cpp
)

target_link_libraries(template PRIVATE glfw webgpu glfw3webgpu)

set_target_properties(template PROPERTIES
	CXX_STANDARD 17
	VS_DEBUGGER_ENVIRONMENT "DAWN_DEBUG_BREAK_ON_ERROR=1"
)
target_treat_all_warnings_as_errors(template)
target_copy_webgpu_binaries(template)
