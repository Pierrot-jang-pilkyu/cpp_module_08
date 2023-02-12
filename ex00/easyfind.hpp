#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <deque>

class CatchNotexistValue : public std::exception
{
public:
	void	report(void) const throw()
	{
		std::cerr << "The value is not existed in the container." << std::endl;
	}
};

template <typename T>
typename T::iterator easyfind(T &_container, int &value)
{
	typename T::iterator iter =  std::find(_container.begin(), _container.end(), value);
	if (iter == _container.end()) throw CatchNotexistValue();

	return (iter);
}

template <typename T>
typename T::iterator easyfind(T &_container, const int &value)
{
	typename T::iterator iter =  std::find(_container.begin(), _container.end(), value);
	if (iter == _container.end()) throw CatchNotexistValue();

	return (iter);
}

template <typename T>
typename T::iterator easyfind(const T &_container, int &value)
{
	typename T::iterator iter =  std::find(_container.begin(), _container.end(), value);
	if (iter == _container.end()) throw CatchNotexistValue();

	return (iter);
}

template <typename T>
typename T::iterator easyfind(const T &_container, const int &value)
{
	typename T::iterator iter =  std::find(_container.begin(), _container.end(), value);
	if (iter == _container.end()) throw CatchNotexistValue();

	return (iter);
}

#endif
