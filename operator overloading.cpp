#include <iostream>
using namespace std;
class MyNumber {
public:
    MyNumber(int n) : num(n) {}
    MyNumber operator+(const MyNumber& other) const {
        return MyNumber(num + other.num);
    }
    int getValue() const {
        return num;
    }
private:
    int num;
};

int main() {
    MyNumber a(30);
    MyNumber b(6);
    MyNumber c = a + b;
    cout << c.getValue() <<endl;  // Output: 15
    return 0;
}

