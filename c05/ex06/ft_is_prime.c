/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:33:23 by azaid             #+#    #+#             */
/*   Updated: 2021/04/15 20:54:21 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(unsigned int nb, unsigned int i)
{
	if (nb % i == 0)
		return (0);
	if (i * i > nb)
		return (1);
	return (is_prime(nb, i + 1));
}

int		ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}
