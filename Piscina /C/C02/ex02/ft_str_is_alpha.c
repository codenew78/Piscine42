/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:24:20 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:38:18 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	dest[] = "pollo";
	char	src[] = "lolol80";
    char	nul[]="\0";
    int n;

	n = ft_str_is_alpha(dest);
    printf("%d",n);
	n = ft_str_is_alpha(src);
    printf("%d",n);
	n = ft_str_is_alpha(nul);
    printf("%d",n);
    return(0);
}*/