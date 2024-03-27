#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <array>

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
		Array &operator=( const Array &obj );
		unsigned int	size() const;
		class	IndexOutOfBounds : public std::exception
		{
			public:
				const char	*what( void ) const throw();
		}
		T	getArrayElem ( unsigned int i ) const;
};

#endif