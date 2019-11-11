/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:34:26 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 12:06:48 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	i = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i != len)
	{
		dst[i] = s[i + len];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
