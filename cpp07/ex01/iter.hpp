#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *arr, const int len, void (*f)(T &))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void iter(T *arr, const int len, void (*f)(const T &))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

#endif