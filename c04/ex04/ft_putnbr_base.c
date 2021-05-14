/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:19:49 by azaid             #+#    #+#             */
/*   Updated: 2021/04/12 16:38:15 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
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

int		get_base_length(char *base)
{
	int	base_length;
	int	j;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '-' || base[base_length] == '+' ||
			base[base_length] <= 32)
			return (0);
		j = base_length + 1;
		while (base[j])
		{
			if (base[base_length] == base[j])
				return (0);
			++j;
		}
		++base_length;
	}
	if (base_length < 2)
		return (0);
	return (base_length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size;
	long long int	nb2;

	nb2 = nbr;
	size = get_base_length(base);
	if (size <= 1)
		return ;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 *= -1;
	}
	if (nb2 > size)
		ft_putnbr_base(nb2 / size, base);
	ft_putchar(base[nb2 % size]);
}
