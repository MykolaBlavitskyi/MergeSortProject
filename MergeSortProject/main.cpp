#include <iostream>
#include <vector>
#include "MergeSort.h"

int main() {
    // Przykład 1: Sortowanie losowej tablicy
    std::vector<int> arr = { 5, 3, 8, 6, 2, 7, 4, 1 };
    std::cout << "Przed sortowaniem: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sortowanie tablicy
    MergeSort::sort(arr);

    std::cout << "Po sortowaniu: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Przykład 2: Sortowanie już posortowanej tablicy
    std::vector<int> sortedArr = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::cout << "Przed sortowaniem już posortowanej tablicy: ";
    for (int num : sortedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    MergeSort::sort(sortedArr);

    std::cout << "Po sortowaniu już posortowanej tablicy: ";
    for (int num : sortedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Przykład 3: Sortowanie tablicy z liczbami ujemnymi
    std::vector<int> negativeArr = { -3, -1, -4, -2, -5 };
    std::cout << "Przed sortowaniem tablicy z liczbami ujemnymi: ";
    for (int num : negativeArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    MergeSort::sort(negativeArr);

    std::cout << "Po sortowaniu tablicy z liczbami ujemnymi: ";
    for (int num : negativeArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Przykład 4: Pusta tablica
    std::vector<int> emptyArr;
    std::cout << "Przed sortowaniem pustej tablicy: ";
    for (int num : emptyArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    try {
        // To spowoduje rzucone wyjątku dla pustej tablicy
        MergeSort::sort(emptyArr);
    }
    catch (const std::exception& e) {
        std::cout << "Błąd: " << e.what() << std::endl;  // Wypisuje komunikat błędu
    }

    return 0;
}
