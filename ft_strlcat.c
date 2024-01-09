/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:27:16 by blarger           #+#    #+#             */
/*   Updated: 2023/12/03 17:39:32 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = 0;
	dstlen = 0;
	i = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while ((i < dstsize - dstlen - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	i = 0;
	return (srclen + dstlen);
}

/* int main()
{
    char destination[20] = "hi, ";
    const char *source = "Hello, World!";

    size_t concatenated_length = ft_strlcat(destination, source, 18);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    printf("Concatenated Length: %zu\n", concatenated_length);

    return 0;
} */