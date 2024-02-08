/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_in_out.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:14:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 12:56:34 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//compare top
int	ft_compare_top(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 1;
		prev = inside[0][i];
		while (j < 4)
		{
			if (inside[j][i] > prev)
			{
				prev = inside[j][i];
				counter++;
			}
			j++;
		}
		if (counter != outside[i])
			return (0);
		i++;
	}
	return (1);
}
//compare bottom

int	ft_compare_bottom(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 2;
		prev = inside[3][i];
		while (j >= 0)
		{
			if (inside[j][i] > prev)
			{
				prev = inside[j][i];
				counter++;
			}
			j--;
		}
		if (counter != outside[i + 4])
			return (0);
		i++;
	}
	return (1);
}

//compare left
int	ft_compare_left(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 1;
		prev = inside[i][0];
		while (j < 4)
		{
			if (inside[i][j] > prev)
			{
				prev = inside[i][j];
				counter++;
			}
			j++;
		}
		if (counter != outside[i + 8])
			return (0);
		i++;
	}
	return (1);
}
//compare right

int	ft_compare_right(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 2;
		prev = inside[i][3];
		while (j >= 0)
		{
			if (inside[i][j] > prev)
			{
				prev = inside[i][j];
				counter++;
			}
			j--;
		}
		if (counter != outside[i + 12])
			return (0);
		i++;
	}
	return (1);
}

int	ft_compare_in_out(int **inside, int *outisde)
{
	int	is_true;

	is_true = 1;
	is_true = is_true * ft_compare_top(inside, outisde);
	is_true = is_true * ft_compare_bottom(inside, outisde);
	is_true = is_true * ft_compare_left(inside, outisde);
	is_true = is_true * ft_compare_right(inside, outisde);
	if (is_true == 1)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	int	**inside;
	int	*outside;
	int	i;
	int	j;
	int ret;

	inside = (int **)malloc(4 * 16);
	i = 0;
	while (i < 4)
	{
		inside[i] = (int *)malloc(4 * 16);
		j = 0;
		while (j < 4)
		{
			//inside[i][j] = i;
			//printf("%d\n", inside[i][j]);
			j++;
		}
		i++;
	}
	inside[0][0] = 1;
	inside[0][1] = 2;
	inside[0][2] = 3;
	inside[0][3] = 4;
	inside[1][0] = 4;
	inside[1][1] = 3;
	inside[1][2] = 1;
	inside[1][3] = 2;
	inside[2][0] = 2;
	inside[2][1] = 1;
	inside[2][2] = 4;
	inside[2][3] = 3;
	inside[3][0] = 3;
	inside[3][1] = 4;
	inside[3][2] = 2;
	inside[3][3] = 1;
	outside = (int *)malloc(16 * 16);
	outside[0] = 2;
	outside[1] = 3;
	outside[2] = 2;
	outside[3] = 1;
	outside[4] = 2;
	outside[5] = 1;
	outside[6] = 2;
	outside[7] = 3;
	outside[8] = 4;
	outside[9] = 1;
	outside[10] = 2;
	outside[11] = 2;
	outside[12] = 1;
	outside[13] = 3;
	outside[14] = 2;
	outside[15] = 3;
	ret = ft_compare_in_out(inside, outside);
	printf("%d", ret);
}*/
