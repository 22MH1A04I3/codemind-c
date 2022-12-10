#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("%d",a[0]);
}