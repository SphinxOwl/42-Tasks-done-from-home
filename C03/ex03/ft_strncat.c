/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:32:41 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:32:41 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	buf[50] = "Hello";

// 	ft_strncat(buf, "World", 3);
// 	printf("%s\n", buf); // "HelloWor"
// 	ft_strncat(buf, "12345", 5);
// 	printf("%s\n", buf); // "HelloWor12345"
// 	return (0);
// }
