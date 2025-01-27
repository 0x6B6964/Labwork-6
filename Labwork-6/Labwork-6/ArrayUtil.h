#ifndef ARRAY_UTIL_H_
#define ARRAY_UTIL_H_

#include <iostream>

class ArrayUtil
{
public:
	template <typename T>
	static void ConsoleLog(T* array, size_t length);
};

template<typename T>
inline void ArrayUtil::ConsoleLog(T* array, size_t length)
{
	if (length == 0)
		return;

	std::cout << array[0];

	for (size_t i = 1; i < length; i++)
		std::cout << ", " << array[i];

	std::cout << std::endl;
}

#endif