#include<bits/stdc++.h>
using namespace std;
class DIU
{
    public:
        string deptname;
        string batch;
        int id;
        void printname();
        void printbatch();
        void printid()
        {
            cout<<"Dept id is: "<<id;
        }
};
void DIU::printname()
{
    cout<<"Dept name is: "<<deptname;
}
void DIU::printbatch()
{
    cout<<"Batch is: "<<batch;
}
int main(){
    DIU obj1;
    obj1.batch = "E-90th";
    obj1.deptname = "CSE";
    obj1.id = 33;
    obj1.printname();
    cout<<endl;
    obj1.printbatch();
    cout<<endl;
    obj1.printid();
    return 0;
}
