// EC03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <conio.h>

#pragma warning(disable:4996)


int main()
{
	char list[] = " "; 

	printf("Please enter a single letter: ");
	scanf("%c\n", &list[0]);
	rewind(stdin);

		printf("Please enter a single letter: ");
		scanf("%c\n", &list[1]);
		rewind(stdin);
		
		printf("Please enter a single letter: ");
		scanf("%c\n", &list[2]);
		rewind(stdin);

		printf("Please enter a single letter: ");
		scanf("%c\n", &list[3]);
		rewind(stdin);

		printf("Please enter a single letter: ");
		scanf("%c\n", &list[4]);



		printf("%c", list[0]);
			printf("%c", list[1]);
			printf("%c", list[2]);
			printf("%c", list[3]);
			printf("%c", list[4]);


	_getch();
    return 0;
}
