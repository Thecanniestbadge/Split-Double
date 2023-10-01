// Programmer:		Thecanniestbadge
// Date:			5/29/2023
// Program Name:	Split Double
// Description:		This program shows both integer parts and decimal parts of a number thats including a decimal place.
//					This program uses both scanf's, printf's, and basic math functions to input, process, and output the correct integers and decimals. 

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int beforeDecimal		= 0;
	double afterDecimal		= 0.0;
	double inputNum			= 0.0;
	// *** INPUT ***
	/* This is where the user inputs a number including a decimal place*/
	printf("Enter a number that includes a decimal point: ");
	scanf("%lf", &inputNum);
	// *** PROCESSING *** 
	/* This is where the number that the user input is broken down into a integer and a decimal separately*/
	beforeDecimal = (int)inputNum;
	afterDecimal = inputNum - beforeDecimal;

	// *** OUTPUT ***
	/* This is where the numbers from the Processing section gets out putted into printf's*/
	printf("The integer part of %lf is %d.\n", inputNum, beforeDecimal);
	printf("The decimal part of %lf is %lf.\n", inputNum, afterDecimal);
	printf("\n"); // blank line


	return 0;
} // end main()
