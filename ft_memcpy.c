#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t  count;

	count = 0;
	if(!len || (dest == '\0' && src == '\0'))
        return (NULL);
	if (dest == src)
		return (dest);
	while (count < len)
	{
        ((char *)dest)[count] = ((char *)src)[count];
        count++;
	}
	return (dest);
}