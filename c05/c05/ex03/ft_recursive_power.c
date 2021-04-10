/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:13:37 by azaid             #+#    #+#             */
/*   Updated: 2021/04/10 15:26:27 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return(nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int main()
{
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(5,3));
	printf("%d\n",ft_recursive_power(-1,5));
}