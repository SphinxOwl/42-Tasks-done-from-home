/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:33:35 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:33:35 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	k;

	len_d = 0;
	while (len_d < size && dest[len_d] != '\0')
		len_d++;
	len_s = 0;
	while (src[len_s] != '\0')
		len_s++;
	if (len_d == size)
		return (size + len_s);
	k = 0;
	while (src[k] != '\0' && (len_d + k + 1) < size)
	{
		dest[len_d + k] = src[k];
		k++;
	}
	dest[len_d + k] = '\0';
	return (len_d + len_s);
}

// int	main(void)
// {
// 	char	buf[20] = "Hello";
// 	unsigned int	ret;

// 	ret = ft_strlcat(buf, " World", sizeof(buf));
// 	printf("buf: %s\n", buf);
// 	printf("return: %u\n", ret);
// 	ret = ft_strlcat(buf, " This is too long", sizeof(buf));
// 	printf("buf: %s\n", buf);
// 	printf("return: %u\n", ret);
// 	return (0);
// }
