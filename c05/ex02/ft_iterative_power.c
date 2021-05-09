/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:01:56 by azaid             #+#    #+#             */
/*   Updated: 2021/04/15 12:57:33 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = nb;
	i = 0;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (i < power - 1)
	{
		result *= nb;
		i++;
	}
	return (result);
}
