#include<stdio.h>
#define N 3
int main()
{
    int i,n,a[N];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    int s,t,b,cap;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512/1024;
    printf("%dKB",cap);
}