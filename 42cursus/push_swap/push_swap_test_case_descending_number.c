/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_descending_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woosekim <woosekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:48:17 by woosekim          #+#    #+#             */
/*   Updated: 2023/04/09 16:11:36 by woosekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 500;
	while (i >= 1)
	{
		printf("%d ", i);
		i--;
	}
}