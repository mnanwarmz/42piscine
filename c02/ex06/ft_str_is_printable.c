/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:09:05 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/14 14:50:59 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 31 || str[a] == 127)
			return (0);
		a++;
	}
	return (1);
}