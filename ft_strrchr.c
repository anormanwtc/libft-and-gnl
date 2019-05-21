/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:26:37 by anorman           #+#    #+#             */
/*   Updated: 2019/05/21 13:37:30 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cnt;
	char	*tmp;

	cnt = -1;
	tmp = NULL;
	while (s[cnt] != '\0')
	{
		cnt++;
		if (s[cnt] == (char)c)
			tmp = &s[cnt];
	}
	return (tmp);
}