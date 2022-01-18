#include <stdio.h>

int main(){
    int num,i,j;
    scanf("%d",&num);
    if(num<121){
        printf("Summer months:%.2f\n",(float)num*2.10);
        printf("Non-Summer months:%.2f\n",(float)num*2.10);
    }
    else if(num<331){
        printf("Summer months:%.2f\n",(float)(num-120)*3.02+120*2.10);
        printf("Non-Summer months:%.2f\n",(float)(num-120)*2.68+120*2.10);
    }
    else if(num<501){
        printf("Summer months:%.2f\n",(float)(num-330)*4.39+120*2.10+210*3.02);
        printf("Non-Summer months:%.2f\n",(float)(num-330)*3.61+120*2.10+210*2.68);
    }
    else if(num<701){
        printf("Summer months:%.2f\n",(float)(num-500)*4.97+120*2.10+210*3.02+170*4.39);
        printf("Non-Summer months:%.2f\n",(float)(num-500)*4.01+120*2.10+210*2.68+170*3.61);
    }
    else{
        printf("Summer months:%.2f\n",(float)(num-700)*5.63+200*4.97+120*2.10+210*3.02+170*4.39);
        printf("Non-Summer months:%.2f\n",(float)(num-700)*4.50+200*4.01+120*2.10+210*2.68+170*3.61);
    }
    return 0;
}