/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:59:10 by azaid             #+#    #+#             */
/*   Updated: 2021/04/06 14:14:06 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long int nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		nb2 = nb2 * -1;
		ft_putchar('-');
	}
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10);
	ft_putchar(nb2 % 10 + 48);
}
