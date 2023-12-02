/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:50:24 by blarger           #+#    #+#             */
/*   Updated: 2023/11/30 09:31:43 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	u1;
	unsigned char	u2;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		u1 = (unsigned char)s1[i];
		u2 = (unsigned char)s2[i];
		if (s1[i] != s2[i])
			return (u1 - u2);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
    char str1[] = {-1, 0};  // Assuming char is signed
    char str2[] = {255, 0};
    size_t n = 1;

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}
 */