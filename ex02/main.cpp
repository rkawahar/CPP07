/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:04 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/09/04 01:58:56 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    try {
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
        Array<int> test4(3);
        std::cout << "before copy" << std::endl;
        std::cout << test4 << std::endl;
        std::cout << "after copy" << std::endl;
        test4 = test2;
        std::cout << test4 << std::endl;
        std::cout << std::endl;

        std::cout << "test5 : size() function" << std::endl;
        std::cout << "test4.size = [" << test4.size() << "]" << std::endl;
        std::cout << std::endl;

        std::cout << "test6 : testing [] operator using test2" << std::endl;
        for (unsigned int i = 0; i < test2.size(); i++)
            std::cout << "test[" << i << "] = " << test2[i] << std::endl;
        std::cout << std::endl;

        std::cout << "test7: check chaging value" << std::endl;
        test3[0] = 10;
        std::cout << "test2 : " << test2 << std::endl;
        std::cout << "test3 : " << test3 << std::endl;
        std::cout << std::endl;

		std::cout << "test8: const check" << std::endl;
		const Array<int> test6(3);
		std::cout << test6 << std::endl;

        std::cout << "test9: check exception error" << std::endl;
            std::cout << test2[10] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}