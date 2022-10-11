#include <stdio.h>
/**
  * main - data types
  *
  * Return: 0
  */
int main(void)
{
	int x, y;
	x = 0xEFFF;
	y = 0x1000;

	printf("the dec val of x and y is %d and %d\n", x, y); /* added some extra lines for better understaning*/

	printf(" ~x and ~decimal is: 0x%04X and %d \n\n", ~x, ~x);

	printf(" ~y and ~decimal is: 0x%04X and %d \n", ~y, ~y);
	return (0);
}
