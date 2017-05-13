#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int numericValue;
	int value[50];
	int total[50] = { 0 };
	string inputValue;
	string vessel[50];

	while (true)
	{
		cout << "“ü—Í> ";
		cin >> inputValue;

		numericValue = stoi(inputValue);

		for (int i = 0; i < inputValue.length(); i++)
		{
			vessel[i] = inputValue[i];
			value[i] = stoi(vessel[i]);
		}

		if (numericValue < 0)
		{
			cout << " -";
			for (int i = 0; i < inputValue.length(); i++)
			{
				total[50 - i] = total[i] - value[i];
			}
		}
		else if (numericValue > 0)
		{
			cout << " +";
			for (int i = 50; i < inputValue.length(); i--)
			{
				total[i] = total[i] + value[i + 50 - inputValue.length()];
			}
		}
		else
		{
			cout << "I—¹‚µ‚Ü‚·B\n";
			break;
		}

		int length = 50 - inputValue.length();

		for (int i = 0; i < length; i++)
		{
			cout << " ";
		}

		cout << inputValue << "\n";

		for (int i = 0; i < 50; i++)
		{
			cout << total[i] ;
		}

		cout << "\n";

		cout << "____________________________________________________\n";
	}
}
