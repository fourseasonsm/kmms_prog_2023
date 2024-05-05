target_sources(${SCL_LIB} 
	PRIVATE
		"doubly_linked_list.cpp"
	PUBLIC
		doubly_linked_list.hpp
 "../stack/static_array_stack.cpp")

target_include_directories(${SCL_LIB} PUBLIC
	${PROJECT_SOURCE_DIR}/src/list
)


project(doubly_linked_list_test)

add_executable(list_test_main 
	main.cpp 
	doubly_linked_list.hpp 
	"doubly_linked_list.cpp"
)