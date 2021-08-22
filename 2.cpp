//Вообщем, я сделал это задание, но не до конца. Оно либо генерирует ТОЛЬКО простые числа, либо не простые, и я не смог это пофиксить(даже не знаю почему оно так работает)//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//
#include<iostream>
#include<ctime>
using namespace std;
bool check(int* massiv, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (massiv[i] % massiv[i] == 0 && massiv[i] % 1 == 0 && massiv[i] % 2 != 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

void poisk(int* massiv, int size)
{
	int size2 = size;
	int* massiv2 = new int[size2];
	for (int i = 0; i < size; i++)
	{
		if (check(massiv, size) == false)
		{
			cout << massiv[i] << " prostoe chislo" << endl;
			size2--;
		}
		else if (check(massiv, size) == true)   //Даже если написать просто else - оно тоже не работает.//
			{
				cout << massiv[i] << " ne prostoe chislo" << endl;
				massiv2[i] = massiv[i];
			}
	}
	cout << endl << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << massiv2[i] << " ";
	}
}
void main()
{
	srand(time(NULL));
	int size;
	cin >> size;
	int* massiv = new int[size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = 1 + rand() % 50;
		cout << massiv[i] << " ";
	}
	cout << endl << endl;
	poisk(massiv, size);
}