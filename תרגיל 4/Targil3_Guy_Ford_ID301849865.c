#include <stdio.h>
#include <string.h>
#define M 4
#define N 4

void main() 
{
//Defining variables
	int i,j;
	int arr_1[M][N]= { {1,1,1,1}, {2,4,4,2}, {3,2,1,0}, {7,6,5,4} };
	int arr_2[M][N] = { {2,4,7,1}, {9,3,1,2}, {1,4,2,1}, {1,2,3,4} };
	int arr_3[M][N];
//A loop that passes over each limb in the matrices and connects them according to the position and in addition puts the result in a third matrix

	for ( i = 0; i < M; i++)
	{
		for ( j = 0; j < N; j++)
		{

			printf("%d + %d = %d\t", arr_1[i][j] , arr_2[i][j], arr_1[i][j] + arr_2[i][j]);
			arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
		}
		printf("\n");
	}
	printf("\n");
//Print the new matrix
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", arr_3[i][j]);
		}
		printf("\n");
	}
}