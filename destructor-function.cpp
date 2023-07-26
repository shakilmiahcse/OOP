#include <iostream>
using namespace std;
class MyClass {
   public:
      // Constructor function
      MyClass() {
         cout << "Constructor called." << endl;
      }
      // Destructor function
      ~MyClass() {
         cout << "Destructor called." << endl;
      }
};
int main() {
   // Create an object of MyClass
   MyClass obj;
   return 0;
}

