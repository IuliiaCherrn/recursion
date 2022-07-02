/*Задачи во всех вариантах следует выполнять с применением рекурсии. Циклы использовать нельзя.
Задача: Дано слово длины N<100. Определить, является ли оно палиндромом.*/

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

	cout << "Введите слово или предложение: ";
	cin >> word;

	cout <<"Результат (0 - не палиндром, 1 - палиндром): "<<  IfPalindrom(word);

	return 0;
}
