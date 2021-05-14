/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:53:56 by azaid             #+#    #+#             */
/*   Updated: 2021/04/12 16:41:38 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char const *str)
{
	size_t ret;

	ret = 0u;
	while (str[ret] != '\0')
		ret++;
	return (ret);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
