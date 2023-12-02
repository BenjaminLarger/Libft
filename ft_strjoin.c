/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:33:58 by blarger           #+#    #+#             */
/*   Updated: 2023/11/30 11:20:07 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(const char *str);

char	*jointure(char *str, const char *s2, int i, int length)
{
	int	j;

	j = 0;
	while (j < length)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	char	*str;

	l1 = 0;
	l2 = 0;
	if (s1 != NULL)
		l1 = ft_strlen(s1);
	if (s2 != NULL)
		l2 = ft_strlen(s2);
	str = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	jointure(str, s2, i, l2);
	str[l1 + l2] = '\0';
	return (str);
}

/* int main()
{
const char *s1 = "hhhh";
const char *s2 = NULL;




	char *result = ft_strjoin(s1, s2);
	printf("result :%s", result);
} */