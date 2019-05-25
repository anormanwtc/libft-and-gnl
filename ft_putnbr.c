/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:35:38 by anorman           #+#    #+#             */
/*   Updated: 2019/05/25 16:35:01 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	int		neg;

	neg = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		neg = -1;
	}
	if ((nbr / 10) * neg > 0)
		ft_putnbr((nbr / 10) * neg);
	ft_putchar((nbr % 10) + 48);
}
