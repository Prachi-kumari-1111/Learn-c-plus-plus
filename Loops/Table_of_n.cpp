#include <stdio.h>
using namespace std;
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d" ,&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
    return 0;
}