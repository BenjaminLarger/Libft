/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:02:45 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 15:48:33 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s || d >= s + len)
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	else
	{
		d += len;
		s += len;
		while (len-- > 0)
			*--d = *--s;
	}
	return (dst);
}

/* int	main(void)
{
    void *result = ft_memmove(((void *)0), ((void *)0), 5);
    if (result == NULL) {
        printf("return = NULL\n");
    } else {
        printf("return = not NULL\n");
    }
    return (0);
}
 */