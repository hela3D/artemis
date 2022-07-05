#include <iostream>

#include <hela3D.Business/Person.h>
#include <hela3D.Data/Repositories/PersonRepository.h>

using namespace std;
using namespace hela3D::Business;
using namespace hela3D::Data::Repositories;

int main()
{
	auto repository = PersonRepository();
	auto one = Person("Ghita", "Bobocel");

	repository.create(&one);

	cout << "Person created...";

	return cin.get();
}
