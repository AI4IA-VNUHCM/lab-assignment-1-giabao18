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
void printMany(char input, int time)
{
	for (int i = 0; i < time; i++)
		printf("%c ", input);
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	for (int i = 0; i < height; i++)
	{
		int currentBase = 1 + 2 * i;
		printMany(' ', height - i - 1);
		if (i >= border && i < height - border)
		{
			printMany('*', border);
			printMany(' ', currentBase - 2 * border);
			printMany('*', border);
		}
		else
			printMany('*', currentBase);
		printMany(' ', height - i - 1);
		printf("\n");
	}
	return 0;
}