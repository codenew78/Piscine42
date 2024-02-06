/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:24:11 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/02 13:24:12 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest [n] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "pollo";
	char	src[] = "lolol80";
	unsigned int n;

	n = -9;
	ft_strncpy(dest, src, n);
    printf("%s",dest);
    return(0);
}*/