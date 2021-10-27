#include <iostream>

typedef struct Data_s
{
	std::string		str;
	unsigned int	number;
} Data;

typedef unsigned long uintptr_t;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	uintptr_t	uIntPtr;
	Data		*data = new Data;
	Data		*newData;

	data->str = "School ";
	data->number = 21;

	uIntPtr = serialize(data);
	newData = deserialize(uIntPtr);

	std::cout << newData->str << newData->number << std::endl;
	delete newData;
	return 0;
}