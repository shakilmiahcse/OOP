#include <iostream>
using namespace std;
class Arithmetic {
   public:
      int add(int num1, int num2) {
         return num1 + num2;
      }
      double add(double num1, double num2) {
         return num1 + num2;
      }
};
int main() {
   Arithmetic obj;
   int sum1 = obj.add(10, 20);
   cout<<"Sum of 10 and 20 (integers) is: "<<sum1<<endl;
   float sum2 = obj.add(10.14, 20.718);
   cout<<"Sum of 10.14 and 20.718 (double) is: "<<sum2<<endl;
   return 0;
}
