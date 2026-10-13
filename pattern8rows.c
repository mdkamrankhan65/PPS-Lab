#include <stdio.h>
int main()
{
int i, j, N;
printf("Enter size of N: ");
scanf("%d", &N);
printf("Pattern up to %d rows is\n", N);
for (i = 1; i <= N; i++)
{
for (j = 1; j <= i; j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
