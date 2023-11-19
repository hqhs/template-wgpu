include_directories(.)

add_library(src STATIC
  webgpu-utils.h webgpu-utils.cpp)

# NOTE(hqhs): this allows to use relative imports
target_include_directories(src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(src PRIVATE webgpu)

set_target_properties(src PROPERTIES
	CXX_STANDARD 17
	VS_DEBUGGER_ENVIRONMENT "DAWN_DEBUG_BREAK_ON_ERROR=1"
)
target_treat_all_warnings_as_errors(src)
