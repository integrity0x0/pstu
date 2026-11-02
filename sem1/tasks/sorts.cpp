#include <iostream>
#include <clocale>

using namespace std;

constexpr size_t n = 7;

// Сортировка обменом (пузырьковая)
void BubbleSort(int arr[n]) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
} // сложность: O(n²)

// Сортировка выбором
void SelectionSort(int arr[n]) {
    for (size_t i = 0; i < n - 1; i++) {
        size_t minIdx = i;
        for (size_t j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
} // сложность: O(n²)

// Сортировка вставками
void InsertionSort(int arr[n]) {
    for (size_t i = 1; i < n; i++) {
        int temp = arr[i];
        int j = static_cast<int>(i) - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
} // сложность: O(n²)

int main() {
    setlocale(LC_ALL, "Russian");

    int arr1[n] = {4, -1, 10, 160, 2, 7, -400};
    BubbleSort(arr1);
    cout << "Сортировка Обменом: ";
    for (size_t i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << "\n";

    int arr2[n] = {4, -1, 10, 160, 2, 7, -400};
    SelectionSort(arr2);
    cout << "Сортировка Выбором: ";
    for (size_t i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << "\n";

    int arr3[n] = {4, -1, 10, 160, 2, 7, -400};
    InsertionSort(arr3);
    cout << "Сортировка Вставками: ";
    for (size_t i = 0; i < n; i++) cout << arr3[i] << " ";
    cout << "\n";

    /*
    Сортировка Обменом: -400 -1 2 4 7 10 160 
    Сортировка Выбором: -400 -1 2 4 7 10 160 
    Сортировка Вставками: -400 -1 2 4 7 10 160 
    */

    return 0;
}
