/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:36:17 by azaid             #+#    #+#             */
/*   Updated: 2021/04/08 16:23:35 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int ret;

	ret = 0u;
	while (str[ret] != '\0')
		ret++;
	return (ret);
}

int				ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	unsigned int d_len;
	unsigned int s_len;

	i = 0;
	j = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (nb <= d_len)
		return (s_len + nb);
	else
	{
		i = ft_strlen(dest);
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			if ((i + j) == nb - 1)
				break ;
			j++;
		}
		dest[i + j] = '\0';
	}
	return (d_len + s_len);
}
