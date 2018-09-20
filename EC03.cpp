// EC03.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#include <conio.h>

#pragma warning(disable:4996)


int main()
{
	char list[5] = " ";
	char phantom;

	printf("Please enter a single letter: ");
	scanf("%c%c", &list[0], &phantom);

	printf("\nPlease enter a single letter: ");
	scanf("%c", &list[1]);
	rewind(stdin);

	printf("\nPlease enter a single letter: ");
	scanf("%c", &list[2]);
	rewind(stdin);

	printf("\nPlease enter a single letter: ");
	scanf("%c", &list[3]);
	rewind(stdin);

	printf("\nPlease enter a single letter: ");
	scanf("%c", &list[4]);

	printf("\nASCII  |  DEC  |  ADDRESS\n");

	printf("%-6c | %-6d| %x\n", list[0], list[0], &list[0]);
	printf("%-6c | %-6d| %x\n", list[1], list[1], &list[1]);
	printf("%-6c | %-6d| %x\n", list[2], list[2], &list[2]);
	printf("%-6c | %-6d| %x\n", list[3], list[3], &list[3]);
	printf("%-6c | %-6d| %x\n", list[4], list[4], &list[4]);


	_getch();
	return 0;
}
