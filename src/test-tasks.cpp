#include <iostream>

void func_multi_2(int n);
void swap_func(int& left, int& right);

int main() {
    int num;

    std::cout << "Your number is: ";
    std::cin >> num;
    func_multi_2(num);

    std::cout << "it was first function\nlast function is swap numbers:\n\n";

    int x, y;
    std::cout << "write x = ";
    std::cin >> x;

    std::cout << "write y = ";
    std::cin >> y;

    std::cout << std::endl << "Now x is " << x << std::endl;
    std::cout << "Now y is " << y << std::endl << std::endl;

    swap_func(x, y);

    std::cout << "But now x is " << x << std::endl;
    std::cout << "But now y is " << y << std::endl;

    return 0;
}

void swap_func(int& left, int& right) {
    int value = right;
    right = left;
    left = value;
}

void func_multi_2(int n) {
    std::cout << n * 2 << std::endl;
}