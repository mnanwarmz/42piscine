/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 08:54:11 by azaid             #+#    #+#             */
/*   Updated: 2021/04/16 10:11:50 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *str, int size)
{
	char	*ret;
	int		i;

	ret = NULL;
	ret = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = 0;
	return (ret);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s;
	int					i;
	int					j;

	i = 0;
	if (!(s = malloc((ac + 1) * sizeof(struct s_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strcpy(av[i], s[i].size);
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}
