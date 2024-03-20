#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

<template typename T>
void	iter(T &array, T len, T ft)
{
	for (int i = 0; i < len; i++)
		ft(array[i]);
}

<template typename T>
void	print(T elem)
{
	std::cout << "array element is: " << elem << std::endl;
}

#endif