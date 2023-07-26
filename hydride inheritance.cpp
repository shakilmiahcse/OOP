#include <iostream>
using namespace std;
class A {
   protected:
      int x;
   public:
      A(int a){
         x = a;
      }
};
class B : public A{
   public:
      B(int a) : A(a){}
      int getX(){
         return x;
      }
};
class C {
   protected:
      int y;
   public:
      C(int b){
         y = b;
      }
};
class D : public B, public C{
   public:
      D(int a, int b) : B(a), C(b){}
      int sum() {
         return getX() + y;
      }
};
int main(){
   D d(30, 6);
   cout<<"Sum: "<< d.sum()<<endl;
   return 0;
}

