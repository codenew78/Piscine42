/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:47:04 by juestrel          #+#    #+#             */
/*   Updated: 2023/10/01 11:38:35 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_result(int **array)
{
	int		i;
	int		j;
	char	number_to_print;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			number_to_print = array[j][i] + 48;
			ft_putchar(number_to_print);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}
