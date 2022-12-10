#include<stdio.h>
int main()
{
    int cap,s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512/1024;
    printf("%dkb",cap);
}