#include <iostream>

void shell_sort(int* const arr, const int size);
void print_array(const char* const comment, int* arr, const int size);

int main() {
    const int arr_size = 8;
    int arr[arr_size] = { 34, 7, 23, 32, 5, 62, 32, 12 };

    print_array("Массив до сортировки:", arr, arr_size);

    shell_sort(arr, arr_size);

    print_array("Массив после сортировки:", arr, arr_size);

    return 0;
}

void shell_sort(int* const arr,const int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void print_array(const char* comment, int* arr, const int size) {
    std::cout << comment;
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    std::cout << std::endl;
}
