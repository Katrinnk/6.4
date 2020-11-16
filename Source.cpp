#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* c, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		c[i] = Low + rand() % (High - Low + 1);
}
void Print(int* c, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << c[i];
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (abs(a[i]) > abs(max))
			max = a[i];
	return max;
}
int Sum(int* c, const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (c[i] > 0)
		{
			sum = 0;
			for (int k = i + 1; k < size; k++)
				sum += c[k];
		}
	}
	return sum;
}
void Sort(int* c, const int size, int a, int b) 
{
	for (int i = 1; i < size; i++) 
	{
		int k = 0; 
		for (int j = 0; j < size - i; j++) 
			if (c[j]>=a && c[j]<=b) 
			{ 
				int tmp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = tmp;
				k = 1;
			}
		if (k == 0) 
			return; 
	}
}
int main()
{
	int n;
	cout << "n=";
	cin >> n;
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int *c=new int[n];
	const int Low = -15;
	const int High = 20;
	Create(c, n, Low, High);
	Print(c, n);
	cout << "max=" << Max(c, n)<<endl;
	cout << "sum=" << Sum(c, n)<<endl;
	Sort(c, n, a, b);
	Print(c, n);
	return 0;
}