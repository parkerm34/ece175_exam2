/*	Author: Parker Mathewson					*
 *	Date: 4/4/12							*
 *	Comment: This program is meant to be an ecryption type program.	*
 *			It reverses the order of a string and subtracts	*
 *			a value from the ansii table.			*
 *									*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define ARRAY_SIZE 20

void reverse_words(char *static_string_a, char *reverse_string, int size)
{
	int a=0, b=0;
	char new_char='a';

	for(a=18; a>=0; a--)
	{
		if(static_string_a[a] != ' '&& static_string_a[a] != ',')
		{
			new_char = static_string_a[a]-1;
			reverse_string[b] = new_char;		//-1 for the ansii table value
		}
		else	
			reverse_string[b] = static_string_a[a];	//prints spaces and coma
		b++;
	}
}
			//reverses and "encrypts" string
int main(void)
{
	char static_string_a[]="To be, or not to be";
	char reverse_string[ARRAY_SIZE];

	reverse_words(static_string_a, reverse_string, ARRAY_SIZE);

	printf("original string: %s", static_string_a);
	printf("\nencrypted string: %s\n", reverse_string);

	return(0);
}
