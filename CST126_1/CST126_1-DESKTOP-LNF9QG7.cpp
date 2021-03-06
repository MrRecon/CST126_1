// CST126_1.cpp : Defines the entry point for the console application.
// Code shared with Simeon 
#include "stdafx.h"
#include <iostream>

using namespace std;
char my_strcpy(char * string_array, const char * string);
int Find(char * string_array, char c);

int main()
{
	char * string_ptr{ nullptr };
	int string_array_size{ 46 };
	string_ptr = new char[string_array_size];

	my_strcpy(string_ptr, "I was born with a plastic spoon in my mouth.");

	cout << "\\-\\- " << string_ptr << " \\-\\-" << endl;

	Find(string_ptr, 'i');
	Find(string_ptr, 'I');
	Find(string_ptr, 'w');
	Find(string_ptr, 'z');
	Find(string_ptr, 'r');

	cout << '\n';

	my_strcpy(string_ptr, "");

	cout << "\\-\\- " << string_ptr << " \\-\\-" << endl;

	Find(string_ptr, 'y');

	delete string_ptr;
	string_ptr = nullptr;

	return 0;
}

char my_strcpy(char * string_array, const char * string)
{
	for (int i{}; i <= 46; i++)
	{
		*(string_array + i) = string[i];
	}

	return 0;
}

int Find(char * string_array, char c)
{
	for (int i{}; i <= 46; i++)
	{
		bool char_finder{ string_array[i] == c };

		if (char_finder == 1)
		{
			cout << c << " is in position " << i + 1 << endl;
			return 0;
		}

		if (i == 46)
		{
			cout << c << " is in position -1 " << endl;
			return 0;
		}
	}

	return 0;
}