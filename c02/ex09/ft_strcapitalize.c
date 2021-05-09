/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:25:24 by htarmizi          #+#    #+#             */
/*   Updated: 2021/04/15 07:26:12 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_start;

	i = 0;
	is_start = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && is_start == 0)
				str[i] -= 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && is_start == 1)
				str[i] += 32;
			is_start = 1;
		}
		else
			is_start = 0;
		i++;
	}
	return (str);
}
