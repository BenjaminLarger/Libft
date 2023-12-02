/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:24:33 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 14:03:19 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (0);
}

/* #include <stdio.h>

int main() {
    const char *str = "s";
    char target = 't';

    char *result = ft_strchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position: %s\n", target, result);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
 */