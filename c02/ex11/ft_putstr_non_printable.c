/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:43:41 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/15 07:56:14 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	a = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		if (str[i] <= 31 || str[i] == 127)
		{
			if (str[i] < 0)
				j = str[i] + 256;
			else
				j = str[i];
			ft_putchar('\\');
			k = (j / 16);
			ft_putchar(a[k]);
			k = (j % 16);
			ft_putchar(a[k]);
		}
		i++;
	}
}
