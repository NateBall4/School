#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

int main() {
	int a = 0;
	int b = 0;
	char choice = ' '; 
	char holder = ' ';
	int invalid = 0;
	int valid = 0;
	double answer = 0.0;

	printf("Please enter your first value: ");
	scanf("%d", &a);
	rewind(stdin);

	printf("\nPlease enter your second value: ");
	scanf("%d", &b);
	rewind(stdin);

	printf("What calculation would you Like to perform?\n");
	printf("For addition enter: +\n");
	printf("For subtraction enter: -\n");
	printf("For multiplication Enter: *\n");
	printf("For division enter: /\n");
	printf("For modulus enter: %%\n\n");


	printf("Please enter your choice: ");
	scanf("%c", &choice);
	printf("\n");

	if (b == 0 && choice == '/' || b == 0 && choice == '%') {
		choice = 'E';
		printf("Cannot divide by 0\n");
		}
	else if (choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%' && choice != invalid){
		holder = choice;
		choice = valid;

	}
	else {
		printf("That is not a valid input\n\n");
		choice = 'I';

	}
	
	

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

		case 'E': printf("cannot divide by zero");
			break;

		case 'I': printf("That is not a valid input");
			break;

		}
	_getch();
	return 0;
}
