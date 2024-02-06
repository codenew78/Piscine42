/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:48:27 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:48:28 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	if (nb == 0)
		return (0);
	if (nb < 0)
		return (1);
	if (nb == 1 || nb == 2)
		return (1);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}

/* int	main(void)
{
	int n;
	n = ft_fibonacci(7);
	printf("%d", ft_fibonacci(7));
	return (0);
} */