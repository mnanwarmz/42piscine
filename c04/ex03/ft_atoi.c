/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:58:06 by azaid             #+#    #+#             */
/*   Updated: 2021/04/12 12:32:15 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	get_negs(char *c, int *counter)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (is_space(c[i]))
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

int	ft_atoi(char *str)
{
	int i;
	int negs;
	int result;

	i = 0;
	negs = get_negs(str, &i);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if (negs % 2 != 0)
		result *= -1;
	if (result)
		return (result);
	else
		return (0);
}
