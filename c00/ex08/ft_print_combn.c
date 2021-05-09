/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:20:55 by azaid             #+#    #+#             */
/*   Updated: 2021/04/06 14:07:29 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int n, char *arr, int i, char val)
{
	while (val <= '9')
	{
		arr[i] = val;
		if (i < n - 1)
			ft_recursive(n, arr, i + 1, val + 1);
		else
		{
			write(1, arr, n);
			if (arr[0] != (10 - n + '0'))
				write(1, ", ", 2);
		}
		val++;
	}
}

void	ft_print_combn(int n)
{
	char arr[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_recursive(n, arr, 0, '0');
}
