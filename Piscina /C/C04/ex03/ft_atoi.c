/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:49:09 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:45:25 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_to_int(char *str, int c, int n)
{
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = n * 10 + (str[c] - '0');
		c++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	c;
	int	n;
	int	i;

	i = 1;
	c = 0;
	n = 0;
	while ((str[c] == ' ') || (str[c] == '\f') || (str[c] == '\n')
		|| (str[c] == '\r') || (str[c] == '\t') || (str[c] == '\v'))
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			i = i * -1;
		}
		c++;
	}
	n = ft_str_to_int(str, c, n) * i;
	return (n);
}

/* int	main(void)
{
	int		n;
	char	*c;

	c = "        --- --2542asdas";
	printf("%d", ft_atoi(c));
	return (0);
} */