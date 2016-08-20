#include<iostream>
#include<vector>
using namespace std;

template<class T>
void bubbleSort(vector<T>& a)
{
	if(a.size() < 2)
		return ;
	size_t n = a.size();
	//n-1 times loop
	for(size_t i = 1; i < n; ++i)
	{
		for(size_t j = 0; j < n - i; ++j)
		{
			if(a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

int main()
{
	int a[10] = {9, 5, 8, 4, 3, 6, 7, 2, 1, 0};
	vector<int> test;
	for(int i = 0; i < 10; ++i)
		test.push_back(a[i]);
	bubbleSort(test);
	vector<int>::iterator it = test.begin();
	while(it != test.end())
		cout << *(it++) << " ";
	cout << endl;
	return 0;
}	
