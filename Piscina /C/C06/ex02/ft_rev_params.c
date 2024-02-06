/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:09:15 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/08 20:09:16 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i;
    int j;

    j = argc-1;
	while (j > 0)
	{
        i = 0;
        while (argv[j][i] != '\0')
        {
            ft_putchar(argv[j][i]);
            i++;
        }
        ft_putchar('\n');
        j--;
	} 
    printf("%d", j);
}
  