/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:18:35 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:35:51 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/* int	main(void)
{
	int	a;
	int	b;
	int	*ap;
	int	*bp;

	ap = &a;
	bp = &b;
	a = 30;
	b = 7;
	ft_div_mod(ap, bp);
	printf("%d, %d", a, b);
	return (0);
} */