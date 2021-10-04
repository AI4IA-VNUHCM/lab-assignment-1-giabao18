/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	int count = 1;
	for (int i = 1; i <= height; i++)
	{
		// in ky tu khoang trang
		if (i <= border || i > (height - border))
		{
			for (int j = i; j < height; j++)
			{
				printf("   ");
			}

			// in ky tu ngoi sao
			for (int j = 1; j <= (2 * i - 1); j++)
			{
				printf(" * ");
			}

			// xuong dong ke tiep
			printf("\n");
		}
		else
		{
			for (int j = i; j < height; j++)
			{
				printf("   ");
			}

			// in ky tu ngoi sao
			for (int j = 1; j <= border; j++)
			{
				printf(" * ");
			}
			for (int i = 0; i < count; i++)
			{
				printf("   ");
			}
			for (int j = 1; j <= border; j++)
			{
				printf(" * ");
			}
			// xuong dong ke tiep
			count = count + 2;
			printf("\n");
		}
	}
	return 0;
}