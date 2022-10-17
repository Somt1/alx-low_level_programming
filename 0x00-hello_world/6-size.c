#!/bin/bash

/**
 * main - prints the size of many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
       long int c;
       l	long long int d;
       l	float e;
       l
       l
       l	printf("size of a char %d byte(s)\n", sizeof(a));
       l	printf("size of an int %d byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n" , sizeof(c));
	printf("size of a long long int: %d byte(s)\n", sizeof(d));
	printf("size of a float: %dbyte(s)\n", sizeof(e));
	return (0);
}

