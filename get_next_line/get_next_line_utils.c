/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:40:00 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/30 18:03:59 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	find_c;

	i = 0;
	find_c = c;
	while (s[i] != find_c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

char	*ft_strdup(const char *s1)
{
	size_t	j;
	char	*cpy;

	j = ft_strlen(s1) + 1;
	cpy = ft_calloc(j, sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, j);
	return (cpy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
