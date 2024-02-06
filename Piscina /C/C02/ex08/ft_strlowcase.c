/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:44 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:39:25 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	dest[] = "lololol";
	char	src[] = "AAAAAAAAAAAAAñ";
    char	x[] = "vegeta777ñ";
    char	nul[]="\0";
    int n;

	ft_strlowcase(dest);
    printf("%s\n",dest);
	ft_strlowcase(src);
    printf("%s\n",src);
	ft_strlowcase(x);
    printf("%s\n",x);
    ft_strlowcase(nul);
    printf("%s\n",nul);
    return(0);
} */