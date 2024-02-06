/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:46:57 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:46:58 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		n = nb * n;
		nb--;
	}
	return (n);
}

/* int	main(void)
{
	int	nb = -4;

	nb = ft_iterative_factorial(nb);
	printf("%d", nb);
	return (0);
} */