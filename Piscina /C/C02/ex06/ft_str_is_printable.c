/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:10:13 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:39:07 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	dest[] = "lololol";
	char	src[] = "AAAAAAAAAAAAAñ";
    char	x[] = "vegeta777ñ";
    char	nul[]="\0";
    int n;

	n = ft_str_is_printable(dest);
    printf("%d",n);
	n = ft_str_is_printable(src);
    printf("%d",n);
	n = ft_str_is_printable(x);
    printf("%d",n);
    n = ft_str_is_printable(nul);
    printf("%d",n);
    return(0);
} */