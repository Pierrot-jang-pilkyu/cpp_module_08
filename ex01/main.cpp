#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	srand(time(NULL));

	std::size_t	n[] = { 10, 100, 1000, 10000, 100000 };
	Span a[] = { Span(n[0]), Span(n[1]), Span(n[2]), Span(n[3]), Span(n[4]) };

	for (std::size_t i = 0; i < 5; i++)
	{
		for (std::size_t j = 0; j < n[i]; j++)
		{
			a[i].addNumber(std::abs(rand()));
		}
	}

	for (std::size_t i = 0; i < 5; i++)
	{
		std::cout << "n : " << n[i] << ", shortestSpan : " << a[i].shortestSpan() << ", longestSpan : " << a[i].longestSpan() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		a[0].addNumber(11111111111);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span b(0);
		b.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span c(1);
		c.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
