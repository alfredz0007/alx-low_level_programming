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
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", Sizeof(c));
	printf("size of an int: %ld byte(s)\n", Sizeof(i));
        printf("size of a long int: %1d byte(s)\n", Sizeof(li));
	printf("size of a long long: %ld byte(s)\n", Sizeof(lli));
        printf("size of a float: %ld byte(s)\n", Sizeof(f));
        return (0);	
}
