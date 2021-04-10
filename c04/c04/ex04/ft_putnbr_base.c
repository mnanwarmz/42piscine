/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:19:49 by azaid             #+#    #+#             */
/*   Updated: 2021/04/10 13:05:32 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = ft_strlen(base) - 1;
	if (size <= 1)
		return ;
	if (nbr > size)
		ft_putnbr_base(nbr / size, base);
	if (nbr % size >= 10)
		ft_putchar(nbr % size + 55);
	else
		ft_putchar(nbr % size + 48);
}
