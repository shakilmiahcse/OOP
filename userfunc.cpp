#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int main(){
    int x,y;

cout<<"Enter two Number"<<endl;
cin>>x;
cin>>y;
cout<<"sum : "<<sum(x,y);
return 0;
}
