#include<stdio.h>
int main(void)
{
int num,i,sum=1,temp;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
temp=sum*i;
sum=temp;
}
printf("%d",temp);
return 0;
}
