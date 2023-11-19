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

# actual sources
add_subdirectory(src)
add_subdirectory(engine)

add_executable(game bin/main.cpp)

target_link_libraries(game PRIVATE glfw webgpu glfw3webgpu engine src)

set_target_properties(game PROPERTIES
	CXX_STANDARD 17
	VS_DEBUGGER_ENVIRONMENT "DAWN_DEBUG_BREAK_ON_ERROR=1"
)
target_treat_all_warnings_as_errors(game)
target_copy_webgpu_binaries(game)
