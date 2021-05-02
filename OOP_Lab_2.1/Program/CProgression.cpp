#include "CProgression.h"
#include <sstream>

using namespace std;

Progression::Progression(const float &first, const float &second)
{
	_first = first;
	_second = second;
}

Progression& Progression::operator = (const Progression& pr)
{
	_first = pr._first;
	_second = pr._second;
	return *this;
}
Progression::operator std::string() const
{
	stringstream ss;
	ss << _first << ", " << _second;
	return ss.str();
}
ostream & operator << (ostream & out, const Progression& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Progression& r)
{
	cout << "first = "; in >> r._first;
	cout << "second = "; in >> r._second;
	return in;
	return in;
}
Progression& Progression::operator ++()
{
	_first++;
	return *this;
}
Progression& Progression::operator --()
{
	_first--;
	return *this;
}
Progression Progression::operator ++(int)
{
	Progression t(*this);
	_second++;
	return t;
}
Progression Progression::operator --(int)
{
	Progression t(*this);
	_second--;
	return t;
}

float Progression::GetFirst() const
{
	return _first;
}
float Progression::GetSecond() const
{
	return _second;
}
void Progression::SetFirst(const float& val)
{
	_first = val;
}
void Progression::SetSecond(const float& val)
{
	_second = val;
}
float Progression::elementJ(const unsigned int& j) const
{
	return _first * powf(_second, j);	
}
