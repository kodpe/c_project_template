/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:50:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/10/24 23:22:50 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/name.h"

#define FILENAME "tmp"

int	main(void)
{
	char	**w;
	int		fd;
	int		i;
	int		k;
	
	w = ft_file(FILENAME);
	if (!w)
		return (1);
	fd = open(FILENAME, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (0 > fd)
		return (perror("open"), ft_arfree(w), 1);
	k = 0;
	i = 0;
	while (w[i])
	{
		if (w[i + 1] && ft_strcmp(w[i], w[i + 1]) == 0)
			k++;
		else
		{
			if (k)
				ft_dprintf(fd, "(%i) %s", k + 1, w[i]);
			else
				ft_dprintf(fd, "    %s", w[i]);
			k = 0;
		}
		i++;
	}
	close(fd);
	return (0);
}
