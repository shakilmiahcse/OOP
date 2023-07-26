#include <iostream>
using namespace std;
class MyClass {
public:
    int x;
    void printX() {
        cout << "x = " << x << endl;
    }
};
int main() {
    MyClass obj;
    obj.x = 10;
    obj.printX();
    MyClass* ptr;
    ptr = &obj;
    ptr->x = 20;
    ptr->printX();
    return 0;
}

