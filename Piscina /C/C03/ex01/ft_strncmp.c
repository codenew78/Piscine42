/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:07:16 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:41:10 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;

	while ((*s1 == *s2) && (n > 1))
	{
		s1++;
		s2++;
		n--;
	}
	c = *s1 - *s2;
	return (c);
}

/* int	main(void)
{
	int	n;
	char	*s1= "hola";
	char	*s2= "holaz";
	unsigned int	c;

	c = 4;
	n = ft_strncmp(s1, s2, c);
	printf("%d\n", n);
	n = strncmp(s1, s2, c);
	printf("%d", n);
	return (0);
} */