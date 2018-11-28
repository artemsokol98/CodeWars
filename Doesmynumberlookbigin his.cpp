// Does my number look big in this.cpp: определяет точку входа для консольного приложения.
//https://www.codewars.com/kata/does-my-number-look-big-in-this/solutions/cpp
//Description:
//A Narcissistic Number is a number which is the sum of its own digits, each raised to the power of the number of digits in a given base.In this Kata, we will restrict ourselves to decimal(base 10).
//
//For example, take 153 (3 digits) :
//
//	1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153
//	and 1634 (4 digits) :
//
//	1 ^ 4 + 6 ^ 4 + 3 ^ 4 + 4 ^ 4 = 1 + 1296 + 81 + 256 = 1634
//	The Challenge :
//
//Your code must return true or false depending upon whether the given number is a Narcissistic number in base 10.
//
//Error checking for text strings or other invalid inputs is not required, only valid integers will be passed into the function.
#include "stdafx.h"
#include<cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
bool narcissistic(int value)
{
	int a = value, b = 0, c, d = 0;
	while (a>0)//count of digits
	{
		a = a / 10;
		b++;
	}
	a = value;
	while (value>0)//sum of digits in power
	{
		c = value % 10;
		d = d + pow(c, b);
		value = value / 10;
	}
	if (d == a) return true; cout << "true";
	else return false; cout << "false";
}
int main()
{
	narcissistic(66);
	system("pause");
	return 0;
}


