#include "hela3D.Data/Repositories/PersonRepository.h"

namespace hela3D::Data::Repositories
{
const Person* PersonRepository::create(const Person* person)
{
	_persons.push_back(person);
	return person;
}
}
