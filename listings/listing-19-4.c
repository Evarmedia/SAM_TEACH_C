#include <stdio.h>

/**
 * struct computer - structure computer tag
 * @cost: How much was paid for computer.
 * @year: When computer was bought.
 * @cpu_speed: How fast processor is.
 * @cpu_type: what make is processor.
 *
 * Description: holds members of tag computer
 */
struct computer
{
	float cost;
	int year;
	int cpu_speed;
	char cpu_type[20];
};

typedef struct computer SC;

char gets();
void DataReceive(SC *ptr_s);

/**
 * main - entry point of program
 * takes no argument values.
 *
 * Description: calls a function DataReceive with an argument,
 * prints the return values.
 * Return: returns 0 on success.
 */
int main(void)
{
	SC model;

	DataReceive(&model);
	printf("Here are what you entered:\n");
	printf("Year: %d\n", model.year);
	printf("Cost: %6.2f\n", model.cost);
	printf("CPU type: %s\n", model.cpu_type);
	printf("CPU speed: %d MHz\n", model.cpu_speed);

	return (0);
}

/**
 * DataReceive - void data type.
 * @prt_s: pointer to members of struct computer.
 *
 * Return: no return value.
 */
void DataReceive(SC *ptr_s)
{
	printf("The type of the CPU inside the computer?\n");
		gets((*ptr_s).cpu_type);
	printf("The speed(MHz) of the CPU?\n");
		scanf("%d", &(*ptr_s).cpu_speed);
	printf("The year your computer was made?\n");
		scanf("%d", &(*ptr_s).year);
	printf("How much your computer cost?\n");
		scanf("%f", &(*ptr_s).cost);
}

