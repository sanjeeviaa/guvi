#include<stdio.h>
#include<math.h>
void main()
{
int i,n,k;
printf("enterthefirst number");
scanf("%d",n);
printf("enter the second number ");
scanf("%d",&k);
for(i=k+1;i<=n;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
