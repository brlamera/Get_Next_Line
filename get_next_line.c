/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:53:36 by brlamera          #+#    #+#             */
/*   Updated: 2016/12/05 15:36:16 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	*buffer
	
	if (fd < 0 || line == NULL || (buffer = ft_strnew(BUFF_SIZE)) == NULL)
		return (-1);

}
