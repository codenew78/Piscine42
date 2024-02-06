/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:42 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:47:43 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	n;

	n = nb;
	c = 1;
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (c < power)
	{
		n = n * nb;
		c++;
	}
	return (n);
}

/* int	main(void)
{
	int	nb;

	nb = -2;
	printf("%d", ft_iterative_power(8, 0));
	return (0);
} */