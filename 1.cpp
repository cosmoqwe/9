#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(0, "");
	int size;
	cout << "������� ������ �������: " << endl;
	cin >> size;
	int* massiv = new int[size];
	int menu;
	cout << "�������� ��������, ������� �� ������ ��������� � ��������:" << endl << "1:��������� ��������� � ������." << endl << "2:�������� �������." << endl;
	cout << "3:����� ������� �� �����." << endl << "4:���������� ������� ���������� �������." << endl << "5:���������� �������� � ����� �������." << endl << "6.������� ��� �������� �������� �� ���������� �������." << endl;
	do
	{
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			for (int i = 0; i < size; i++)
			{
				cin >> massiv[i];
			}
		}break;
		case 2:
		{
			delete [] massiv;
		}break;
		case 3:
		{
			for (int i = 0; i < size; i++)
			{
				cout << massiv[i] << " ";
			}
		}break;
		case 4:
		{
			for (int i = 0; i < size; i++)
			{
				massiv[i] = 1 + rand() % 50;
			}
		}break;

		case 5:
		{
			size += 1;
			int a;
			cin >> a;
			massiv[size-1] = a;
		}break;
		case 6:
		{
			int b, c;
			cin >> b >> c;
			massiv[b-1] = c;
		}break;
		}
	} while (menu != 0);
}