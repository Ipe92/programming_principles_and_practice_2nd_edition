#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> lol{ 1,2,3,4,5 };
	lol.push_back(2);
	for (auto x : lol) 
	{
		cout << x << endl;
	}

	int number_of_words = 0;
	string previous = " ";
	string current;
	while (cin >> current)
	{
		++number_of_words;
		if (previous == current)
			cout << "word number " << number_of_words << " repeated: " <<
			current << endl;
		previous = current;
	}
	
}