#include <stdio.h>

int main(){
    int n,i,t[100],j,p;
    scanf("%d",&p);
    while(p--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&t[i]);
    }
    char c;
    scanf("%c",&c);
    if(c=='A'){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(t[j]>t[j+1]){
                t[n]=t[j];
                t[j]=t[j+1];
                t[j+1]=t[n];
            }
        }
    }
    }
    if(c=='D'){
        for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(t[j]<t[j+1]){
                t[n]=t[j];
                t[j]=t[j+1];
                t[j+1]=t[n];
            }
        }
    }
    }
    for(i=0;i<n-1;i++){
        printf("%d ",t[i]);
    }
    printf("%d\n",t[n-1]);
    }
    return 0;
}