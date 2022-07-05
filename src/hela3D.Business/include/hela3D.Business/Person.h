#pragma once

#include <hela3D.Business/Preprocessor.h>

namespace hela3D::Business
{
class HELA3D_BUSINESS_PUBLIC Person
{
private:
	const char* _firstName;
	const char* _lastName;

public:
	explicit Person(const char* firstName, const char* lastName);
	const char* firstName() const;
	const char* lastName() const;
};
}
