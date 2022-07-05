#pragma once

#include <hela3D.Business/Preprocessor.h>
#include "hela3D.Business/Person.h"

namespace hela3D::Business
{
class HELA3D_BUSINESS_PUBLIC IPersonRepository
{
protected:
	IPersonRepository() = default;

public:
	virtual ~IPersonRepository() = default;
	virtual const Person* create(const Person* person) = 0;
};
}
