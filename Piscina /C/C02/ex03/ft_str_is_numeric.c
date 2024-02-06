/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:52:08 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/07 22:38:33 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	dest[] = "lolo1234";
	char	src[] = "180";
    char	nul[]="\0";
    int n;

	n = ft_str_is_numeric(dest);
    printf("%d",n);
	n = ft_str_is_numeric(src);
    printf("%d",n);
	n = ft_str_is_numeric(nul);
    printf("%d",n);
    return(0);
} */