#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	set <int> list;
	int M;
	cin >> M;

	for (int m = 0; m < M; m++)
	{
		string str;
		cin >> str;

		if (str.compare("add") == 0)
		{
			int input;
			cin >> input;

			list.insert(input);
		}
		else if (str.compare("remove") == 0)
		{
			int input;
			cin >> input;

			list.erase(input);
		}
		else if (str.compare("check") == 0)
		{
			int input;
			cin >> input;

			if (list.find(input) != list.end())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (str.compare("toggle") == 0)
		{
			int input;
			cin >> input;

			if (list.find(input) != list.end())
				list.erase(input);
			else
				list.insert(input);
		}
		else if (str.compare("all") == 0)
		{
			for (int i = 1; i <= 20; i++)
				list.insert(i);
		}
		else
			list.clear();
	}

	return 0;
}