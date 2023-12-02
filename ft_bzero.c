/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:09:28 by blarger           #+#    #+#             */
/*   Updated: 2023/11/30 09:51:48 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/* int main() {
    char buffer[42] = "Aefcwvfrevgrgvrfg";

    // Using the standard library function bzero
    bzero(buffer, sizeof(char));
    printf("bzero Result: %s\n", buffer);

    // Using your ft_bzero function
    ft_bzero(buffer, 4);
    printf("ft_bzero Result: %s\n", buffer);

    return 0;
}
 */
