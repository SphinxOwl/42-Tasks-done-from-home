/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:58:29 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:58:29 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (i > 1);
}

int	value_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nb;
	int	b_len;
	int	val;

	sign = 1;
	nb = 0;
	b_len = 0;
	while (base[b_len])
		b_len++;
	if (!check_base(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
		sign *= (*str++ == '-') ? -1 : 1;
	while ((val = value_in_base(*str, base)) != -1)
	{
		nb = nb * b_len + val;
		str++;
	}
	return (nb * sign);
}

// int	main(void)
// {
// 	char	*msg;

// 	msg = "   ---+--+2A";
// 	printf("Astroneer decoded: %d\n", ft_atoi_base(msg, "0123456789ABCDEF"));
// 	return (0);
// }
