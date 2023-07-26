#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    // Function that returns an object
    MyClass add(const MyClass& other) const {
        int sum = value + other.value;
        return MyClass(sum);
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    MyClass result = obj1.add(obj2);

    std::cout << "Result: " << result.value << std::endl;

    return 0;
}

