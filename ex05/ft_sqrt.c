/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:52:59 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 13:59:41 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_sqrt(int nb)
{
	int tester;

	tester = 0;
	while(1)
	{
		if(tester * tester == nb)
			return(tester);
		else if(tester * tester > nb)
		{
			return(0);
		}
		if(tester > 46340)
			return(0);
		teser++;
	}
}

int main()
{
  printf("%d",ft_sqrt());
  return(0);
}
