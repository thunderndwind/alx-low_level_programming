#include <stdio.h>

/**
*main- prints the largest prime factor
*
*Return: Always returns 0
*/

int main(void)
{
long num = 612852475143;
long i;

while (i++ < num / 2)
{
if (num % i == 0)
{
num /= 2;
continue;
}

for (i = 3; i < num / 2; i += 2)
{
if (num % i == 0)
num /= i;

}
}
printf("%ld\n", num);
return (0);
}
