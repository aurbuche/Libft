/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:34:26 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:53 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		l;
	size_t		lmalloc;
	char		*str;

	i = 0;
	l = ft_strlen(s);
	if ((start >= l) || (len == 0))
		return (ft_calloc(sizeof(char), 1));
	if (start - l < len)
		lmalloc = start - l;
	else
		lmalloc = len;
	str = (char *)ft_calloc(sizeof(char), lmalloc + 1);
	while (len--)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
