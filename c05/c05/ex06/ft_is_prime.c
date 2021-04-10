/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:33:23 by azaid             #+#    #+#             */
/*   Updated: 2021/04/10 18:42:04 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb && i * i < 43641)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int i;
	int half;

	i = 3;
	half = ft_sqrt(nb);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb < 2)
		return (0);
	while (i < half && i < 43641)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(2147483647));
}