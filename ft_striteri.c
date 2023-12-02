/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:14:32 by blarger           #+#    #+#             */
/*   Updated: 2023/12/01 08:36:37 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (s == NULL)
		return ;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
	return ;
}

/* #include <ctype.h>

void to_upper(unsigned int index, char *c)
{
    (void)index; // We don't use the index in this function
    *c = toupper(*c);
}

int main()
{
	char *s = NULL;
	ft_striteri(s, to_upper);


    printf("%s\n", s);
    return 0;
} */