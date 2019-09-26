/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 00:21:09 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/11 00:21:17 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	int		fd;
	char	buffer;

	fd = open(file_name, O_RDONLY);
	while (read(fd, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
	close(fd);
}
