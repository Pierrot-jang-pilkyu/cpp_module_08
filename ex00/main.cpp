#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	v;
	std::list<int>		l;
	std::deque<int>		d;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		l.push_back(i);
		d.push_back(i);
	}

	v.push_back(7);
	l.push_back(7);
	d.push_back(7);

	std::list<int>::iterator iter = l.begin();
	int lst_idx = 0;
	for (; iter != easyfind(l, 7); ++iter)
	{
		++lst_idx;
	}

	std::cout << "Find 7 in vector - value : " << *easyfind(v, 7) << " index : " << (easyfind(v, 7) - v.begin()) << std::endl;
	std::cout << "Find 7 in list - value : " << *easyfind(l, 7) << " index : " << lst_idx << std::endl;
	std::cout << "Find 7 in deque - value : " << *easyfind(d, 7) << " index : " << (easyfind(d, 7) - d.begin()) << std::endl << std::endl;
	try
	{
		easyfind(v, 11);
	}
	catch(const CatchNotexistValue& e)
	{
		e.report();
	}
}
