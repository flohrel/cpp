#include <stdint.h>
#include <iostream>

struct Data
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;
};

uintptr_t	serialize( Data* ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	struct Data	test = { 'L', 'O', 'L', '!' };

	uintptr_t	raw_ptr = serialize(&test);
	std::cout << raw_ptr << std::endl;

	struct Data* ptr_copy = deserialize(raw_ptr);
	std::cout << ptr_copy->c1 << ptr_copy->c2 << ptr_copy->c3 << ptr_copy->c4 << std::endl;
	return (0);
}