/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:05:47 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:48:15 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	s3 = ft_calloc(sizeof(char), (ls1 + ls2 + 1));
	if (!s3)
		return (NULL);
	s3 = ft_strcpy(s3, s1);
	s3 = ft_strcat(s3, s2);
	return (s3);
}
