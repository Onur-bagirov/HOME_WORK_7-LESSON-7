#include <iostream>

using namespace std;

int main()
{
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";
	int number_1;
	cout << "\tEnter number :";
	cin >> number_1;
	number_1 % 2 == 0 && cout << "\tY!" || cout << "\tN!";
	// Y - couple number
	// N - Single number
	cout << "\n\n\n";
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";
	unsigned int number_2;
	cout << "\tEnter number :";
	cin >> number_2;
	(1 < number_2 && number_2 > 20) && cout << "\tNumber is incorrect!\n";
	((number_2 == 9 || number_2 == 15 || number_2 == 2 || number_2 % 2 != 0) && cout << "\tS!") ||
		((number_2 != 9 && number_2 != 15 && number_2 != 2 && number_2 % 2 == 0) && cout << "\tM!");
	// S - Simple number
	// M - Complex number
	cout << "\n\n\n";
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";
	unsigned int number_3;
	cout << "\tEnter number :";
	cin >> number_3;
	int o = (number_3 / 10000) % 10;
	int n = (number_3 / 1000) % 10;
	int u = (number_3 / 100) % 10;
	int r = (number_3 / 10) % 10;
	int s = number_3 % 10;
	(o == s) && (n == r) && cout << "\tPalindrome is number!" || cout << "\tPalindrome is not number";
	cout << "\n\n\n";
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";
	int number_4;
	cout << "\tEnter number :";
	cin >> number_4;
	(number_4 / 100000000) && cout << "\t is 9 - digiht number!" || (number_4 / 10000000) && cout << "\tIt is 8 - digiht number!" || (number_4 / 1000000) && cout << "\tIt is 7 - digiht number!" || (number_4 / 100000) && cout << "\tIt is 6 - digiht number!" || (number_4 / 10000) && cout << "\tIt is 5 - digiht number!" || (number_4 / 1000) && cout << "\tIt is 4 - digiht number!" || (number_4 / 100) && cout << "\tIt is 3 - digiht number!" || (number_4 / 10) && cout << "\tIt is 2 - digiht number!" || (number_4 / number_4 == 1) && cout << "\tIt is 1 - digiht number!";
	cout << "\n\n\n";
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";
	float number_5_;
	float number_5__;
	float number_5___;
	cout << "\tEnter first number :";
	cin >> number_5_;
	cout << "\tEnter secound number :";
	cin >> number_5__;
	cout << "\tEnter third numer :";
	cin >> number_5___;
	(number_5_ > number_5__) && (number_5_ > number_5___) && cout << "\tF!" || (number_5__ > number_5_) && (number_5__ > number_5___) && cout << "\tS!" || (number_5___ > number_5_) && (number_5___ > number_5__) && cout << "\tT!";
	// F - firts number big
	// S - secound number big
	// T - third number big
	cout << "\n\n\n";
	cout << "====================================================";
	cout << "\n\n";
	cout << "Tap - 6";
	cout << "\n\n\n\n";
	unsigned int number_6;
	cout << "\tEnter number :";
	cin >> number_6;
	int o_ = number_6 % 10;
	int n_ = (number_6 / 10) % 10;
	int u_ = (number_6 / 100) % 10;
	int r_ = (number_6 / 1000) % 10;
	int b_ = (number_6 / 10000) % 10;
	int a_ = (number_6 / 100000) % 10;
	(o_ + u_ + b_) < (n_ + r_ + a_) && cout << "\tSimple numbers!" || (o_ + u_ + b_) > (n_ + r_ + a_) && cout << "\tCouple number!";
	cout << "\n\n\n";
	cout << "====================================================";
}