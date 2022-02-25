#include<stdio.h>
int main()
{
    int p,t,r;
    //printf("enter principle,time rate of interest");
    scanf("%d%d%d",&p,&t,&r);
    printf("%d",(p*t*r)/100);
    return 0;
}