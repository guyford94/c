#include <stdio.h>
#include <string.h>
#define N 13

void main() 
{
//Defining variables
	int i,j;
	int arr_1[N][N] ;
//A loop that doubles the members in the second part of the array with the members in the first part of the array
	
	for ( i = 1; i <= N; i++)
	{
		for ( j = 1; j <= N; j++)
		{

			printf("%d\t", i * j);
		}
		printf("\n");
	}
	printf("\n");

}