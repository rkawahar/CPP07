/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:31:31 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/13 08:30:08 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>

class Array {
	private :
		unsigned int _num;
		T* _arr;

	public :
		Array() : _num(0), _arr(new T[0]) {};
		Array(unsigned int num) : _num(num), _arr(new T[num]) {};
		~Array(void) {
			delete [] _arr;
		};
		Array(const Array &other) : _num(other.size()), _arr(new T[other.size()]) {
			for (unsigned int i = 0; i < other.size(); i++) {
				this->_arr[i] = other._arr[i];
			}
		}
		Array& operator=(const Array& other) {
			if (this == &other)
				return *this;
			delete [] _arr;
			this->_num = other._num;
			this->_arr = new T[_num];
			for (unsigned int i = 0; i < other.size(); i++) {
				this->_arr[i] = other._arr[i];
			}
			return *this;
		}

		T& operator[](unsigned int num) const {
			if (num >= _num)
				throw std::out_of_range("Index error : Index is out of range.");
			return (_arr[num]);
		}
		unsigned int size(void) const {
			return (_num);
		}
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T>& arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		os << "arr[" << i << "] = " << arr[i] << std::endl;
	}
	return os;
}