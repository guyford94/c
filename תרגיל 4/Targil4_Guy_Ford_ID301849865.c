#include <stdio.h>
#include <string.h>

void main() 
{
//Defining variables
	char str_1[10],temp;
	int i, size;
//Receiving a string from the user
	printf("Please enter a string: \n");
	gets(str_1);
//Finding the length of the string
	size = strlen(str_1)-1;
//A loop that reverses the string	
	for ( i = 0; i <= size/2; ++i)
	{
		temp = str_1[i];
		str_1[i] = str_1[size - i];
		str_1[size - i] = temp;
	}
	printf("%s\n", str_1);
}