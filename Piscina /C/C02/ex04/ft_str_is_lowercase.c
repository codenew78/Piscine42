/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:01:29 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:38:49 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	dest[] = "lololol";
	char	src[] = "AAAAAAAAAAAAA";
    char	x[] = "vegeta777";
    char	nul[]="\0";
    int n;

	n = ft_str_is_lowercase(dest);
    printf("%d",n);
	n = ft_str_is_lowercase(src);
    printf("%d",n);
	n = ft_str_is_lowercase(x);
    printf("%d",n);
    n = ft_str_is_lowercase(nul);
    printf("%d",n);
    return(0);
} */