/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:32:08 by gnicolie          #+#    #+#             */
/*   Updated: 2023/09/24 23:15:39 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && f == 1) || (c == x && f == y))
				ft_putchar('A');
			else if ((c == x && f == 1) || (c == 1 && f == y))
				ft_putchar('C');
			else if (f == y || f == 1 || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		f++;
		ft_putchar('\n');
	}
}
