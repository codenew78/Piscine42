/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:00:01 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/30 17:24:36 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putnbr_base(int nbr)
{
	int	rest;
	int	numb_4;
	int	mult;

	numb_4 = 0;
	mult = 1;
	while (nbr >= 1)
	{
		rest = nbr % 4;
		nbr = nbr / 4;
		numb_4 = numb_4 + mult * rest;
		mult = mult * 10;
	}
	numb_4 = numb_4 + 111111111;
	return (numb_4);
}
