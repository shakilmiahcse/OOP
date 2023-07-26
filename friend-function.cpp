#include <iostream>
using namespace std;
class MyClass{
  public:
    int x;
    MyClass(int a){
      x = a;
    }
  friend int printX(MyClass obj);
};
printX(MyClass obj){
  cout<<"The value of x is: "<<obj.x<<endl;
}
int main(){
  MyClass obj1(10);
  printX(obj1);
  return 0;
}

