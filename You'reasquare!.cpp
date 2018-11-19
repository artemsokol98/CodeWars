// You're a square!.cpp: определ€ет точку входа дл€ консольного приложени€.
//https://www.codewars.com/kata/54c27a33fb7da0db0100040e
//You like building blocks.You especially like building blocks that are squares.And what you even like more, is to arrange them into a square of square building blocks!
//
//However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're currently working in vainЕ Wait!That's it! You just have to check if your number of building blocks is a perfect square.
//
//Task
//Given an integral number, determine if it's a square number:
//
//In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.
//
//The tests will always use some integral number, so don't worry about that in dynamic typed languages.
//
//Examples
#include "stdafx.h"
#include <cmath>
bool is_square(int n)
{
	if (n == 0) return true;
	if (n<0) return false;
	if (n>0)
	{
		int a;
		a = pow(n, 0.5);
		if (n == pow(a, 2)) return true;
		else return false;
	}
}

int main()
{
    return 0;
}

