/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:30:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/20 23:43:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# define MAX_VAL 750

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _size(0) {
	this->_arr = new T();
}

template <typename T>
Array<T>::Array(unsigned int n) { 
	this->_arr = new T[n];
	this->_size = static_cast<size_t>(n);
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : _size(copy._size), _arr(new T[copy._size]) {
	for (size_t i = 0; i < this->_size; ++i)
		this->_arr[i] = copy._arr[i];
}

template <typename T>
Array<T>::~Array() {
	delete [] this->_arr;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T> &copy) {
	if (this != &copy) {
		delete [] this->_arr;
		this->_size = copy._size;
		this->_arr = new T[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_arr[i] = copy._arr[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](size_t pos) const {
	if (pos >= this->_size)
		throw Array<T>::OutOfBoundsException();
	else
		return this->_arr[pos];
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return "The index is out of bounds!!";
}

template <typename T>
size_t	Array<T>::size(void) const {
	return this->_size;
}

template <typename T>
std::ostream & operator<<( std::ostream & os, const Array<T> & array ) {
    os << "[";
    size_t size = array.size();
    for( size_t position = 0; position < size; ++position ) {
        os << array[position];
        if (position < size-1) os << ", ";
    }
    return os << "]";
}

#endif
