#include "stdafx.h"
#include <iostream>

char my_strcpy(char * string_array, const char * string)
{
	for (int i{}; i <= 46; i++)
	{
		*(string_array + i) = string[i];
	}

	return 0;





	int Find(char * string_array, char c);
{
	for (int i{}; i <= 46; i++)
	{
		bool char_finder{ string_array[i] == c };

		if (char_finder == 1)
		{
			std::cout << c << " is in position " << i + 1 << std::endl;
			return 0;
		}

		if (i == 46)
		{
			std::cout << c << " is in position -1 " << std::endl;
			return 0;
		}
	}

	return 0;
}