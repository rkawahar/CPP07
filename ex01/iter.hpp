/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:08:52 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/23 12:11:08 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void iter(T *array, size_t length, void (*f)(const T &))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void printValue(T &value)
{
	std::cout << value << std::endl;
}
