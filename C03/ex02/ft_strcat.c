/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:32:13 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:32:13 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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

// 	ft_strcat(buf, " World");
// 	printf("%s\n", buf);
// 	ft_strcat(buf, "!");
// 	printf("%s\n", buf);
// 	return (0);
// }
