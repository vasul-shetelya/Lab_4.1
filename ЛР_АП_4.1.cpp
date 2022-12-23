#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N,k;
	double P;
	cout << "N = "; cin >> N;
	P = 0;
	k = N;
	while (k <= 19)
	{
		P += ((k-N)/(k+N)+1);
		k++;
	}
	cout << P << endl;
	P = 0;
	k = N;
	do {
		P += ((k - N) / (k + N) + 1);
		k++;
	} while (k <= 19);
	cout << P << endl;
	P = 0;
	for (k = N; k <= 19; k++)
	{
		P += ((k - N) / (k + N) + 1);
	}
	cout << P << endl;
	P = 0;
	for (k = 19; k >= N; k--)
	{
		P += ((k - N) / (k + N) + 1);
	}
	cout << P << endl;
	return 0;
}
