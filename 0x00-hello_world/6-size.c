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

	printf("size of a char: %Id byte(s)\n", Sizeof(c));
	printf("size of an int: %Id byte(s)\n", Sizeof(i));
        printf("size of a long int: %Id byte(s)\n", Sizeof(li));
	printf("size of a long long: %Id byte(s)\n", Sizeof(lli));
        printf("size of a float: %Id byte(s)\n", Sizeof(f));
        return (0);	
}
