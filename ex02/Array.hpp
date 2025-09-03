/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:31 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/09/04 01:59:52 by rkawahar         ###   ########.fr       */
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

	T& operator[](unsigned int num);
	const T& operator[](unsigned int num) const;
	unsigned int size(void) const;
};

#include "Array.tpp"

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T>& arr);