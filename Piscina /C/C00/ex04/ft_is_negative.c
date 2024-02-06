/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:20:22 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:29:19 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	char	n;

	if (i >= 0)
	{
		n = 'P';
	}
	else
	{
		n = 'N';
	}
	write(1, &n, 1);
}

/* int	main(void)
{
	ft_is_negative(-4);
	ft_is_negative(14);
	ft_is_negative(4);
	return (0);
} */
