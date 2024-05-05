target_sources(${SCL_LIB} 
	PRIVATE
                static_array_stack.cpp
		
	PUBLIC
		list_stack.hpp
		static_array_stack.hpp
		vector_stack.hpp
)

target_include_directories(${SCL_LIB} PUBLIC
	${PROJECT_SOURCE_DIR}/src/stack
)
