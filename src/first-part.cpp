#include <iostream>

int func_multi_2(int n) {
    int result = n * 2;
    return result;
}

int main() {
    const int size = 0x7ffffff;
    int* arr;

    void* mem = malloc(size * sizeof(int));

    if(mem == nullptr) {
        std::cout << "not enough memory :(" << std::endl;
    } else {
        arr = (int*)mem;
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }
        std::cout << arr[1] << "  |  " << arr[size - 1] << std::endl;
        free(mem);
    }
    return 0;
}