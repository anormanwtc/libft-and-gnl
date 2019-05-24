/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:26:37 by anorman           #+#    #+#             */
/*   Updated: 2019/05/24 15:55:53 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cnt;
	char	*tmp;

	cnt = 0;
	tmp = NULL;
	while (s[cnt] != '\0')
	{
		if (s[cnt] == (char)c)
			tmp = (char *)&s[cnt];
		cnt++;
	}
	if (s[cnt] == (char)c)
		tmp = (char *)&s[cnt];
	return (tmp);
}
