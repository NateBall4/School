#include <stdio.h>
#include <conio.h>

#pragma warning(disable:4996)

#ifndef __CHARCODES__
#define __CHARCODES__
// Type codes...
#define LETTER 1
#define NUMBER 2
#define SYMBOL 3
// Sub-type codes...
#define VOWEL 4
#define CONSONANT 5
#define ODD 6
#define EVEN 7
#define UPPER_ASCII 8
#define LOWER_ASCII 9

#endif

int main(){
	char keyStroke = 0;
	//holder is used to store the value in keyStroke before it is changed 
	char holder = 0;
	int typeCode = -1, subTypeCode = -1;

	// GET THE KEYSTROKE (remember to clean phantoms)
	printf("Enter a letter, number, or symbol: ");
	scanf("%c", &keyStroke);
	rewind(stdin);
	// ANALYZE THE KEYSTROKE (IF, IF-ELSE, IF-ELSE-CHAIN here)

	//Testing for number, letter, or symbol
	if (keyStroke >= 65 && keyStroke <= 90 || keyStroke >= 97 && keyStroke <= 122) {
		holder = keyStroke;
		keyStroke = LETTER;
	}
	else if (keyStroke > 47 && keyStroke < 57) {
		holder = keyStroke;
		keyStroke = NUMBER; 
	}
	else {
		holder = keyStroke;
		keyStroke = SYMBOL;
	}

	
	//Testing for even or odd
	while (keyStroke == NUMBER) {
		if (holder % 2 == 0) {
			typeCode = EVEN;		
		}
		else {
			typeCode = ODD;	
		}
		break;
	} 
	//Testing for vowel or consonant
	while (keyStroke == LETTER) {
		if (holder == 'a' || holder == 'e' || holder == 'i' || holder == 'o' || holder == 'u' ||  holder == 'A' || holder == 'E' || holder == 'I' || holder == 'O' || holder == 'U') {
			typeCode = VOWEL;
		}
		else {
			typeCode = CONSONANT;
		}
		break;
	}

	//Testing for ASCII
	while (keyStroke == SYMBOL) {
		if (holder > 0 && holder < 127) {
			typeCode = LOWER_ASCII;
		}
		else {
			typeCode = UPPER_ASCII;
		}
		break;
	} 

	// DISPLAY RESULTS BASED ON SET CODES (SWITCH-CASE)

	switch (typeCode) {

	case LOWER_ASCII:
		printf("you entered a symbol\n");
			printf("your symbol is on the lower ASCII table");
			break;
	case UPPER_ASCII:
		printf("you entered a symbol\n");
		printf("your symbol is on the upper ASCII table");
		break;

	case VOWEL:
		printf("you entered a letter\n");
		printf("your letter is a vowel");
		break;
	case CONSONANT:
		printf("you entered a letter\n");
		printf("your letter is a consonant");
		break;

	case EVEN:
		printf("you entered a number\n");
		printf("your number is even");
		break;
	case ODD:
		printf("you entered a number\n");
		printf("your number is odd");
		break;
		
	}
	


	_getch();
	return 0;

}
