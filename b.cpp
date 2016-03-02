#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	while(num!=1)
	{
		cout << num << " ";
		if(num%2==1)
			num=3*num+1;
		else
			num=num/2;
	}
	cout << num << endl;

	return 0;
}
