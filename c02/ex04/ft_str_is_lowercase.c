/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:01:52 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/14 14:48:44 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!((str[a] < 123 && str[a] > 96)))
			return (0);
		a++;
	}
	return (1);
}
