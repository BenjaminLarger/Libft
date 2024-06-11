/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:44:30 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 14:03:00 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/* #include <stdio.h>

int main() {
    const char *str = "Hello, World!";
    char target = 'z';

    char *result = ft_strrchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position: %s\n", target, result);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
 */