#include <stdio.h>

int main(){
    int t[6],i,num,p=0;
    t[0]=1,t[1]=6,t[2]=9,t[3]=23,t[4]=56,t[5]=95;
    scanf("%d",&num);
    for(i=0;i<5;i++){
        printf("%d,",t[i]);
        if(num<t[i+1]&&p==0){
            printf("%d,",num);
            p++;
        }
    }
    if(p==0)
        printf("%d,%d\n",t[5],num);
    if(p!=0)
        printf("%d\n",t[5]);
    return 0;
}