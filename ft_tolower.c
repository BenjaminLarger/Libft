/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:21:51 by blarger           #+#    #+#             */
/*   Updated: 2023/11/28 12:24:10 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/* #include <stdio.h>

int main() {
    char lowercase = 'z';
    char uppercase = ft_tolower(lowercase);

    printf("Original: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
} */