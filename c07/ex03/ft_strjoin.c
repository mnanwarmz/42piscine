/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:37:29 by azaid             #+#    #+#             */
/*   Updated: 2021/04/16 07:59:09 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		get_total(int size, char **strs, char *sep)
{
	int a;
	int i;
	int total;

	a = 0;
	i = 0;
	total = 0;
	while (a < size)
	{
		total += ft_strlen(strs[a]);
		a++;
	}
	while (i < size - 1)
	{
		total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		i;
	int		c;

	s = malloc((get_total(size, strs, sep) * sizeof(char)) + 1);
	a = 0;
	c = 0;
	while (a < size)
	{
		i = 0;
		while (strs[a][i] != '\0')
		{
			s[c++] = strs[a][i++];
		}
		i = 0;
		while (sep[i] != '\0' && a != size - 1)
		{
			s[c++] = sep[i++];
		}
		a++;
	}
	s[c] = '\0';
	return (s);
}
