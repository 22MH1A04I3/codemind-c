#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,a[N],sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}