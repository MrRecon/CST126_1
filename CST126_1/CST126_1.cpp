#include "stdafx.h"
#include <iostream>

using namespace std;
char my_strcpy(char * string_array, const char * string, int array_size);
int Find(char * string_array, char c, int array_size);

int main()
{
	char * string_ptr{ nullptr };
	int string_array_size = sizeof("I was born with a plastic spoon in my mouth.") +1;
	string_ptr = new char[string_array_size];

	my_strcpy(string_ptr, "I was born with a plastic spoon in my mouth.", string_array_size);

	cout << "-- " << string_ptr << " --" << endl;

	Find(string_ptr, 'i', string_array_size);
	Find(string_ptr, 'I', string_array_size);
	Find(string_ptr, 'w', string_array_size);
	Find(string_ptr, 'z', string_array_size);
	Find(string_ptr, 'r', string_array_size);

	cout << endl;

	char * string_ptr2{ nullptr };
	int string_array_size2 = sizeof("");
	string_ptr2 = new char[string_array_size2];

	my_strcpy(string_ptr2, "", string_array_size2);

	cout << "-- " << string_ptr2 << " --" << endl;

	Find(string_ptr2, 'y', string_array_size2);

	cout << endl;

	delete[] string_ptr;
	delete[] string_ptr2;
	string_ptr = nullptr;
	string_ptr2 = nullptr;

	return 0;
}

char my_strcpy(char * string_array, const char * string, int array_size)
{
	for (int i{}; i <= array_size; i++)
	{
		*(string_array + i) = string[i];
	}

	return 0;
}

int Find(char * string_array, char c, int array_size)
{
	for (int i{}; i <= array_size; i++)
	{
		bool char_finder{ string_array[i] == c };

		if (char_finder == true)
		{
			cout << c << " is in position " << i + 1 << endl;
			return 0;
		}

		if (i == array_size)
		{
			cout << c << " is in position -1 " << endl;
			return 0;
		}
	}

	return 0;
}