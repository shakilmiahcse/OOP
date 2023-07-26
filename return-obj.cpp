#include <iostream>
using namespace std;
class MyClass {
public:
    int x;
    void printX() {
        cout << "x = " << x << endl;
    }
    MyClass operator+(MyClass& obj) {
        MyClass result;
        result.x = x + obj.x;
        return result;
    }
};
MyClass createObject(int value) {
    MyClass obj;
    obj.x = value;
    return obj;
}
int main() {
    MyClass obj1, obj2, obj3;
    obj1.x = 10;
    obj2.x = 20;
    obj3 = obj1 + obj2;
    obj3.printX();
    MyClass newObj = createObject(30);
    newObj.printX();
    return 0;
}

