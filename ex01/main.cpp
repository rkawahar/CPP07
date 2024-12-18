/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:08:54 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/12/18 13:14:37 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	iter(array, 5, &printValue);
	std::cout << std::endl;
	std::string array2[] = {"a", "b", "c", "d", "e"};
	iter(array2, 5, &printValue);
	std::cout << std::endl;
	float array3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(array3, 5, &printValue);
	std::cout << std::endl;
	char array4[] = {'a', 'b', 'c', 'd', 'e'};
	iter(array4, 5, &printValue);
	std::cout << std::endl;
	return (0);
}
