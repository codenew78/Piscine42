/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:20:21 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:34:52 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *ptr)
{
	*ptr = 42;
}

/* int	main(void)
{
	int	c;
	int	*ptr;

	c = 0;
	ptr = &c;
	ft_ft(ptr);
	printf("%d", c);
	return (0);
} */