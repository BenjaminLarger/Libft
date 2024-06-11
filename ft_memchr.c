/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:08:01 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 12:10:06 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main() {
    char tab[] = "/|\x12\xff\x09\x42\2002\42|\\";
    printf("ft: %s\n", (char *)ft_memchr(tab, '\200', 10));
    printf("n: %s\n", (char *)memchr(tab, '\200', 10));

    return 0;
} */