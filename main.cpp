/*������ �� ���� ��������� ������� ��������� � ����������� ��������. ����� ������������ ������.
������: ���� ����� ����� N<100. ����������, �������� �� ��� �����������.*/

#include <iostream>
#include <string>

using namespace std;

 bool IfPalindrom(string& word) 
{
	string string = word.substr(1, word.length() - 2);

	if (word.length() <= 1)
		return 1;

	if  ((word[0] == word[word.length() - 1]) && (IfPalindrom(string)))
	{
		return 1;
	}

	else 
		return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	string word;

	cout << "������� ����� ��� �����������: ";
	cin >> word;

	cout <<"��������� (0 - �� ���������, 1 - ���������): "<<  IfPalindrom(word);

	return 0;
}
