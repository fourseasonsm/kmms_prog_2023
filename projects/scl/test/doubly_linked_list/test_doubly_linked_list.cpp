#include <gtest/gtest.h>

#include "../doubly_linked_list/doubly_linked_list.hpp"

using IBusko::DoublyLinkedList;

TEST(DoublyLinkedListTest, size) {
    DoublyLinkedList<int> list1;
    ASSERT_EQ(list1.size(), 0)

    list1.push_back(1);
    ASSERT_EQ(list1.size(), 1)

    list1.push_back(2);
    list1.push_back(3);
    ASSERT_EQ(list1.size(), 3)
}
TEST(DoublyLinkedListTest, pushBack) {
    DoublyLinkedList<int> list1;

    list1.push_back(1);
    list1.push_back(2);

    ASSERT_EQ(list1.remove_first(2), true)
    ASSERT_EQ(list1.remove_first(2), false)


    list1.remove_first(1);
    ASSERT_EQ(list1.size(), 0)

};

TEST(DoublyLinkedListTest, size) {
    DoublyLinkedList<int> list1;
    list1.push_back(1);
    list1.push_back(2);

    ASSERT_EQ(list.size(), 2);
}

TEST(DoublyLinkedListTest, has_item) {
    DoublyLinkedList<int> list1;

    list1.push_back(1);
    list1.push_back(2);

    ASSERT_EQ(list1.has_item(2), true)
    ASSERT_EQ(list1.has_item(3), false)

}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}