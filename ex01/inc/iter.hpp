#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <functional>

template<typename T, size_t len>
void	iter(T &array, size_t len, std::function<void(T&)> ft)
{
	for (size_t i = 0; i < len; i++)
		ft(array[i]);
}

template<typename T>
void	print(T elem)
{
	std::cout << "array element is: " << elem << std::endl;
}

#endif