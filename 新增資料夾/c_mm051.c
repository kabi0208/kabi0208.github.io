#include <stdio.h>
#include <math.h>

int main(){
    int k,total=0,i=1,j,y;
    scanf("%d",&k);
    while(k>0){
        i++;
        y=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                y++;
                break;
            }
        }
        if(y==0){
            printf("%d,",i);
            k--;
            total+=i;
        }
    }
    printf("\n%d\n",total);
    return 0;
}