/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:03:34 by azaid             #+#    #+#             */
/*   Updated: 2021/04/12 16:43:13 by azaid            ###   ########.fr       */
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

int	get_base_length(char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int negs;
	int result;
	int base_length;
	int nb;

	i = 0;
	negs = get_negs(str, &i);
	result = 0;
	base_length = get_base_length(base);
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
