#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

int main() 
{
	int height;
	int point[50];
	string value;

	cout << "入力> ";
	cin >> value;

	height = stoi(value);

	if (height < 0)
	{
		cout << " -";
	}
	else if (height > 0)
	{
		cout << " +";
	}
	else
	{
		cout << "終了します";
	}

	int length = 50 - value.length();

	for (int i = 0; i < length; i++)
	{
		cout << " ";
	}

	cout << value << "\n";



	cout << "__________________________________________________\n";
}
