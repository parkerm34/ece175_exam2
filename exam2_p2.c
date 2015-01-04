/*	Author: Parker Mathewson				*
 *	Date: 4/4/12						*
 *	Comments: This program reads in a 5x5 matrix and prints	*
 *			out only the top half and the diagnol of*
 *			said matrix.				*/

#include <stdio.h>
#define ROWS 5
#define COLS 5

int main(void)
{
	int box_array[ROWS][COLS];
	int row_counter=0, col_counter=0, space_counter=0;
								//variable block, need to access a file for matrix
	FILE* inp=fopen("matrix.dat", "r");

	if(inp == NULL) printf("There was an error reading the file.");
	else
	{
		for(row_counter=0; row_counter<ROWS; row_counter++)
			for(col_counter=0; col_counter<COLS; col_counter++)
				fscanf(inp, "%d", &box_array[row_counter][col_counter]);
												//scans values into box_array
		fclose(inp);

		printf("For the original matrix\n");

		for(row_counter=0; row_counter<ROWS; row_counter++)
		{
			for(col_counter=0; col_counter<COLS; col_counter++)
			{
				if(row_counter == 0)
					printf(" %d ", box_array[row_counter][col_counter]);
				else
					printf("%d ", box_array[row_counter][col_counter]);
			}
			printf("\n");
		}
								//Prints out original matrix
		printf("\nTop of the left diagnol\n");

		for(row_counter=0; row_counter<ROWS; row_counter++)
		{
			for(space_counter=0; space_counter<row_counter; space_counter++)
				printf("   ");

			for(col_counter = row_counter; col_counter<COLS; col_counter++)
			{
				if(row_counter == 0)
					printf(" %d ", box_array[row_counter][col_counter]);
				else
					printf("%d ", box_array[row_counter][col_counter]);
			}
			printf("\n");
		}
							//prints out diagnol
	}
	return(0);
}
