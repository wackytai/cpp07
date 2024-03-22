#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T, unsigned int _size>
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
		operator=( const Array &obj );
		unsigned int	size() const;
		class	IndexOutOfBounds : public std::exception
		{
			public:
				const char	*what( void ) const throw();
		}
};

#endif