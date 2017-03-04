#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * main - entry point
  * @argc: takes in arguments
  * @argv: takes in arguments array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isnumber(argv[i]) == 0)
		{

			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}

/**
  * _isnumber - checks if a number
  * @num: takes in a number
  * Return: 0 if succeed and 1 if fail
  */
int _isnumber(char *num)
{
	int i;

	i = 0;

	while (num[i] != '\0')
	{
		if (isdigit(num[i]) == 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
