#include<iostream>
#include<ctime>
using namespace std;
void add(const int *massiv, int size)
{
	int size2=size-1, size3=size-1, size4=size-1;
	int* positive = new int[size2];
	int* negative = new int[size3];
	int* null = new int[size4];
	for (int i = 0; i < size; i++)
	{
		if (massiv[i] > 0)
		{
			positive[i] = massiv[i];
			size3--;
			size4--;
		}
		if (massiv[i] < 0)
		{
			negative[i] = massiv[i];
			size2--;
			size4--;
		}
		if (massiv[i] == 0)
		{
			null[i] = massiv[i];
			size2--;
			size3--;
		}
	}
	cout << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << positive[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << negative[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size4; i++)
	{
		cout << null[i] << " ";
	}
}
void main()
{
	srand(time(NULL));
	const int size = 10;
	int massiv[size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = -15 + rand() % 30;
		cout << massiv[i] << " ";
	}
	add(massiv, size);
}