/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:43:03 by azaid             #+#    #+#             */
/*   Updated: 2021/04/15 20:52:51 by azaid            ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb < 0)
		return (2);
	if (ft_is_prime(i))
		return (i);
	while (!(ft_is_prime(i)))
	{
		i++;
	}
	return (i);
}
