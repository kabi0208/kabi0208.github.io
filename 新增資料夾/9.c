#include <stdio.h>

int main(){
    long long int num,count=0;
    scanf("%lld",&num);
    for(int i=1;i<num/3+1;i++){
            count+=i;
    }
    printf("%lld\n",3*count);
    return 0;
}