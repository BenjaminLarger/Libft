/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:10:17 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 18:39:21 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:07:02 by blarger           #+#    #+#             */
/*   Updated: 2023/11/29 15:09:12 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		slen;

	slen = ft_strlen(s);
	if (len > (size_t)(slen - start))
		len = slen - start;
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (!s || len < 0 || slen < start || start < 0)
		return (0);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/* int main() {
    // Test data
    char *source = "hola";
    unsigned int start = 0;
    size_t len = 18446744073709;

    // Using your ft_substr function to create a substring
    char *substring = ft_substr(source, start, len);
    // Printing the result
    printf("Source:%s\n", source);
    printf("Copy :%s\n", substring);

    // Don't forget to free the allocated memory

    return 0;
} */