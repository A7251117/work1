#include <iostream>
using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		newList[j] = list[i];
	}
}
template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

int main()
{
	const int SIZE = 6;
	char list[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	char newList[SIZE];
	double arr[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	double newArr[SIZE];
	reverse(list, newList, SIZE);
	reverse(arr, newArr, SIZE);
	cout << "The original array: ";
	printArray(list, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList, SIZE);
	cout << endl;

	cout << "The original array: ";
	printArray(arr, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newArr, SIZE);
	cout << endl;
	return 0;
}
