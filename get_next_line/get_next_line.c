/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:18:57 by yugurlu           #+#    #+#             */
/*   Updated: 2022/10/30 18:16:21 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *line;
	static char *read_str;

	if (fd < 0)
		return (0);
	//read_str =
	if (!read_str)
		return (NULL);
	line
}
