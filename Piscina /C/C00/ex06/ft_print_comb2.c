/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:10:57 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:31:21 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/* void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &d, 1);
			write(1, " ", 1);
			write(1, &a, 1);
			write(1, &b, 1);
			if (!(a == '9' && b == '9'))
			{
				write(1, ", ", 2);
			}	
			b++;
		}	
		a++;
	}
} */
void	ft_print_comb2(void)
{
	char	c;
	int		a;
	int		b;

	b = 0;
	while (b <= 99)
	{
		a = b + 1;
		while (a <= 99)
		{
			c = b / 10 + '0';
			write(1, &c, 1);
			c = b % 10 + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = a / 10 + '0';
			write(1, &c, 1);
			c = a % 10 + '0';
			write(1, &c, 1);
			if (b != 98)
				write(1, ", ", 2);
			a++;
		}
		b++;
	}
}
/* int main(void)
{
	ft_print_comb2();
	return (0);
} */
