#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T 			*_arr;
	unsigned int _n;
public:
	Array()
	{
		_arr = new T[0];
		_n = 0;
	};
	Array(unsigned int n)
	{
		_arr = new T[n];
		_n = n;
	};
	Array(const Array &param)
	{
		this->_n = param._n;
		this->_arr = new T[param._n];
		for (unsigned int i = 0; i < param._n; i++)
  			this->_arr[i] = param._arr[i];
	};
	Array &operator=(const Array &param)
	{
		if (this == &param)
			return (*this);

		this->_n = param._n;
		delete [] this->_arr;
		this->_arr = new T[param._n];
		for (unsigned int i = 0; i < param._n; i++)
  			this->_arr[i] = param._arr[i];
		return (*this);
	};
	~Array (void)
	{
		delete [] this->_arr;
		return ;
	};
	T &operator[](unsigned int i) const
	{
		if (i >= this->_n)
			throw (IndexOutOfBounds());
		return (this->_arr[i]);
	};
	class IndexOutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of bounds");
			};
	};
	unsigned int size(void) const
	{
		return (this->_n);
	};
};

#endif