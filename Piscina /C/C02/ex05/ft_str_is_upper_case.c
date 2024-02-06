/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_upper_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:02:04 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/08 22:07:44 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	dest[] = "lololol";
	char	src[] = "AAAAAAAAAAAAA";
    char	x[] = "vegeta777";
    char	nul[]="\0";
    int n;

	n = ft_str_is_uppercase(dest);
    printf("%d",n);
	n = ft_str_is_uppercase(src);
    printf("%d",n);
	n = ft_str_is_uppercase(x);
    printf("%d",n);
    n = ft_str_is_uppercase(nul);
    printf("%d",n);
    return(0);
}