#include<stdio.h>

int main(void) {
    int	matrix[4][4]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int x = 0 ;
    int i;

	while (x < 4)
	{
		i = 0;
		while (i < 4)
		{
			matrix[x][i] = 1;
			i++;
		}
		x++;
	}
    x=0;
    while (x < 4)
	{
		i = 0;
		while (i < 4)
		{
			printf("%d ",matrix[i][x]);
			i++;
		}
        printf("\n");
		x++;
	}
}