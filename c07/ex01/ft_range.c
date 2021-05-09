/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:31:51 by azaid             #+#    #+#             */
/*   Updated: 2021/04/16 08:08:15 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int range;
	int *arr;
	int i;

	i = 0;
	range = max - min;
	if (!(arr = (int *)malloc(range * sizeof(int))))
		return (0);
	if (min >= max)
		return (0);
	while (i < range)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
