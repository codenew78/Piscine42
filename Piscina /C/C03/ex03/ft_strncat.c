/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:44:44 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:41:41 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0' )
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[d + s] = src[s];
		s++;
	}
	return (dest);
}

/* int	main(void)
{
    unsigned int nb = 4;
	char	dest[]= "hola";
	char	src[]= " perdida";

	char *res = ft_strncat(dest, src, nb );
	printf("%s",res);
	return (0);
} */