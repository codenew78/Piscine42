/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:57 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:49:25 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/* int	main(void)
{
	int	nb;

	nb = -2;
	printf("%d", ft_recursive_power(0, 2));
	return (0);
} */