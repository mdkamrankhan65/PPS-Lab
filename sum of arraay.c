#include <stdio.h>
int main()
{
int s[5], sum=0;
printf("Enter 5 values:");
for (int i=0; i< 5;i++)
scanf("%d", &s[i]);
for (int i=0; i< 5;i++)
sum=sum+s[i];
printf("Sum= %d",sum);
return 0;
}
