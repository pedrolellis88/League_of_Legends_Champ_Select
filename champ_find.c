/* Autor : Pedro Henrique Dinis Lellis - 20/11/2025 14:59 */

#include "champ_select.h"
static	char	*no_spaces_before_alpha(char *chrs)
{
	int	i;

	i = 0;
	while (chrs[i] == ' ')
		i++;
	return (chrs + i);
}
static	char	*upper_after_space(char	*line)
{
	int	i;
	
	i = 0;
	while(line[i])
	{
		if (line[i] == ' ' && (line[i + 1] >= 'a' && line[i + 1] <= 'z'))
			line[i + 1] -= 32;
		i++;
	}
	return (line);
}
	
static	int	search_chrs(char *line, char *chrs)
{
	int	i;
	int	j;

	
	str_to_lower(line);
	str_to_lower(chrs);
	i = 0;
	j = 0;
	while (line[i] && chrs[j])
	{
		if (line[i] == chrs[j])
			j++;
		i++;
	}
	if (chrs[j] == '\0')	
		return (1);
	return (0);
}

void	*champ_find(char *chrs)
{
	int	fd;
	char	c;
	char	line[256];
	ssize_t	r;
	int	len;
	
	chrs = no_spaces_before_alpha(chrs);
	fd = open("champ_list.txt", O_RDONLY);
	len = 0;
	while ((r = read(fd, &c, 1)) > 0)
	{
		if (c == '\n' || len >= 255)
		{
			line[len] = '\0';
			if (search_chrs(line, chrs))
			{
				write(1, "[", 1);
				line[0] -= 32;
				upper_after_space(line);
				write(1, line, len);
				write(1, "] ", 2);
			}
			len = 0;
		}
		else
		{
			line[len] = c;
			len++;
		}
	}
	write(1, "\n", 1);
	close(fd);
}		
int	main(int c, char **v)
{
	if (c > 2)
		return (1);
	else if (c < 2)
		champ_find("");
	champ_find(v[1]);
	return (0);
}	
