#include<stdio.h>
int main()
{
int high,low,i,flag;
printf(Enter the two intervals:\n");
scanf("%d,%d",&low,&high);
printf("The prime numbers between two intervals %d and %d:",low,high);
while(low<high)
{
flag=0;
for(i=2;i<=low/2;i++)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",low)
low++;
}
return 0;
}
