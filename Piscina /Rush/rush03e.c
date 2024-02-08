
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rush03(int x, int y)
{
	int	c;
	int	f;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1 && (f == 1 || f == y))
			{
				ft_putchar('A');
			}
			else if (c == x && (f == 1 || f == y))
			{
				ft_putchar('C');
			}
			else if (c == 1 || f == y || c == x || f == 1)
			{
				ft_putchar('B');
			} 
			else
			{
				ft_putchar(' ');
			}
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}

int	main(void)
{
	rush03(1, 5);
	return (0);
}





