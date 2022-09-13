#include <stdio.h>

/**
* main - print the string in the put function
* Descriptin: using the main function
* this program prints "Programming is like building a multilingual puzzle 
* Return: 0
*/
int main(void)
{   
	char c;
	int i;
	long 11;
	long long 111;
	float f;

	printf("size of a char: %1d byte(s)\n", Sizeof(c));
	printf("size of an int: %1d byte(s)\n", Sizeof(i));
        printf("size of a long int: %1d byte(s)\n", Sizeof(11));
	printf("size of a long long: %1d byte(s)\n", Sizeof(111));
        printf("size of a float: %1d byte(s)\n", Sizeof(f));
        return (0);	
}
