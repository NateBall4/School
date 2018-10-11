#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

int main() {
	//variables
	int a = 0;
	int b = 0;
	char choice = ' ';
	char holder = ' ';
	int invalid = 5000;
	int valid = 5000;
	double answer = 0.0;


	//get input for value a
	printf("Please enter your first value: ");
	scanf("%d", &a);
	rewind(stdin);

	//checks values a for out of bounds
	if (a > 1000 || a < -1000) {
		a = invalid;
		while (a == invalid) {

			//gets new input for value a 
			if (a == invalid) {
				printf("the first value you entred is out of bounds\n");

				printf("please re-enter your first value: ");
				scanf("%d", &a);
				rewind(stdin);
				printf("\n\n");
			}


			//checks to see if new values are in bounds
			if (a > 1000 || a < -1000) {
				a = invalid;
			}
		}

	}

	//get input for value b
	printf("\nPlease enter your second value: ");
	scanf("%d", &b);
	rewind(stdin);


	
	 if (b > 1000 || b < -1000) {
		b = invalid;
		while (b == invalid) {


			//gets new input for value b
			if (b == invalid) {
				printf("the second value you entred is out of bounds\n");

				printf("please re-enter your second value: ");
				scanf("%d", &b);
				rewind(stdin);
				printf("\n\n");
			}

			//checks to see if new values are in bounds

			if (b > 1000 || b < -1000) {
				b = invalid;
			}

		}
	}

	printf("\n\n");

	////while values are out of bounds loop
	//while (a == invalid || b == invalid) {
	//	
	//	//gets new input for value a 
	//	if (a == invalid) {
	//		printf("the first value you entred is out of bounds\n");

	//		printf("please re-enter your first value: ");
	//		scanf("%d", &a);
	//		rewind(stdin);
	//		printf("\n\n");
	//	}

	//	//gets new input for value b
	//	if (b == invalid) {
	//		printf("the second value you entred is out of bounds\n");

	//		printf("please re-enter your second value: ");
	//		scanf("%d", &b);
	//		rewind(stdin);
	//		printf("\n\n");
	//	}
	//	
	////checks to see if new values are in bounds
	//	if (a > 1000 || a < -1000) {
	//		a = invalid;
	//	}

	//	if (b > 1000 || b < -1000) {
	//		b = invalid;
	//	}


	//}

	//list of functions
	printf("What calculation would you Like to perform?\n");
	printf("For addition enter: +\n");
	printf("For subtraction enter: -\n");
	printf("For multiplication Enter: *\n");
	printf("For division enter: /\n");
	printf("For modulus enter: %%\n\n");

	//gets input for choice
	printf("Please enter your choice: ");
	scanf("%c", &choice);
	rewind(stdin);
	printf("\n");


	//checks to see if use is dividing by zero
	if (b == 0 && choice == '/' || b == 0 && choice == '%') {
		choice = 'I';
		printf("Cannot divide by 0\n");

		while (choice = 'I') {
			printf("What calculation would you Like to perform?\n");
			printf("For addition enter: +\n");
			printf("For subtraction enter: -\n");
			printf("For multiplication Enter: *\n");
			printf("For modulus enter: %%\n\n");

			//gets new input
			printf("Please enter your choice: ");
			scanf("%c", &choice);
			rewind(stdin);
			printf("\n");

			//repeats if else loop from before
			if (b == 0 && choice == '/' || b == 0 && choice == '%') {
				choice = 'I';
				printf("----------------------------------------------------------------\n");
				printf("Cannot divide by 0\n");
			}
			else if (choice == '+' || choice == '-' || choice == '*' || choice == '%' && choice != invalid) {
				holder = choice;
				choice = valid;
				break;
			}
			else {//if new input is invalid it marks it again and while loop repeats
				printf("----------------------------------------------------------------\n");
				printf("That is not a valid input\n\n");
				choice = 'I';
			}
		}
	}
	 // checks to see if user input a valid function
	else if (choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%' && choice != invalid) {
		//if input is valid it stores that value in holder and marks the choice as valid
		holder = choice;
		choice = valid;

	}
	else {//markes input as invalid ('I') to initiate the while loop
		printf("----------------------------------------------------------------\n");
		printf("That is not a valid input\n\n");
		choice = 'I';
		//while loop for invalid input
		while (choice = 'I') {
			printf("What calculation would you Like to perform?\n");
			printf("For addition enter: +\n");
			printf("For subtraction enter: -\n");
			printf("For multiplication Enter: *\n");
			printf("For division enter: /\n");
			printf("For modulus enter: %%\n\n");

			//gets new input
			printf("Please enter your choice: ");
			scanf("%c", &choice);
			rewind(stdin);
			printf("\n");

			//repeats if else loop from before
			if (b == 0 && choice == '/' || b == 0 && choice == '%') {
				choice = 'I';
				printf("----------------------------------------------------------------\n");
				printf("Cannot divide by 0\n");
			}
			else if (choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%' && choice != invalid) {
				holder = choice;
				choice = valid;
				break;
			}
			else {//if new input is invalid it marks it again and while loop repeats
				printf("----------------------------------------------------------------\n");
				printf("That is not a valid input\n\n");
				choice = 'I';
			}
		}

	}


	//formulas for various functions
	switch (holder) {

	case '+':
		answer = a + b;
		printf("\n %d %c %d = %.4f", a, holder, b, answer);
		break;

	case '-': answer = a - b;
		printf("\n %d %c %d = %.4f", a, holder, b, answer);
		break;

	case '*': answer = a * b;
		printf("\n %d %c %d = %.4f", a, holder, b, answer);
		break;

	case '/': answer = (double)a / (double)b;
		printf("\n %d %c %d = %.4f", a, holder, b, answer);
		break;

	case '%': answer = a % b;
		printf("\n %d %c %d = %.4f", a, holder, b, answer);
		break;

	case 'I': printf("That is not a valid input");
		break;

	}
	_getch();
	return 0;
}
//A) 9 % 2 = 1.0000
//B) -9 % 2 = -1.0000
//C) 9 % -2 = 1.0000
//D) -9 % -2 = -1.0000
//
//The modulus function finds the remainder after dividing the two functions for instance 
//5 % 10 is 0 because 5/2 = 0 and there are no decimal places
//if the remainder is on the negative spectrum it is considered a negative number. however,
//if it is on the positive spectrum it is a positive number.
//In the instance of 9 % -2 the remainder was positive because the first number was positive.
