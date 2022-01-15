/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:10:28 by mstefani          #+#    #+#             */
/*   Updated: 2019/10/16 12:10:54 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_remove_n(char **chr)
{
	int		i;
	char	*tmp;
	char	*ttmp;
	int		chrlen;

	i = 0;
	chrlen = ft_strlen(*chr);
	while ((*chr)[i] != '\0' && (*chr)[i] != '\n')
		i++;
	if ((*chr)[i] == '\0' && chrlen != 0)
	{
		tmp = ft_strsub(*chr, 0, i);
		ft_strdel(chr);
		return (tmp);
	}
	tmp = ft_strsub(*chr, 0, i);
	ttmp = ft_strdup(*chr + i + 1);
	ft_strdel(chr);
	*chr = ttmp;
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	ssize_t		ret;
	static char	*chr[8192];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (!chr[fd])
			chr[fd] = ft_strdup(buf);
		else
			chr[fd] = ft_strjoin(chr[fd], buf);
		if (ft_strchr(buf, '\n') || (ret < BUFF_SIZE))
			break ;
	}
	if (!chr[fd] || (ret == 0 && ft_strlen(chr[fd]) == 0))
		return (0);
	if (ret < 0)
		return (-1);
	*line = ft_remove_n(&chr[fd]);
	return (1);
}
