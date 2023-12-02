/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:54:51 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 10:45:15 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (n == 0 || (dst == src))
		return (dst);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}

/* int main() {
    // Test data
    const char source[] = "1234567890";
    char *destination = NULL;

    // Using your ft_memcpy function to copy from source to destination
    ft_memcpy(destination, source, 17);

    // Printing the result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
} */