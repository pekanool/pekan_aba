#include "pa.hpp"
#include "shell_sorting.hpp"

int main() {
    const int arr_size = 8;
    int arr[arr_size] = { 34, 7, 23, 32, 5, 62, 32, 12 };

    aba::print_array("Массив до сортировки:", arr, arr_size);

    aba::sortings::shell_sort(arr, arr_size);

    aba::print_array("Массив после сортировки:", arr, arr_size);

    return 0;
}