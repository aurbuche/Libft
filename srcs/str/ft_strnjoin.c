/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:16:15 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:37 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strnjoin(char *s1, char const *s2, size_t len)
{
	char	*str;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((ls1 + ls2) < len)
		len = ls2 + 1;
	str = (char *)ft_malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s1, len);
	str = ft_strcat(str, s2);
	ft_delete(&s1);
	return (str);
}
