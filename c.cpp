/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:54:53 by kmurch            #+#    #+#             */
/*   Updated: 2019/10/23 20:09:08 by kmurch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main()
{
	int x;
	int	*a;

	x = -1;
	while (++x < 1000)
	{
		a = new int;
		*a = x;
		cout << &a << endl;
	//	delete a;
	}
	return (0);
}
