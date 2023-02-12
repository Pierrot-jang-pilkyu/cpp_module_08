#include "Span.hpp"

const char *Span::TooManyArgumentException::what(void) const throw()
{
	return ("Arguments of storage is full.");
}

const char *Span::TooFewArgumentException::what(void) const throw()
{
	return ("Arguments of storage is too few.");
}

Span::Span(void) : N(0) {}

Span::Span(std::size_t _N) : N(_N) {}

Span::~Span(void) {}

void Span::addNumber(std::size_t n)
{
	if (this->N == this->v.size())
		throw Span::TooManyArgumentException();

	this->v.push_back(n);
}

std::size_t Span::shortestSpan(void)
{
	if (this->v.size() <= 1)
		throw Span::TooFewArgumentException();

	std::size_t res = -1;
	std::size_t gap = 0;

	std::sort(v.begin(), v.end());

	for (std::size_t i = 0; i < this->v.size() - 1; i++)
	{
		gap = this->v[i + 1] - this->v[i];
		res = res > gap ? gap : res;
	}
	return (res);
}

std::size_t Span::longestSpan(void)
{
	if (this->v.size() <= 1)
		throw Span::TooFewArgumentException();

	std::sort(v.begin(), v.end());

	return (this->v[this->v.size() - 1] - this->v[0]);
}
