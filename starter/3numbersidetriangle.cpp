#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st side:";
    cin>>a;
     cout<<"Enter 2rd side:";
      cin>>b;
       cout<<"Enter 3rd side:";
      cin>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout<<" valid  Triangle";
    }
    else{
         cout<<" Invalid  Triangle";

}

}