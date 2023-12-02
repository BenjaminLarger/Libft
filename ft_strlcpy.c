/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:56:32 by blarger           #+#    #+#             */
/*   Updated: 2023/11/30 08:32:51 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i] != '\0' && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/* int main() {
    char destination[20];
    const char *source = "BBBB";
    
    size_t copied_length = ft_strlcpy(destination, source, 2);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    printf("Copied Length: %zu\n", copied_length);

    return 0;
} */
