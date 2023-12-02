/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:15:19 by blarger           #+#    #+#             */
/*   Updated: 2023/11/30 09:52:45 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)malloc(count * size);
	if (!array)
		return (0);
	while (i < count * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

/* 

int main() {
    // Test your ft_calloc function
    size_t count = 5;
    size_t size = sizeof (char);
    
    char* array = ft_calloc(count, size);

    if (array != NULL) {
        // Print the allocated array
        for (size_t i = 0; i < count; ++i) {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Free the allocated memory
        free(array);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
 */