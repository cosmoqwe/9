#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(0, "");
	int size;
	cout << "Введите размер массива: " << endl;
	cin >> size;
	int* massiv = new int[size];
	int menu;
	cout << "Выберите действия, которые вы хотите совершить с массивом:" << endl << "1:Занесение элементов в массив." << endl << "2:Удаление массива." << endl;
	cout << "3:Вывод массива на экран." << endl << "4:Заполнение массива случайными числами." << endl << "5:Добавление элемента в конец массива." << endl << "6.Вставка или удаление элемента по указанному индексу." << endl;
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