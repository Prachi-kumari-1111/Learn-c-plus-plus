#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
     
     if(n%5==0 or n%3==0){  //(n%15==0)
        cout<<"divisible by 5 or 3";
     }
     else{
        cout<<"not divisible by 5 or 3";
     }
}
