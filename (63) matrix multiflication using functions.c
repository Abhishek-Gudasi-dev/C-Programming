#include <stdio.h>

void matrix_input(int m, int n, int matrix[m][n])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("enter the value at row:%d column:%d ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}
void matrixmulti(int am, int an, int bm, int bn, int result_matrix[am][bn], int matrix_a[am][an], int matrix_b[bm][bn])
{
	for (int a = 0; a < am; a++)
	{
		for (int b = 0; b < bn; b++)
		{
			result_matrix[a][b] = 0;
			for (int k = 0; k < am; k++)
			{
				result_matrix[a][b] += matrix_a[a][k] * matrix_b[k][b];
			}
		}
	}
}
int main()
{
	// matrix size....
	int am, an, bm, bn;
	printf("how many rows are there in matrix A : ");
	scanf("%d", &am);
	printf("how many columns are there in matrix A : ");
	scanf("%d", &an);
	printf("how many rows are there in matrix B : ");
	scanf("%d", &bm);
	printf("how many columns are there in matrix B : ");
	scanf("%d", &bn);

	//matrix input.....
	int matrix_a[am][an];
	int matrix_b[bm][bn];
	printf("enter matrix A as per following \n");
	matrix_input(am, an, matrix_a);
	printf("enter matrix B as per following \n");
	matrix_input(bm, bn, matrix_b);
	// matrix calculation
	int result_matrix[am][bn];
	matrixmulti(am, an, bm, bn, result_matrix, matrix_a, matrix_b);

	//result print
	printf("the multiflication of matrix A and B is : \n");
	for (int p = 0; p < am; p++)
	{
		printf("\n");
		for (int q = 0; q < bn; q++)
		{
			printf("%d ", result_matrix[p][q]);
		}
	}

	return 0;
}
