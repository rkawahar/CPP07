/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:04 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/13 08:21:27 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	std::cout << "test1 : no parameter constructor" << std::endl;
	Array<int> test1;
	std::cout << test1 << std::endl;
	std::cout << std::endl;

	std::cout << "test2 : unsigned int parameter constructor" << std::endl;
	Array<int> test2(5);
	for (unsigned int i = 0; i < test2.size(); i++) {
		test2[i] = i;
	};
	std::cout << test2 << std::endl;
	std::cout << std::endl;

	std::cout << "test3 : copy constructor copying test2" << std::endl;
	Array<int> test3(test2);
	std::cout << test3 << std::endl;
	std::cout << std::endl;

	std::cout << "test4 : copy operator constructor copying test2" << std::endl;
	Array<int> test4(test2);
	std::cout << test4 << std::endl;
	std::cout << std::endl;

	std::cout << "test5 : size() function" << std::endl;
	std::cout << "test4.size = [" << test4.size() << "]" << std::endl;
	std::cout << std::endl;

	std::cout << "test6 : testing [] operator using test2" << std::endl;
	for (unsigned int i = 0; i < test2.size(); i++)
		std::cout << "test[" << i << "] = " << test2[i] << std::endl;
}