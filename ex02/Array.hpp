/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:31 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/23 12:37:51 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>

template <class T>
class Array {
	private :
		unsigned int _num;
		T* _arr;

	public :
		Array();
		Array(unsigned int num);
		~Array(void);
		Array(const Array &other);
		Array& operator=(const Array& other);

	T& operator[](unsigned int num) const;
	unsigned int size(void) const;
};

#include "Array.tpp"

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T>& arr);