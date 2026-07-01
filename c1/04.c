/*
Ex 1-4
Write a program to print the corresponding
Celsius to Fahrenheit table.
*/
#include <stdio.h>

int main()
{
	float cel, fahr;
	float lower, upper, step;

	lower = -17.8;
	upper = 148.9;
	step = 11.1;
	
	printf("celsius\tfahrenheit\n");	
	cel = lower;
	while(cel <= upper){
		fahr = (9.0 / 5.0) * cel + 32.0;
		printf("%3.1f\t%3.0f\n", cel, fahr);
		cel = cel + step;
	}
	return 0;
}
/*
thinking process:
go from fahr to cel 
c = (5/9) * (fahr - 32)
(9/5) * c = fahr - 32
f = (9/5) * c + 32



*/
