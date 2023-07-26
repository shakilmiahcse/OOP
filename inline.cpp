#include <iostream>

class Calculator {
public:
    // Inline function to calculate the square of a number
    inline int square(int num) {
        return num * num;
    }
};

int main() {
    Calculator calc;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = calc.square(num);

    std::cout << "The square of " << num << " is: " << result << std::endl;

    return 0;
}
