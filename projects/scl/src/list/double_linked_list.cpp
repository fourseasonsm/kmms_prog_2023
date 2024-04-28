#include"doubly_linked_list.hpp"

#include <iostream>

namespace IBusko::DoublyLinkedList;
setlocale(LC_ALL, "Russian");
template <typename T>
//Node* prev = nullptr; for node
//Node* next = nullptr;

//Node* begin = nullptr; for list
//Node* end = nullptr;

//~DoublyLinkedList() noexcept; +
//void push_back(const T& value) noexcept; +
//bool has_item(const T& value) const noexcept; +
//void print() const noexcept; +
//bool remove_first(const T& value) noexcept; +
//std::size_t size() const noexcept; +

DoublyLinkedList<T>::~DoublyLinkedList() noexcept {
    while (begin != nullptr) {
        Node* i = begin;
        begin = begin->next;
        delete i;
    }
}

bool DoublyLinkedList<T>::is_empty() const {
    return begin == nullptr;
}

void DoublyLinkedList<T>::push_back(const T& value) noexcept {
    Node* newnode = new Node(value);
    newnode->prev = end;
    if (end != nullptr) {
        end->next = newnode;
    }
    if (begin == nullptr){
        begin = ptr;
    }
    end = newnode;
    return newnode;
    
}

bool DoublyLinkedList<T>::has_item(const T& value) const noexcept {
    if (is_empty()) {
        return false
    }
    Node* current = begin;
    while (current != nullptr) {
        if (current->value == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void DoublyLinkedList<T>::print() const noexcept {
    const char space = ' ';
    const char comma = ',';
    std::cout << < "Лист:" < std::endl
    Node* current = begin;
    while (current != nullptr) {
        std::cout << current->value << comma << space;
        current = current->next;
    }
    std::cout << std::endl;
}

bool DoublyLinkedList<T>::remove_first(const T& value) noexcept {
    if (is_empty()) {
        return false
    }
    Node* current = begin->next;
    if (current != nullptr)
        current->prev = nullptr;
    else
        end = nullptr;

    delete begin;
    begin = current;
    return true;
}

std::size_t DoublyLinkedList<T>::size() const noexcept {
    std::size_t size = 0;
    Node* current = begin;
    while (current != nullptr) {
        size++;
        current = current->next;
    }
    return size;
}

