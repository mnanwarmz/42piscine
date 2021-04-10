/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:07:34 by azaid             #+#    #+#             */
/*   Updated: 2021/04/10 13:12:42 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		result *= (i + 1);
		i++;
	}
	return (result);
}
