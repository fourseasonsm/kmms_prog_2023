#include"doubly_linked_list.hpp"

#include <iostream>

using IBusko::DoublyLinkedList;

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() noexcept {
    while (begin != nullptr) {
        Node* i = begin;
        begin = begin->next;
        delete i;
    }
}

template <typename T>
bool DoublyLinkedList<T>::is_empty() const {
    return begin == nullptr;
}

template <typename T>
void DoublyLinkedList<T>::push_back(const T& value) noexcept {
    Node* newnode = new Node(value);
    newnode->prev = end;
    if (end != nullptr) {
        end->next = newnode;
    }
    if (begin == nullptr){
        begin = newnode;
    }
    end = newnode;
}

template <typename T>
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

template <typename T>
void DoublyLinkedList<T>::print() const noexcept {
    const char space = ' ';
    const char comma = ',';
    std::cout << < "    :" < std::endl
    Node* current = begin;
    while (current != nullptr) {
        std::cout << current->value << comma << space;
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
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

template <typename T>
std::size_t DoublyLinkedList<T>::size() const noexcept {
    std::size_t size = 0;
    Node* current = begin;
    while (current != nullptr) {
        size++;
        current = current->next;
    }
    return size;
}

