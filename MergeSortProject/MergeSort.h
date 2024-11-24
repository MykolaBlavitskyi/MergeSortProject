#pragma once
#include <vector>
#include <stdexcept>

class MergeSort {
public:
    static void sort(std::vector<int>& arr);

private:
    static void mergeSort(std::vector<int>& arr, int left, int right);
    static void merge(std::vector<int>& arr, int left, int middle, int right);
};