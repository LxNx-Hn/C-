#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int j;
	vector<int> data{ 4,5,6,1,2 };

	for (int i = 0; i < data.size()-1; i++)
	{
		j = i;
		while (j >= 0 && data[j] > data[j + 1])
		{
			int temp = data[j];
			data[j] = data[j + 1];
			data[j + 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << " ";
	}

}
