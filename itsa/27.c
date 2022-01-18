#include <stdio.h>

int main(){
    int num,ans[4],i,j,try[4],a,b;
    scanf("%d",&num);
    for(i=0;i<4;i++){
        ans[i]=num%10;
        num/=10;
    }
    while(scanf("%d",&num)!=EOF){
        if(num==0000){
            return 0;
        }
        a=0,b=0;
        for(i=0;i<4;i++){
        try[i]=num%10;
        num/=10;
        }
        for(i=0;i<4;i++){
            if(try[i]==ans[i])
                a++;
            for(j=0;j<4;j++){
                if(ans[j]==try[i]&&i!=j)
                    b++;
            }
        }
        printf("%dA%dB\n",a,b);
    }
    return 0;
}