/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:42:53 by azaid             #+#    #+#             */
/*   Updated: 2021/04/06 14:05:08 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 00;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				ft_putchar('0');
			ft_putnbr(i);
			ft_putchar(' ');
			if (j < 10)
				ft_putchar('0');
			ft_putnbr(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
