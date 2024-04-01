#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T, typename Func>
void	iter(T &array, int len, Func ft)
{
	for (int i = 0; i < len; i++)
		ft(array[i]);
}

template<typename T>
void	print(T elem)
{
	std::cout << "array element is: " << elem << std::endl;
}

#endif