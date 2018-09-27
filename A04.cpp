//NUMBER
	case NUMBER:
		switch (typeCode) {
		case EVEN:
			printf("you entered a number\n");
			printf("your number is even.");
			break;
		case ODD:
			printf("you entered a number\n");
			printf("your number is odd");
			break;
		}
		//LETTER
	case LETTER:
		switch (typeCode) {
		case VOWEL:
			printf("you entered a leter\n");
			printf("your letter is a vowel");
				break;
		case CONSONANT:
			printf("you entered a leter\n");
			printf("your letter is a consonant");
			break;
		}
		//SYMBOL
	case SYMBOL:
		switch (typeCode) {
		case UPPER_ASCII:
			printf("you entered a symbol\n");
			printf("your symbol is on the upper ASCII table");
			break;
		case LOWER_ASCII:
			printf("you entered a symbol\n");
			printf("your symvol is on the lower ASCII table");
			break;
