/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:10:17 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/08 19:18:55 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = '0' + nb % 10;
		write (1, &c, 1);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = '0' + nb;
		write (1, &c, 1);
	}
}

/* int	main(void)
{
	int	n = -120;

	ft_putnbr(n);
	return (0);
} */