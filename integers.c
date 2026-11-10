
#include <stdio.h>
int main()
{
int values[100];
printf("Enter 10 integers:\n");
for(int i = 0; i < 100; ++i)
{
scanf("%d", &values[i]);
}
printf("Displaying integers:\n");
for(int i = 0; i < 100; ++i)
{
printf("%d\n", values[i]);
}
return 0;
}
