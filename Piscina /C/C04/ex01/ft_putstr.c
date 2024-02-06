/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:05:21 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:43:25 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		n;
	char	c;

	n = 0;
	while (str[n] != '\0')
	{
		c = str[n];
		write(1, &c, 1);
		n++;
	}
}

/* int	main(void)
{
	char dest[] = "hola";
	ft_putstr(dest);
	return (0);
} */