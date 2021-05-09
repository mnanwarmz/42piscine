/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:27:24 by azaid             #+#    #+#             */
/*   Updated: 2021/04/16 08:14:21 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_convert_base2(char *str, char *base);

void	ft_putchar(char c, char *string)
{
	int a;

	a = 0;
	if (string[a] == '\0')
	{
		string[a] = c;
		return ;
	}
	while (string[a] != '\0')
	{
		a++;
		if (string[a] == '\0')
		{
			string[a] = c;
			return ;
		}
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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

void	ft_putnbr_base(int nbr, char *base, int i, char *string)
{
	int				size;
	long long int	nb2;

	nb2 = nbr;
	size = get_base_length(base);
	if (size <= 1)
		return ;
	if (nb2 < 0)
	{
		string[0] = '-';
		nb2 *= -1;
	}
	if (nb2 >= size)
		ft_putnbr_base(nb2 / size, base, i + 1, string);
	ft_putchar(base[nb2 % size], string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb2;
	char	*str;

	str = (char *)malloc(34);
	nb2 = ft_convert_base2(nbr, base_from);
	ft_putnbr_base(nb2, base_to, 0, str);
	return (str);
}
