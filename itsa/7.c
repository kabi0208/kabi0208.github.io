//https://zh.wikipedia.org/wiki/%E5%A4%8D%E6%95%B0_(%E6%95%B0%E5%AD%A6)
#include <stdlib.h>  
#include <stdio.h>  
  
int main(){  
    int n;  
    int a,b,c,d;  
    char op;  
    scanf("%d",&n);  
    for(int i=0;i<n;i++){  
        scanf(" %c%d%d%d%d",&op,&a,&b,&c,&d); 
        if(op=='+')
            printf("%d %d\n",a+c,b+d);
        else if(op=='-')
            printf("%d %d\n",a-c,b-d);
        else if(op=='*')
            printf("%d %d\n",a*c-b*d,b*c+a*d);
        else
            printf("%d %d\n",(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
    }  
}  