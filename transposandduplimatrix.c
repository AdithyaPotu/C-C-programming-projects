#include <stdio.h>
int main() 
{
	int a[10][10], transpose[10][10], r, c,ch,i,j,k;
	printf("Enter rows and columns: ");
	scanf("%d %d", &r, &c);

	// asssigning elements to the matrix
	printf("\nEnter matrix elements:\n");
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	int length = (sizeof(a)/sizeof(a[0]));

	// printing the matrix a[][]
	printf("\nEntered matrix: \n");
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j) {
			printf("%d  ", a[i][j]);
			if (j == c - 1)
				printf("\n");
		}
	printf("\nenter1 for transpose of matrix or enter 2 Duplicate lements in a matrix");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			// computing the transpose
			for ( i = 0; i < r; ++i)
				for ( j = 0; j < c; ++j) {
					transpose[j][i] = a[i][j];
				}

			// printing the transpose
			printf("\nTranspose of the matrix:\n");
			for (i = 0; i < c; ++i)
				for (j = 0; j < r; ++j) {
					printf("%d  ", transpose[i][j]);
					if (j == r - 1)
						printf("\n");
				}
			break;
		case 2:
			//duplication of matix
			printf ("\nduplicate elements in a matrix\n");
			for( i = 0; i < length; i++) {    
				for(j = i + 1; j < length; j++) {    
					if(a[i] == a[j]) 
					{   
						printf("%d\n", a[j]); 
						for ( k = j; k < length - 1; k++)  
						{  
							a[k]=a[k+1];  
						}  
						// decrease the size of array after removing duplicate element  
						length--;  

						// if the position of the elements is changes, don't increase the index j  
						j--;         
					}
				}     

			}
			break;
	
	}
return 0;
}
