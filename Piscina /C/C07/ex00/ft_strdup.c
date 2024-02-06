/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:08:51 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/08 20:12:32 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int	n;

	while (*s1 == *s2 && *s1 != '0' && *s2 != '0')
	{
		s1++;
		s2++;
	}
	n = *s1 - *s2;
	return (n);
}

int	main(void)
{
	int	n;
	char	*s1= "hola";
	char	*s2= "holA";

	n = ft_strcmp(s1, s2);
	printf("%d\n", n);
	n = strcmp(s1, s2);
	printf("%d", n);
	return (0);
}