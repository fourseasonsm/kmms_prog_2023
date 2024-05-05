#include <gtest/gtest.h>

#include "../vector/vector.hpp"


using IBusko::Vector;

TEST(VectorTest, pushBack) {
    Vector<int> vec1;

    vec1.push_back(1);
    vec1.push_back(2);

    ASSERT_EQ(vec1.get_size(), 2);
}

TEST(VectorTest, hasItem) {
    Vector<int> vec1;

    vec1.push_back(1);
    vec1.push_back(2);

    ASSERT_EQ(vec1.has_item(1), true);
    ASSERT_EQ(vec1.has_item(2), true);
    ASSERT_EQ(vec1.has_item(92), false);
}

TEST(VectorTest, insert) {
    Vector<int> vec1;

    vec1.push_back(1);
    vec1.push_back(2);

    ASSERT_EQ(vec1.insert(1, 3), true);
    ASSERT_EQ(vec1.get_size(), 3);
    ASSERT_EQ(vec1.has_item(3), true);
}


TEST(VectorTest, removeFirst) {
    Vector<int> vec1;

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    ASSERT_EQ(vec1.remove_first(1), true);
    ASSERT_EQ(vec1.has_item(1), false);
    ASSERT_EQ(vec1.get_size(), 2);
    
}


TEST(VectorTest, getSize) {
    Vector<int> vec1;
    ASSERT_EQ(vec.get_size(), 0);

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    ASSERT_EQ(vec1.get_size(), 3);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}