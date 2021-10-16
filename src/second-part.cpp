#include <iostream>

void swap_func(int& left, int& right) {
    int value = right;
    right = left;
    left = value;
}

int main() {
    int size = 0;

    std::cout << "Write Number: ";
    std::cin >> size;

    int* arr = (int*)malloc(size * sizeof(int));

    if (arr != nullptr) {
        for (int i = 0; i < size; i++) {
            std::cout << "Enter " << i + 1 << " number: ";
            std::cin >> arr[i];
        }
    }
    else {
        std::cout << "Memory wasn't allocated" << std::endl;
        return -1;
    }

    std::cout << "\nNot Sort Array: " << std::endl;
    for(int i = 0; i < size - 1; i++) {
        std::cout << arr[i] << ", ";
    }

    std::cout << arr[size - 1] << std::endl;

    // ---- Sorting ----

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[i] < arr[j]) {
                swap_func(arr[i], arr[j]);
            }
        }
    }

    std::cout << "\nSort Array: " << std::endl;
    for(int i = 0; i < size - 1; i++) {
        std::cout << arr[i] << ", ";
    }


    return 0;
}