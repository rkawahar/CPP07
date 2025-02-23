/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:16:16 by kawaharadar       #+#    #+#             */
/*   Updated: 2025/02/23 12:37:08 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _num(0), _arr(new T[0]) {};

template <typename T>
Array<T>::Array(unsigned int num) : _num(num), _arr(new T[num]) {};

template <typename T>
Array<T>::~Array(void) {
	delete [] _arr;
};

template <typename T>
Array<T>::Array(const Array &other) : _num(other.size()), _arr(new T[other.size()]) {
	for (unsigned int i = 0; i < other.size(); i++) {
		this->_arr[i] = other._arr[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
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

template<typename T>
T& Array<T>::operator[](unsigned int num) const {
	if (num >= _num)
		throw std::out_of_range("Index error : Index is out of range.");
	return (_arr[num]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return (_num);
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T>& arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		os << "arr[" << i << "] = " << arr[i] << std::endl;
	}
	return os;
}