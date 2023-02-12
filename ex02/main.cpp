#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	{
		MutantStack<int> ms;

		ms.push(5);
		ms.push(17);

		std::cout << ms.top() << std::endl;
		ms.pop();
		std::cout << ms.size() << std::endl;

		ms.push(3);
		ms.push(5);
		ms.push(737);
		ms.push(0);

		MutantStack<int>::iterator it = ms.begin();
		MutantStack<int>::iterator ite = ms.end();

		std::cout << std::endl;
		std::cout << (ite - it) << std::endl;
		std::cout << std::endl;

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(ms);
	}

	std::cout << "------------------------------\n";

	{
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();

		std::cout << std::endl;
		// std::cout << (ite - it) << std::endl;
		std::cout << std::endl;

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::list<int> s(list);
	}

	std::cout << "------------------------------\n";

	{
		std::deque<int> deque;

		deque.push_back(5);
		deque.push_back(17);

		std::cout << deque.back() << std::endl;
		deque.pop_back();
		std::cout << deque.size() << std::endl;

		deque.push_back(3);
		deque.push_back(5);
		deque.push_back(737);
		deque.push_back(0);

		std::deque<int>::iterator it = deque.begin();
		std::deque<int>::iterator ite = deque.end();

		std::cout << std::endl;
		std::cout << (ite - it) << std::endl;
		std::cout << std::endl;

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::deque<int> s(deque);
	}

	std::cout << "------------------------------\n";

	{
		std::vector<int> vector;

		vector.push_back(5);
		vector.push_back(17);

		std::cout << vector.back() << std::endl;
		vector.pop_back();
		std::cout << vector.size() << std::endl;

		vector.push_back(3);
		vector.push_back(5);
		vector.push_back(737);
		vector.push_back(0);

		std::vector<int>::iterator it = vector.begin();
		std::vector<int>::iterator ite = vector.end();

		std::cout << std::endl;
		std::cout << (ite - it) << std::endl;
		std::cout << std::endl;

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::vector<int> s(vector);
	}

	return 0;
}
