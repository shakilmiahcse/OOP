#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}
};

// Function that takes an object by value
void passByValue(MyClass obj) {
    obj.value = 10; // Modifying the value of the local copy of the object
}

// Function that takes an object by reference
void passByReference(MyClass& obj) {
    obj.value = 20; // Modifying the original object directly
}

// Function that takes an object by pointer
void passByPointer(MyClass* obj) {
    obj->value = 30; // Modifying the original object through a pointer
}

int main() {
    MyClass obj(0);
    std::cout << "Before function calls: " << obj.value << std::endl;

    passByValue(obj);
    std::cout << "After passByValue: " << obj.value << std::endl;

    passByReference(obj);
    std::cout << "After passByReference: " << obj.value << std::endl;

    passByPointer(&obj);
    std::cout << "After passByPointer: " << obj.value << std::endl;

    return 0;
}

