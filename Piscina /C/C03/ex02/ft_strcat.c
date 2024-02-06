/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:43:42 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:41:27 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0' )
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d + s] = src[s];
		s++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[]= "Mike";
	char	src[]= " Waz";

	char *res = ft_strcat(dest, src);
	printf("%s",res);
	return (0);
} */