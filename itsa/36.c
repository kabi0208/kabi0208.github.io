#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y;
    scanf("%d",&y);
       if(y%400==0){
           printf("Bissextile Year\n");
       }
       else{
           if(y%100==0){
               printf("Common Year\n");
           }
           else{
               if(y%4==0){
                   printf("Bissextile Year\n");
               }
               else{
                   printf("Common Year\n");
               }
           }
       }
    
    return 0;
}