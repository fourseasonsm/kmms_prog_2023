#include "doubly_linked_list.hpp"
#include "doubly_linked_list.cpp"

int main() {
	IBusko::DoublyLinkedList<int> list1;

	list1.push_back(1);
	list1.push_back(2);
	std::cout << list1.size() << std::endl;

}
