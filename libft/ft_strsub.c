/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:55:49 by mstefani          #+#    #+#             */
/*   Updated: 2019/09/23 15:25:50 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s || !(substr = ft_memalloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
