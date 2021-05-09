/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:59:11 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/14 14:45:39 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(((str[a] < 123 && str[a] > 96) || (str[a] > 64 && str[a] < 91))))
			return (0);
		a++;
	}
	return (1);
}