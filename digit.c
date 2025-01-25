

#include <stdio.h>
#include "digit.h"

int main(void){
	int number;
	int result;
	
	printf("enter number to find last digit: ");
	scanf("%d", &number);
	
	result = lastDigit(number);

	printf("lastDigit(%d) = %d\n",number, result);
	return 0;
}
