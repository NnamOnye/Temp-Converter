#include<stdio.h>
#include<windows.h>
main() 
{
	float fahr, celsius; //Float variables for Fahrenheit and Celsius temperatures

	
	while (1)
	{
		printf("Enter the temperature in Fahrenheit: "); 
		scanf_s("%f", &fahr); /*In visual studio scanf_s() is used over scanf() for inputs*/

		// Calculattion
		celsius = (5.0 / 9.0) * (fahr - 32.0);

		
		printf("The equivalent temperature in Celsius is: %.2f\n", celsius);
	}

	
}
