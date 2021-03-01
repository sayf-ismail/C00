/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <stun-ism@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:47:28 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/01 13:21:09 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	// Is num negative?
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		nb *= -1;
	}

	// Is num positive?
	if (nb)
	{
		c = '0' + (nb % 10);
		write(1, &c, 1);
		ft_putnbr(nb/10);
	}

	c = '\n';
	write(1, &c, 1);
}
