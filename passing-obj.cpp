#include <iostream>
using namespace std;
class MyClass {
public:
    int x;
    void printX() {
        cout << "x = " << x << endl;
    }
};
void modifyObject(MyClass& obj, int newValue) {
    obj.x = newValue;
}
int main() {
    MyClass obj;
    obj.x = 10;
    obj.printX();
    modifyObject(obj, 20);
    obj.printX();
    return 0;
}

