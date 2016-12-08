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

void	ft_putstr(char **str)
{
	int i;

	i = 0;
	while (str)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		get_next_line(const int fd, char **line)
{
	char	buffer;
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	//fd = open(line, O_RDONLY);
	if(!(str = (char **)malloc(sizeof(char **) * 1)))
		return (0);
	while (read(fd, &buffer, 1) != '\0')
	{
		if (buffer != '\n')
		{
			str[i][j] = buffer;
			j++;
		}
		if (buffer == '\n')
		{
			str[i][j] = '\0';
			i++;
			j = 0;
			//ft_putstr(str);
			//close(fd);
			//return (0);
		}
		//write(1, &str, 1);
		//str++;
	}
	close(fd);
	ft_putstr(&str[j]);
	return (0);
}
