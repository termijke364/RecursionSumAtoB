#include <iostream>

using namespace std;

int RecSumAtoB(int start, int end)
{
	if (end == start - 1)
		return 0;

	return end + RecSumAtoB(start, end - 1);
}

int EnterTheNumber()
{
	int number;
	cout << "Введите число" << endl;
	cin >> number;
	return number;
}

int main()
{
	setlocale(0, "");

	int StartNumber, EndNumber;

	StartNumber = EnterTheNumber();
	EndNumber = EnterTheNumber();

	cout << "Сумма чисел от А до Б: " << RecSumAtoB(StartNumber, EndNumber) << endl;

	return 0;
}