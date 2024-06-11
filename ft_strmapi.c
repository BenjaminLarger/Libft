/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:28:19 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 08:13:55 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str);
int	ft_toupper(int c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (s == NULL)
		return (0);
	str = (char *)malloc(1 + ft_strlen(s));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
char to_upper(unsigned int index, char c)
{
    (void)index; // We don't use the index in this function
    return ft_toupper(c);
}

int main()
{
    char const *s = NULL;
    char *result = ft_strmapi(s, to_upper);

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }

    return 0;
}  */