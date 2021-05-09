/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:49:44 by azaid             #+#    #+#             */
/*   Updated: 2021/04/16 11:31:28 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *arr;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	if (!(arr = (int *)malloc(size * sizeof(int))))
		return (-1);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
