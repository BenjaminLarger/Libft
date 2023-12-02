/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:13:16 by blarger           #+#    #+#             */
/*   Updated: 2023/11/28 12:21:13 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/* #include <stdio.h>

int main() {
    char lowercase = '=';
    char uppercase = ft_toupper(lowercase);

    printf("Original: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
} */
