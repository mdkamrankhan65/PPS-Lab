#include <stdio.h>
int main()
{
int x, y, z, N;
long fact1, fact2, fact3;
printf("Input the number of rows in Pascal's triangle: ");
scanf("%d", &N);
for (x = 0; x < N; x++)
{
for (z = 0; z < N - x - 1; z++)
printf(" ");
for (y = 0; y <= x; y++)
{
fact1 = 1;
fact2 = 1;
fact3 = 1;
for (z = 1; z <= x; z++)
fact1 = fact1 * z;
for (z = 1; z <= y; z++)
fact2 = fact2 * z;
for (z = 1; z <= x - y; z++)
fact3 = fact3 * z;
printf("%ld ", fact1 / (fact2 * fact3));
}
printf("\n");
}
return 0;
}
