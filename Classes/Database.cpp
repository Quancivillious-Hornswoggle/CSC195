#include "Database.h"
#include "Cat.h"
#include "Dog.h"

Database::~Database() {
    for (BaseClass* obj : objects)
    {
        delete obj;
    }
}

void Database::Create(BaseClass::eType type) {
    BaseClass* obj = nullptr;
    switch (type)
    {
    case BaseClass::eType::DOG:
        obj = new Cat;
        break;
    case BaseClass::eType::CAT:
        obj = new Dog;
        break;
    }
    obj->Read(std::cout, std::cin);
    objects.push_back(obj);
}

void Database::Display(const std::string& name) {
    for (BaseClass* obj : objects)
    {
        if (obj->GetName() == name)
        {
            obj->Write(std::cout);
        }
    }
}

void Database::Display(BaseClass::eType type) {
	for (BaseClass* obj : objects)
	{
		if (obj->GetType() == type)
		{
			obj->Write(std::cout);
		}
	}
}

void Database::DisplayAll() {
	for (BaseClass* obj : objects)
	{
		obj->Write(std::cout);
	}
}