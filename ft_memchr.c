/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyou <tyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:20:55 by tyou              #+#    #+#             */
/*   Updated: 2021/01/06 17:05:23 by tyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		if (*((char*)ptr + i) == value)
			return ((char*)ptr + i);
		i++;
	}
	return (NULL);
}
