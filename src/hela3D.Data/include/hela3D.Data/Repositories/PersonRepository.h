#pragma once

#include <vector>

#include <hela3D.Data/Preprocessor.h>
#include "hela3D.Business/Repositories/IPersonRepository.h"

namespace hela3D::Data::Repositories
{
using namespace Business;

class HELA3D_DATA_PUBLIC PersonRepository : public IPersonRepository
{
private:
	std::vector<const Person*> _persons;

public:
	const Person* create(const Person* person) override;
};
}
