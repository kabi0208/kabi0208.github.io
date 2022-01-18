#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int num[100];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                num[n]=num[j];
                num[j]=num[j+1];
                num[j+1]=num[n];
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}