/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:54:39 by azaid             #+#    #+#             */
/*   Updated: 2021/04/15 13:24:15 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_negs(char *c, int *counter)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while ((c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
			c[i] == '\v' || c[i] == '\f' || c[i] == '\r'))
		i++;
	while (c[i])
	{
		if (c[i] == '-')
			result++;
		if (c[i] != '-' && c[i] != '+')
		{
			*counter = i;
			break ;
		}
		i++;
	}
	return (result);
}

int	charinstring(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	get_length(char *c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i])
	{
		if (c[i] == '-' || c[i] == '+' ||
			(c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
			c[i] == '\v' || c[i] == '\f' || c[i] == '\r'))
			return (0);
		j = i + 1;
		while (c[j])
		{
			if (c[i] == c[j])
				return (0);
			++j;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_convert_base2(char *str, char *base)
{
	int i;
	int negs;
	int result;
	int base_length;
	int nb;

	i = 0;
	negs = get_negs(str, &i);
	result = 0;
	if ((base_length = get_length(base)) < 2)
		return (0);
	while (str[i])
	{
		if (!(charinstring(str[i], base)))
			break ;
		if ((nb = get_nb(str[i], base)))
			result = (result * base_length) + nb;
		i++;
	}
	if (negs % 2 != 0)
		result *= -1;
	if (result)
		return (result);
	else
		return (0);
}
