#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
		if (temp == 0) break;
	}
		

	double sum = 0;
	for (int x : temps) sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';
	sort(temps.begin(), temps.end());
	cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
}