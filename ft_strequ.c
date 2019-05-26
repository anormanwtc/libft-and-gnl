/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:19:16 by anorman           #+#    #+#             */
/*   Updated: 2019/05/26 13:43:38 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	cnt;

	cnt = 0;
	while (s1[cnt] && s1[cnt] == s2[cnt])
		cnt++;
	if (s1[cnt] == s2[cnt])
		return (1);
	return (0);
}
