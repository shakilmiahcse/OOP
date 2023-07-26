#include<bits/stdc++.h>
using namespace std;
class check_nam
{
public:
    int R;
    void roll()
    {
    cout<<"Enter your class roll number:"<<endl;
    cin>>R;
    cout<<endl;
    if (R%2==0)
        cout<<R<<" is Even number"<<endl;
    else
        cout<<R<<" is Odd number"<<endl;
    }
};
int main()
{
    check_nam myobj;
    myobj.roll();
    return 0;
}
