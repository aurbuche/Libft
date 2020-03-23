/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:46:23 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:34 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char		*dst;
	size_t		i;

	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * (ft_strnlen(str, n) + 1))))
		return (NULL);
	while (n)
	{
		dst[i] = str[i];
		i++;
		n--;
	}
	dst[i] = '\0';
	return (dst);
}
