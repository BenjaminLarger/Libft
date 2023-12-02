/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:25:33 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 11:53:53 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	end = 0;
	if ((!s1) || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

/* int main(void)
{
    char *str1 = "   Hello, World!   ";
    char *str2 = "---Hello, World!---";
    char *str3 = "Hello, World!";
    char *set1 = " ";
    char *set2 = "-";
    char *set3 = "!";

    char *result;

    result = ft_strtrim(str1, set1);
    printf("Trimmed string: '%s'\n", result);
    free(result); // Don't forget to free the memory

    result = ft_strtrim(str2, set2);
    printf("Trimmed string: '%s'\n", result);
    free(result); // Don't forget to free the memory

    result = ft_strtrim(str3, set3);
    printf("Trimmed string: '%s'\n", result);
    free(result); // Don't forget to free the memory

    return 0;
} */