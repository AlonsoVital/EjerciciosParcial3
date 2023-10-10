#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j;
	srand(time(NULL));
	printf("Ingrese la longitud de la matriz: \n");
	scanf("%d", &n);
	
	int A[n][n];
	printf("Matriz A:\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			A[i][j]=rand()%(9)+1;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int B[n][n];
	printf("Matriz B:\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			B[i][j]=rand()%(9)+1;
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int op;
	printf("Que quieres obtener de las matrices?\n");
	printf(" 1) Sumar\n 2) Restar\n 3) Multiplicacion\n 4) Diagonal\n 5) Suma trinagular superior\n 6) Terminar el programa\n");
	scanf("%d", &op);
	
	int C[n][n], sumat=0;
	switch (op)
	{
		case 1:
			for (i=0; i<n; i++) 
			{
				for (j=0; j<n; j++)
				{
					C[i][j]=A[i][j]+B[i][j];
				}
			}
			printf("\n");
			
			for (i=0; i<n; i++) 
			{
				for (j=0; j<n; j++)
				{
					printf("%d ",C[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			break;
			
		case 2: 
			for (i=0; i<n; i++) 
			{
				for (j=0; j<n; j++)
				{
					C[i][j]=A[i][j]-B[i][j];
				}
			}
			printf("\n");
			for (i=0; i<n; i++) 
			{
				for (j=0; j<n; j++)
				{
					printf("%d ",C[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			break;
		
		case 3:
			int temporal, k;
			for (i=0; i<n; i++)
			{
				for (j=0; j<n; j++)
				{
					temporal=0;
					for (k=0; k<n; k++)
					{
						temporal += A[i][k] * B[k][j];
					}
					C[i][j] = temporal;
						printf("%d ",C[i][j]);
				}
				printf("\n");
			}
			
			printf("\n");
	
			break;
		
		case 4: 
			int suma;
			for (i=0 ; i<n ; i++)
			{
				for (j=0 ; j<n ; j++)
				{
					if (i==j)
					{
						suma+=A[i][j];
					}
					//printf("\n");
				}
			}
			printf("La suma de la digonal principal de la matriz A es: %d", suma);
			printf("\n");
			break;
			
		case 5: 
			//int sumat=0;
			for (i=0 ; i<n ; i++)
			{
				for (j=i+1 ; j<n ; j++)
				{
					if(i<j)
					{
						printf(" %d ", A[i][j]);
						sumat+=A[i][j];
					}
					else
					{
						printf("  ");
					}
					//printf("%d", A[i][j]);
					//printf("\n");
				}
				printf("\n");
			}
			printf("La suma del triangulo superior de la matriz A es: %d", sumat);
			printf("\n");
			break;
		
		case 6:
			printf("Se termina el programa");
			break;
	}
	
	return 0;
}
