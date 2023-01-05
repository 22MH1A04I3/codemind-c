#include<stdio.h>
int main()
{
    int n,year,week;
    scanf("%d",&n);
    year=n/365;
    week=n%365/7;
    printf("%d
%d",year,week);
    return 0;
}