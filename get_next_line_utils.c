#include "get_next_line.h"

/* copied from the libft */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len_s1);
	ft_memcpy(str + len_s1, s2, len_s2);
	str[len_s1 + len_s2] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest_any, const void *src_any, size_t size)
{
	int	i;

	i = 0;
	if ((!dest_any && !src_any) || !size)
		return (dest_any);
	while (size--)
	{
		((char *)dest_any)[i] = ((char *)src_any)[i];
		i++;
	}
	return (dest_any);
}