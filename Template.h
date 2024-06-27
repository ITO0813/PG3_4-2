#pragma once
#include <stdio.h>
#include <iostream>

template<typename Type,typename Type2>

class Template{
public:
	Template(Type number1,  Type2 number2) : number1(number1), number2(number2) {}

	Type Min()
	{
		if (number1 < number2)
		{
			return static_cast<Type>(number1);
		}
		else {
			return static_cast<Type2>(number2);
		}
	};
private:
	Type number1;
	Type2 number2;
};