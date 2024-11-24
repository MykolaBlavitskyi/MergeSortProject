#include "pch.h"
#include <gtest/gtest.h>
#include "MergeSort.h"
#include <vector>

// Test 1: Array already sorted in ascending order
TEST(MergeSortTest, SortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    MergeSort::sort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(arr, expected);
}

// Test 2: Array sorted in reverse order
TEST(MergeSortTest, ReverseSortedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    MergeSort::sort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(arr, expected);
}

// Test 3: Random unsorted array
TEST(MergeSortTest, RandomArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6 };
    MergeSort::sort(arr);
    std::vector<int> expected = { 1, 1, 2, 3, 4, 5, 6, 9 };
    EXPECT_EQ(arr, expected);
}

// Test 4: Array with negative numbers
TEST(MergeSortTest, NegativeNumbers) {
    std::vector<int> arr = { -5, -3, -8, -1, -2 };
    MergeSort::sort(arr);
    std::vector<int> expected = { -8, -5, -3, -2, -1 };
    EXPECT_EQ(arr, expected);
}

// Test 5: Empty array
TEST(MergeSortTest, EmptyArray) {
    std::vector<int> arr = {};
    MergeSort::sort(arr);
    std::vector<int> expected = {};
    EXPECT_EQ(arr, expected);
}

// Test 6: Array with one element
TEST(MergeSortTest, OneElementArray) {
    std::vector<int> arr = { 42 };
    MergeSort::sort(arr);
    std::vector<int> expected = { 42 };
    EXPECT_EQ(arr, expected);
}

// Test 7: Array with duplicates
TEST(MergeSortTest, Duplicates) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    MergeSort::sort(arr);
    std::vector<int> expected = { 1, 1, 2, 3, 3, 4, 5, 5, 6, 9 };
    EXPECT_EQ(arr, expected);
}
