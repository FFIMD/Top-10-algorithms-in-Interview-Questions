#include<bits/stdc++.h>

using namespace std;

int maxXorValue (int *arr, int sizeOfArr);

int main()
{
	int arr[] = {8, 1, 2, 12, 7, 6};
	cout << endl << "Maximum XOR value: " << maxXorValue(arr, 6) << endl;
}



int maxXorValue (int *arr, int sizeOfArr)
{
	int ans = INT_MIN;

	for (int i = 0; i < sizeOfArr; i++)
	{
		int baseXor = 0;

		for (int j = i; j < sizeOfArr; j++)
		{
			baseXor ^= arr[j];
			ans = max(ans, baseXor);
		}
	}

	return ans;
}