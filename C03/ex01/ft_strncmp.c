/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:31:40 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:31:40 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("hello", "helium", 3)); // 0
// 	printf("%d\n", ft_strncmp("hello", "helium", 5)); // > 0
// 	printf("%d\n", ft_strncmp("abc", "abc", 0));      // 0
// 	return (0);
// }
