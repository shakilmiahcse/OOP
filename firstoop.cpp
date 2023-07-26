#include<bits/stdc++.h>
using namespace std;
class DIU
{
    public:
        string deptname,batch;
        int id;
        void printdept();
        void printbatch();
        void printid()
        {
            cout<<"Dept ID is: "<<id<<endl<<endl;
        }
};
void DIU::printdept()
{
    cout<<"Dept name is: "<<deptname<<endl<<endl;
}
void DIU::printbatch()
{
    cout<<"batch is: "<<batch<<endl<<endl;
}
int main(){
    DIU obj1;
    obj1->deptname = "CSE";
    obj1.batch = "E-90th";
    obj1.id = 36;
    obj1.printdept();
    obj1.printbatch();
    obj1.printid();
    return 0;


}
