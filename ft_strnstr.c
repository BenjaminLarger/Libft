/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:23:01 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 17:19:52 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str);

char	*check_double(const char *hay, const char *needle, size_t i, size_t len)
{
	size_t	k;
	size_t	j;

	j = 0;
	j = 0;
	k = i;
	while (hay[k] == needle[j] && needle[j] != '\0' && k < len)
	{
		k++;
		j++;
	}
	if (needle[j] == '\0')
		return ((char *)&hay[i]);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len > (size_t)ft_strlen(haystack))
		len = ft_strlen(haystack);
	if (!*needle || needle == haystack)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			if (check_double(haystack, needle, i, len) != NULL)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main() {
const char *haystack = "see FF your FF return FF now FF";
const char *needle = "no";
size_t len = -1; // Length of haystack

char *i1 = strnstr(haystack, needle, len);
char *i2 = ft_strnstr(haystack, needle, len);

	printf("f= %s\n", i1);
	printf("ft= %s\n", i2);
}
 */