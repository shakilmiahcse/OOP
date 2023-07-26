#include <iostream>
using namespace std;
int main() {
   int x = 36, y = 0, result = 0;

   try {
      if (y == 0) {
         throw "Division by zero!";
      }
      result = x / y;
      cout << "Result: " << result << endl;
   }
   catch (const char* msg) {
      cerr << "Error: " << msg << endl;
   }
   return 0;
}
