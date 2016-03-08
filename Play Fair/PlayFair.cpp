#include <iostream>
#include<string>
using namespace std;
int main()
{
	string keyword;

	cout << "Please enter the key word" << endl;
	getline(cin, keyword);

	for (int i = 0; i < keyword.size() - 1; i++)
	{
		for (int j = i + 1; j < keyword.size(); j++)
		{
			if (keyword[i] == keyword[j])
			{
				keyword.erase(keyword.begin() + j);
			}
		}
	}
	cout << "The new keyword without duplicates is ";
	for (int i = 0; i < keyword.size(); i++)
	{
		cout<<keyword[i]; 
	}
	cout << endl;

	system("pause");
	
}