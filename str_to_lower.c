/* Autor : Pedro Henrique Dinis Lellis - 20/11/2025 15:18 */

#include "champ_select.h"

char	*str_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			 str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "OLLA";
	
	printf("%s\n", str_to_lower(str));
}*/
