#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int T;
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		int n;
		cin >> n;
		int sumMax = INT_MIN;
		vector<int> arr(n + 1);
		vector<int> sum(n + 1, 0);

		
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			sum[i] = sum[i - 1] + arr[i];
		}

		for (int i = 1; i < n; i++)
			for (int j = i; j <= n; j++)
				if (sum[j] - sum[i - 1] > sumMax)
					sumMax = sum[j] - sum[i - 1];

		cout << "#" << k+1 << " " << sumMax << endl;
	}
}
