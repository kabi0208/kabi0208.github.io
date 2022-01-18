#include <stdio.h>

int search(int n){
    if(n==0||n==1)
        return n+1;
    return (search(n-1)+search(n/2));
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",search(num));
    return 0;
}