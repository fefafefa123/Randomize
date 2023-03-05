#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	int a = rand() % 20;
	int const SIZE = 10;
	int b[SIZE], c;
	for (int i = 0;i < SIZE;i++)
	{
		b[i] = a;
		if (i == 0)
		{
			c = b[i];
		}
	again:
		if (i > 0)
		{
			for (int j = 0; j < i;j++)
			{
				if (b[j] == b[i])
				{
					int a = rand() % 20;
					b[i] = a;
					goto again;
				}
			}
		}
		if (c > b[i])
		{
			c = b[i];
		}
		cout << b[i] << endl;
	}
	cout << c << " = Minimum number " << endl;
}