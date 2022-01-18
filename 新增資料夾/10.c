#include<stdio.h>

int main(){
    int x;
    int y;
    scanf("%d%d",&x,&y);
    while(x!=0&&y!=0){
        if(x>=y){
            x=x%y;
        }
        else if(y>x){
            y=y%x;
        }
    }
    if(x>=y){
        printf("%d\n",x);
    }
    else if(y>x){
         printf("%d\n",y);
    }
return 0;
}