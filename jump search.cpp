#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int jumpSearchProg(vector <int> arr, int noToSearch, int ArrayLim)
{
	int previous = 0;
	int step = sqrt(ArrayLim);

	while (arr[min(step,ArrayLim)-1] < noToSearch)
	{
		previous = step;
		step += sqrt(ArrayLim);
		if(previous >= ArrayLim) return -1;
	}

	while (arr[previous] < noToSearch)
	{
		previous++;
		if (previous == min(step, ArrayLim)) return -1;
	}

	if (arr[previous] == noToSearch)
		return previous;

	return -1;
}

int main()
{
	int n,NoToSr;
	cout<<"Enter the length of the array:"<<endl;
	cin>>n;
	vector<int> arr(n);

	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter the number to be searched:"<<endl;
	cin>>NoToSr;

	int result = jumpSearchProg(arr, NoToSr, n);

	cout<<"Number = "<<NoToSr<<"is found at index = "<<result<<endl;
	return 0;
}
