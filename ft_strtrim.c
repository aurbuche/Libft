/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:37:20 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 09:53:50 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_char(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int		ft_check(char *set, char *s1, char c)
{
	int i;

	i = 0;
	if (c == 'r')
	{
		while (s1[i + 1])
			i++;
		while (i > 0 && (ft_check_char(set, s1[i]) == 1))
			i--;
	}
	else if (c == 'l')
	{
		while (s1[i] != '\0' && (ft_check_char(set, s1[i]) == 1))
			i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	int		size;
	char	*s3;
	char	*s4;

	s4 = NULL;
	if (s1[0] == '\0')
		return ((char*)s1);
	s = ft_check((char*)set, (char*)s1, 'l');
	e = ft_check((char*)set, (char*)s1, 'r');
	size = e - s + 1;
	if (s1[s] == '\0')
	{
		if (!(s4 = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		s4[0] = '\0';
		return (s4);
	}
	if (!(s3 = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s3 = ft_strscpy(s3, s1, s, e);
	s3[size] = '\0';
	return (s3);
}
