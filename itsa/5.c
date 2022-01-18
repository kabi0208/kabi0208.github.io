#include <stdio.h>
int main(){
    int num,i;
    int table[8];
    scanf("%d",&num);
    if(num>=0){
        for(i=0;i<8;i++){
            table[i]=num%2;
            num/=2;
        }
        for(i=7;i>=0;i--)
            printf("%d",table[i]);
        printf("\n");
    }
    if(num<0){
        num*=-1;
        num--;
        for(i=0;i<8;i++){
            table[i]=(num+1)%2;
            num/=2;
        }
        for(i=7;i>=0;i--)
            printf("%d",table[i]);
        printf("\n");
    }
    return 0;
}
