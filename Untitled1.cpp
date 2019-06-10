#include <iostream>
#include <vector>
using namespace std;
int min(vector < vector < int > > findMin)
{
	int min=findMin[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (min > findMin[i][j])
				min = findMin[i][j];
		}
	}
	return min;
}
int main()
{
	vector < vector < int > > number(4);
	int num,Min;
	for (int i = 0; i < 4; i++)
		number[i] = vector<int>(3);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> num;
			number[i][j] = num;
		}
	}
	Min = min(number);
	cout << "min: " <<Min;

}
