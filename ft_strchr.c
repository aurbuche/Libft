/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:13:16 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 14:04:14 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char*)str;
	i = 0;
	while (s[i])
	{
		if ((char)*s == c)
			return ((char*)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char*)s);
	return (0);
}
