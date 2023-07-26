#include<iostream>
using namespace std;
class DIU
{
    public:
        string deptname, batch;
        int id;
        void printdept();
        void printbatch();
        void printid()
        {
            cout<<"Dept. ID is : "<<id<<endl;
        }
};
void DIU::printbatch()
{
    cout<<"Batch is : "<<batch<<endl;
}
void DIU::printdept()
{
    cout<<"Dept. name is : "<<deptname<<endl;
}
int main(){
    DIU myobj;
    myobj.batch = "E-90th";
    myobj.deptname = "CSE";
    myobj.id = 21;
    myobj.printdept();
    myobj.printbatch();
    myobj.printid();
    return 0;
}
