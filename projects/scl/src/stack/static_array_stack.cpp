#include"static_array_stack.hpp"
using IBusko::StaticArrayStack;


template<typename T, std::size_t n>
StaticArrayStack<T, n>::~StaticArrayStack() noexcept {
    head_index = 0;
    //delete[] arr; не уверена нужно ли его удалять, склоняюсь к тому что не нужно
}

template<typename T, std::size_t n>
bool StaticArrayStack<T, n>::empty() const noexcept {
    return head_index == 0;
}

template<typename T, std::size_t n>
bool StaticArrayStack<T, n>::full() const noexcept {
    return head_index == n;
}

template<typename T, std::size_t n>
void StaticArrayStack<T, n>::pop() {
    if (empty() != true) {
        head_index--;
    }
}

template<typename T, std::size_t n>
void StaticArrayStack<T, n>::push(const T& value) {
    head_index++;
    arr[head_index] = value;
}

template<typename T, std::size_t n>
std::size_t StaticArrayStack<T, n>::size() const noexcept {
    return head_index;
}

template<typename T, std::size_t n>
T StaticArrayStack<T, n>::top() const noexcept {
    return arr[head_index];//если head_ind начинается с 0 то проблем с индексацией у массива быть не должно
}
