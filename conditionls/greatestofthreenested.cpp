#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter 1st number :";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    cout<<"enter 3rd number:";
    cin>>c;
    //a>b and a>c -> a<c -> a greatest
     
     if (a>b){// b can never be the greatest
     if (a>c){
        cout<<a<<"is greatest";
     }
     else { //c>a 'a>b -> c>a>b
        cout<<c<<"is greatest";
     }


     }
else { //b>a
        if(b>c){
            cout<<b<<"is greatest";
}
else{ //c > b , c > b > a
cout<<c<<"is greatest";
}
 }
}