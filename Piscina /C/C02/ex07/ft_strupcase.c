/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:54:42 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:40:24 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
			str[i] = str[i];
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

	ft_strupcase(dest);
    printf("%s\n",dest);
	ft_strupcase(src);
    printf("%s\n",src);
	ft_strupcase(x);
    printf("%s\n",x);
    ft_strupcase(nul);
    printf("%s\n",nul);
    return(0);
}*/