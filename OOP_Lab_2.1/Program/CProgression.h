#pragma once

#include <iostream>
#include <cmath>
#include <string>

class Progression
{
	float _first = 0;
	float _second = 0;
public:
	Progression() {};
	Progression(const Progression& obj) :
		_first(obj._first), _second(obj._second) {}
	Progression(const float &first, const float &second);
	~Progression() {};

	Progression& operator = (const Progression&);

	operator std::string() const;

	friend std::ostream& operator << (std::ostream&, const Progression&);
	friend std::istream& operator >> (std::istream&, Progression&);

	// prefix
	Progression& operator ++();
	Progression& operator --();

	// postfix
	Progression operator ++(int);
	Progression operator --(int);

	float	GetFirst()	const;
	float	GetSecond() const;

	void	SetFirst(const float& val);
	void	SetSecond(const float& val);

	float	elementJ(const unsigned int& j) const;
};

