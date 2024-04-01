#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstdlib>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array( unsigned int n );
		Array( const Array &obj );
		~Array();
		Array	&operator=( const Array<T> &obj );
		T		&operator[]( unsigned int i );
		unsigned int	size() const;
		T	getArrayElem ( unsigned int i ) const;
};

# include "Array.tpp"

#endif