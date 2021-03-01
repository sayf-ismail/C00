/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4_ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <stun-ism@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:47:28 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/01 13:52:12 by stun-ism         ###   ########.fr       */
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
		nb *= -1;// Turn integer positive
	}

	// Is num positive?
	if (nb)
	{
		ft_putnbr(nb/10);// Recursive call!
		c = '0' + (nb % 10);
		write(1, &c, 1);
	} else
		return;

	//c = '\n';
	//write(1, &c, 1);
}
