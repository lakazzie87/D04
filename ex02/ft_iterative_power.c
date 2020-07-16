/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:31:47 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 09:37:29 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int c;
	int result;

	if(power < 0)
		return(0);
	else if(power == 0)
		return(1);
	c = 1;
	result = nb;
	while(c < power)
	{
		result = result * nb;
	   c++;	
	}
return(result);	
}
