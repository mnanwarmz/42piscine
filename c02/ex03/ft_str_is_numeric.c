/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:55:27 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/14 14:46:58 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!((str[a] < 58 && str[a] > 47)))
			return (0);
		a++;
	}
	return (1);
}
