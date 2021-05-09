/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:14:09 by azaid             #+#    #+#             */
/*   Updated: 2021/04/07 09:18:23 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < (size / 2))
	{
		tab[i] ^= tab[end];
		tab[end] ^= tab[i];
		tab[i] ^= tab[end];
		i++;
		end--;
	}
}
