#include "../inc/Array.hpp"

template<typename T>
Array<T>::Array() : _size (0)
{
	_array = new T[_size];
	std::cout << "Created an empty array" << std::endl;
}

template<typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	_array = new T[_size];
	std::cout << "Created an array of size " << _size << std::endl;
}

template<typename T>
Array<T>::Array( const Array &obj )
{
	*this = obj;
}

template<typename T>
Array<T>::~Array()
{
	if (_array != nullptr)
		delete[] _array;
}

template<typename T>
Array& Array<T>::operator=( const Array &obj )
{
	if (this != &obj)
	{
		if (_array != nullptr)
		{
			delete[] _array;
			_array = nullptr;
		}
	}
	_size = obj.size();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = obj._array[i];
	return *this;
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return _size;
}

template<typename T>
T	Array<T>::getArrayElem ( unsigned int i ) const
{
	if ( i > _size )
		throw IndexOutOfBounds();
	return _array[i];
}

template<typename T>
const char	*Array<T>::IndexOutOfBounds::what( void ) const throw()
{
	return "Index is out of bounds.";
}
