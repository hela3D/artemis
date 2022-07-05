#include "hela3D.Business/Person.h"

namespace hela3D::Business
{
Person::Person(const char* firstName, const char* lastName) : _firstName(firstName), _lastName(lastName)
{
}

const char* Person::firstName() const
{
	return _firstName;
}

const char* Person::lastName() const
{
	return _lastName;
}
}
