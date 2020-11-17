#include <stdio.h>
#include <string.h>


void main() 
{
//Defining variables
	int i=0,j=0;
	int arr_1[] = {1,2,3,4,5,6,7,8,9};
	int arr_2[] = {2,1,32,3,2,1,3,76,4,9};
	int len_1=0, len_2=0;
//Find the length of the arrays
	len_1 = sizeof(arr_1) / sizeof(int);
	len_2 = sizeof(arr_2) / sizeof(int);
	printf("%d\n%d\n",len_1, len_2);
//A loop that goes through the numbers of the first array and checks with it exists in the second array
	for ( i = 0; i < len_1; i++)
	{
		for ( j = 0; j < len_2; j++)
		{
			if (arr_1[i] == arr_2[j])
			{
				printf("%d,", arr_1[i]);
			}
		}
	}
	printf("\n");
}