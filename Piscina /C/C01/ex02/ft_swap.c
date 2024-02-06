/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:26 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:35:20 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 2;
	b = 1;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	printf("%d, %d", a, b);
	return (0);
} */