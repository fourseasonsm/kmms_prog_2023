#pragma onse
#include "vector.hpp"

#include <algorithm>
#include <stdexcept>

using IBusko::Vector;
setlocale(LC_ALL, "Russian")
template <typename T> //надо написать везде наверное??
//TODO:
//void push_back(const T& value) noexcept; +
//как массивчик с перевыделением памяти??? где то была статья про без перевыделения...
//bool has_item(const T& value) const noexcept; +
//bool insert(const int position, const T& value); +
// чекнуть не пустой ли и есть ли вообще индекс такой
//void print() const noexcept; +
//bool remove_first(const T& value) noexcept; +
//std::size_t size() const noexcept; +

Vector<T>::Vector() noexcept : arr(new T[capacity]) {}

~Vector() noexcept {
    capacity = 0;
    size = 0;
    delete[] arr;
}

bool Vector<T>::is_empty() {
    return size == 0; 
}

void Vector<T>::push_back(const T& value) noexcept {
    if (size >= capacity) {
        capacity *= 2;
        T* newarr = new T[capacity];
        for (std::size_t i = 0; i < size; ++i) {
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }
    arr[size++] = value;
}

bool Vector<T>::has_item(const T& value) const noexcept {
    if (is_empty()) {
        return false
    }
    //тут какой то прикол был с зацикленностью, глянуть типы
    for (std::size_t i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool Vector<T>::insert(const int position, const T& value) {
    if (is_empty()) {
        arr.push_back(const T& value);
        return true;
    }
    if  (position > size) {
        return false;
    }
    if (size >= capacity) {
        capacity *= 2;
        T* new_arr = new T[capacity];
        for (std::size_t i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }
    for (std::size_t i = 0; i < position; i++) {
        arr[i] = arr[i + 1];
    }
    arr[position] = value;
    size++;
    return true;
}

void Vector<T>::print() const noexcept {
    const char space = ' ';
    const char comma = ',';
    std::cout << < "Вектор:" < std::endl
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << comma << space;
    }
    std::cout << std::endl;
}

bool Vector<T>::remove_first(const T& value) noexcept {
    if (is_empty()) {
        return false
    }
    for (std::size_t i = 0; i < current_size; i++) {
        if (arr[i] == value) {
            for (std::size_t j = i; j < current_size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            current_size++;
            return true;
        }
    }
    return false;
}

std::size_t Vector<T>::size() const noexcept {
    return size;
}

