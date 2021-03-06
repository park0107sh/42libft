/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:28:01 by thomkim           #+#    #+#             */
/*   Updated: 2018/03/08 18:03:27 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (*(s2 + i))
	{
		*(s1 + j) = *(s2 + i);
		i++;
		j++;
	}
	*(s1 + j) = '\0';
	return (s1);
}
