#ifndef __ARRAY__H__
#define __ARRAY__H__

#include <cstddef>
#include <stdexcept>

template< typename T >
class Array
{
	public:
		Array<T>( void );
		Array<T>( unsigned int n );
		Array<T>( Array const & src );
		~Array<T>( void );

		size_t	size( void ) const;

		T&		operator[]( size_t idx ) const;
		Array&	operator=( Array const& rhs );


	private:
		T*		_array;
		size_t	_size;

};

template< typename T >
Array<T>::Array( void ) : _array(NULL), _size(0)
{
	return;
}

template< typename T >
Array<T>::Array( unsigned int n )
{
	this->_array = new T[n];
	this->_size = n;
	return;
}

template< typename T >
Array<T>::Array( Array<T> const & src )
{
	*this = src;
	return;
}

template < typename T >
Array<T>::~Array( void )
{
	if (this->_size)
		delete [] this->_array;
	return;
}

template< typename T >
T&	Array<T>::operator[]( size_t idx ) const
{
	if (idx >= this->_size)
		throw (std::overflow_error("Index out of bounds"));
	return (this->_array[idx]);
}

template< typename T >
Array<T> &	Array<T>::operator=( Array<T> const& rhs )
{
	delete [] this->_array;
	this->_array = new T[rhs.size()];
	for (size_t i = 0; i < rhs.size(); i++)
	{
		this->_array[i] = rhs[i];
	}
	this->_size = rhs.size();
	return (*this);
}

template < typename T >
size_t	Array<T>::size( void ) const
{
	return (this->_size);
}

#endif