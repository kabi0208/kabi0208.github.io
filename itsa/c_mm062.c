#include <stdio.h>

int main(){
    long long num,mul=1;
    while(scanf("%lld",&num)!=EOF){
        mul*=num;
    }
    num=0;
    while(mul>0){
        if(mul%10!=0)
            break;
        num++;
        mul/=10;
    }
    printf("%lld\n",num);
    return 0;
}