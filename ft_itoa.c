/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:02 by blarger           #+#    #+#             */
/*   Updated: 2023/12/02 16:32:49 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t count, size_t size);

int	int_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*check_if(int n, char *str)
{
	if (n == 0)
	{
		str = (char *)ft_calloc(2, 1);
		if (!str)
			return (0);
		str[0] = '0';
	}
	else if (n == -2147483648)
	{
		str = (char *)ft_calloc(12, 1);
		if (!str)
			return (0);
		ft_strlcpy(str, "-2147483648", 12);
	}
	return (str);
}

char	*ft_print_nb(char *str, int n, int count, int i)
{
	char	temp;
	int		len;

	while (i <= count)
	{
		temp = (n % 10) + '0';
		n = n / 10;
		str[i] = temp;
		i++;
	}
	len = count;
	i = 0;
	if (str[i] == '-')
		i++;
	while (i <= count)
	{
		temp = str[i];
		str[i] = str[count];
		str[count] = temp;
		i++;
		count--;
	}
	str[len + 1] = '\0';
	return (str);
}

void	if_negative(int *i, char *str, int *n)
{
	str[*i] = '-';
	(*i)++;
	*n = -*n;
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		count;

	count = int_length(n);
	i = 0;
	str = NULL;
	if ((n != 0) && (n != -2147483648))
		str = (char *)ft_calloc((count + 1), sizeof(char));
	else
	{
		str = check_if(n, str);
		if (!str)
			return (0);
		return (str);
	}
	if (!str)
		return (0);
	if (n < 0)
		if_negative(&i, str, &n);
	count--;
	ft_print_nb(str, n, count, i);
	return (str);
}

/* int	main()
{
	char *result = ft_itoa(-12345678);
	printf("result =%s\n", result);
}
 */