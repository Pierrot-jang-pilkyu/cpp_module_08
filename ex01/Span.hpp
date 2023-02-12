#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	std::size_t const			N;
	std::vector<std::size_t>	v;
	Span(void);

public:
	Span(std::size_t _N);
	~Span(void);

	void	addNumber(std::size_t n);

	std::size_t	shortestSpan(void);
	std::size_t	longestSpan(void);

	class TooManyArgumentException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
	class TooFewArgumentException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
};

#endif
