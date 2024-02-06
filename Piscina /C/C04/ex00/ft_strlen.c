/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:04:29 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:43:16 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0' )
	{
		n++;
	}
	return (n);
}

/* int	main(void)
{
	char	dest[]= "ha";

	printf("%d",ft_strlen(dest));
	return (0);
} */