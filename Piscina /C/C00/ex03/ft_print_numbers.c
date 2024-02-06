/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:06:23 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:29:13 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	l;

	l = '0';
	while (l <= '9')
	{
		write(1, &l, 1);
		l++;
	}
}
/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */
