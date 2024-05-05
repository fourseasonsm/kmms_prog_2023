#include "vector.hpp"
#include "vector.cpp"

int main() {
	IBusko::Vector<int> vec1;

	vec1.push_back(1);
	vec1.push_back(2);
	std::cout << vec1.size() << std::endl;

}

