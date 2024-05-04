#include "gtest/gtest.h"
#include "main.h"

TEST(test, t1) {
    insertion(8);
    insertion(3);
    insertion(5);
    int answer = 5;
    ASSERT_EQ(answer, root->data);
}

TEST(test, t2) {
    insertion(8);
    insertion(3);
    insertion(5);
    int answer = 3;
    ASSERT_EQ(answer, root->link[0]->data);
}

TEST(test, t3) {
    insertion(8);
    insertion(3);
    insertion(5);
    insertion(10);
    int answer = 3;
    ASSERT_EQ(answer, root->link[0]->data);
}

TEST(test, t4) {
    insertion(8);
    insertion(3);
    insertion(5);
    insertion(10);
    int answer = 8;
    ASSERT_EQ(answer, root->link[1]->data);
}