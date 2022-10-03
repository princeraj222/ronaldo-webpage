#include<iostream>
using namespace std;

int main()
{
    int x , y;
    cout<<"enter two  number"<<endl;
    cin>>x;
    cin>>y;
    x = x + y;//15
    y = x - y;
    x = x - y;
    cout<<"after swap: x= "<<x<<",y="<<y;
}