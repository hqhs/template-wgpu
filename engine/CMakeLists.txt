include_directories(.)

# NOTE(hqhs): "INTERFACE" because you can't create static library from header files only,
add_library(engine INTERFACE
  discipline_types.h
  discipline_memory.h)

# NOTE(hqhs): this allows to use relative imports
target_include_directories(engine INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(engine INTERFACE webgpu)

set_target_properties(engine PROPERTIES
	CXX_STANDARD 17
    LINKER_LANGUAGE CXX
	VS_DEBUGGER_ENVIRONMENT "DAWN_DEBUG_BREAK_ON_ERROR=1"
)
# target_treat_all_warnings_as_errors(engine)
