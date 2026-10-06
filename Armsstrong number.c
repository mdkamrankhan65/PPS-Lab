#include<stdio.h>

int main()
{
int n,original,reminder,sum=0;
printf("Enter a number");
scanf("%d",&n);

original =n;

while(n!=0)
{

reminder=n%10;
sum=sum+reminder*reminder*reminder;
n=n/10;
}
if(sum==original)
printf("%d is an armstrong number.",original);
else
printf("%d is an armstrong number.",original);

return 0;
}
