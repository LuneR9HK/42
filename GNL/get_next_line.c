/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:54:18 by gaemoill          #+#    #+#             */
/*   Updated: 2025/11/23 21:54:18 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*ft_extract_line(char *stash)
{
	int		i;
	char	*line;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = ft_substr(stash, 0, i + 1);
	return (line);
}

static char	*ft_update_stash(char *stash)
{
	int		i;
	char	*tmp;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
	{
		tmp = stash;
		stash = ft_substr(stash, i + 1, ft_strlen(stash) - (i + 1));
		free(tmp);
	}
	else
	{
		free(stash);
		stash = NULL;
	}
	return (stash);
}

static int	ft_newline_in(char *stash)
{
	int	i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_read_fd(char *stash, int fd)
{
	char		*buffer;
	char		*tmp;
	ssize_t		read_bytes;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			break ;
		buffer[read_bytes] = '\0';
		tmp = stash;
		stash = ft_strjoin(tmp, buffer);
		if (ft_newline_in(stash))
			break ;
	}
	free(buffer);
	if (read_bytes < 0)
		return (NULL);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read_fd(stash, fd);
	if (!stash)
		return (NULL);
	line = ft_extract_line(stash);
	if (!stash)
	{
		free(line);
		return (NULL);
	}
	stash = ft_update_stash(stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
	}
	return (line);
}

/*int	main(void)
{	
 	int		fd;
	char	*line;

	line = NULL;
	fd = open("fichier.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Nikoumouk zebi");
		return (1);
	}
	
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = NULL;
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}*/
