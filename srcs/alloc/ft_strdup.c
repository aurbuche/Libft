/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:47:51 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:09 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char		*dst;
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	dst = (char *)ft_calloc(sizeof(char), len + 1);
	ft_memcpy(dst, s1, len);
	return (dst);
}
