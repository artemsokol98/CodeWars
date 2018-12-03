// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//https://www.codewars.com/kata/58f5c63f1e26ecda7e000029
//In this simple Kata your task is to create a function that turns a string into a Mexican Wave.You will be passed a string and you must return that string in an array where an uppercase letter is a person standing up.
//1.  The input string will always be lower case but maybe empty.
//
//2.  If the character in the string is whitespace then pass over it as if it was an empty seat.
//wave("hello") = > {"Hello", "hEllo", "heLlo", "helLo", "hellO"}
#include <vector>
#include <string>
#include "iostream"
using namespace std;
vector<string> wave(string y)
{
	vector <string> z;
	int a;
	a = y.size();
	cout << y << endl;
	cout << a << endl;
	for (int i = 0; i<a; i++)
	{
		if (y[i] == ' ') continue;
		y[i] = toupper(y[i]);
		cout << y[i] << endl;

		cout << y << endl;
		z.push_back(y);
		y[i] = tolower(y[i]);

	}
	return z;
}
int main()
{
    return 0;
}

