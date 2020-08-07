#include <iostream>

using namespace std;

int main()
{

	int num;
	string temp, str, alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

	do
	{

		cin >> num;
		if (num > 0 && num <= 27)
		{
			cin >> temp;

			for (int i = temp.length() - 1; i >= 0; i--)
			{

				str += temp.at(i);
			}
			int counter = str.length();

			for (int i = 0; i < num; i++)
			{

				for (int j = 0; j <= counter - 1; j++)
				{

					int l = alpha.find(str.at(j));
					if (l + 1 == alpha.length())
					{

						l = -1;
					}
					str.at(j) = alpha.at(l + 1);
				}
			}

			cout << str << endl;

			str = "";
			temp = "";
		}
		else
		{

			exit(0);
		}
	} while (num = !0);

	return 0;
}