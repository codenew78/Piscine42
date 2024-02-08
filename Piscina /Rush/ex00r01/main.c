/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:58:50 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 14:13:45 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_rightinput(char	*str);
int	*ft_initial_assignment(int *array, char *str);
int	ft_putnbr_base(int nbr);
int	ft_conditions(int **array);
int	**ft_complete(int **array);
int	ft_compare_in_out(int **inside, int *outisde);

void	ft_try(int	*outside)
{
	int	*inside;

	inside = (int *)malloc(16);
}

int	main(int argc, char *argv[])
{
	int	*outside;
	int	error;

	error = 1;
	if (argc > 1)
		error = ft_rightinput(argv[1]);
	return (error);
	if (argc != 2 || error != 0)
	{
		write(1, "error\n", 23);
		return (0);
	}
	outside = (int *)malloc(16);
	ft_initial_assignment(outside, argv[1]);
	ft_try(outside);
}
