#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <shidfact.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task;

	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				cout << "Для заданного n в одном цикле вычислить n! и n2." << endl;
				int n = -50 + rand() % 100;
				int fact = 1, kwadrat = 1;
				cout << "n == " << n << endl;
				if (n < 0)
				{
					for (int i = n; i <=0; i++)
					{	
						fact *= i;
						cout << "Fact(" << i << ") = " << fact << endl;
						kwadrat = pow(i, 2);
						cout << "n2 = " << kwadrat << endl;
					}
				}
				else if (n > 0)
				{
					for (int i = 1; i <= n; i++)
					{
						fact *= i;
						cout << "Fact(" << i << ") = " << fact << endl;
						kwadrat = pow(i, 2);
						cout << "n2 = " << kwadrat << endl;
					}
				}

			} break;

			case 2:
			{
				cout << "Задано натуральные числа от 10 до N. Найти наибольшую цифру целого десятичного числа." << endl;
				int n = -1000 + rand() % 3000;
				cout << "n = " << n << endl;
				if (n < 10)
					cout << "Наибольшее число в цикле от " << n << " до 10 = 10" << endl;
				else if (n > 10)
					cout << "Наибольшее число в цикле от 10 до " << n << " = " << n << endl;
			} break;

			case 3:
			{
				cout << "Задано натуральные числа от 10 до N. Для натурального числа найти первую цифру и сумму его цифр." << endl;
				int n = -1000 + rand() % 3000;
				int sum = 0;
				cout << "n = " << n << endl;
				if (n < 10)
				{
					for (int i = n; i <= 10; i++)
						sum += i;
					cout << "Наибольшее число в цикле от " << n << " до 10 = 10" << endl;
					cout << "Сумма чисел равна " << sum << endl;
				}	
				else if (n > 10)
				{
					for (int i = 10; i <= n; i++)
					{
						for (int i = 10; i <= n; i++)
							sum += i;
						
					}
					cout << "Наибольшее число в цикле от 10 до " << n << " = " << n << endl;
					cout << "Сумма чисел равна " << sum << endl;
				}
			} break;

			case 4:
			{
				cout << "Определить, является ли целое число симметричным, т. е. \n";
				cout << "таким числом, которое одинаково читается слева направо и справа налево\n";
				cout << "(палиндром, перевертыш). Например, числа 123 - 321, 202, 9889, 5555\n";
				int n;
				do
				{
					cout << "Введите число n = ";
					cin >> n;

				} while (n < 100 || n > 10000);

				if (n > 100 && n < 1000)
				{
					int a = n / 100, b = n % 10;
					if (a == b)
						cout << "Число " << n << " является палиндромом" << endl;
					else
						cout << "Число " << n << " не является палиндромом" << endl;
				}
				else if (n > 1000 && n < 10000)
				{
					int a = n / 1000, b = n % 10, c = (n % 100) / 10, d = (n / 100) % 10;
					if(a == b && d == c)
						cout << "Число " << n << " является палиндромом" << endl;
					else
						cout << "Число " << n << " не является палиндромом" << endl;
					break;
				}
			} break;

			case 5:
			{
				cout << "Вывести сумму квадратов чисел от 12 до 80 по 1- числу в строке." << endl;
				int sum = 0;
				for (int i = 12; i <= 80; i++)
				{
					sum += pow(i, 2);
				}
				cout << "Сумма квадратов чисел от 12 до 80 = " << sum << endl;
			} break;

			case 6:
			{
				cout << "Вывести разность квадратов чисел от 22 до 88 по 1- числу в строке." << endl;
				int sum = 0;
				for (int i = 88; i >= 22; i--)
				{
					if (sum == 0)
						sum = pow(i, 2);
					if (sum != pow(88, 2))
						sum -= pow(i, 2);
				}
				cout << "Разность квадратов чисел от 12 до 80 = " << sum << endl;
			} break;

			case 7:
			{
				cout << "Дано вещественное число A и натуральные числа от 1 до N (> 0).\n";
				cout << "Найти разности квадратов A и натуральных чисел N . \n";
				double a = (250 + rand() % 500) * 1.021;
				int n = 1 + rand() % 200;
				cout << "a = " << a << endl;
				cout << "n = " << n << endl;
				cout << a << endl;
				for (int i = 1; i <= n; i++)
					cout << "Разность квадратов числа " << a << " и " << i << " = " << pow(a, 2) - pow(i, 2) << endl;
			} break;
			
			case 8:
			{
				cout << "Задано натуральные числа от 10 до N. Найти наименьшую цифру целого десятичного числа." << endl;
				int n = -1000 + rand() % 3000;
				cout << "n = " << n << endl;
				if (n < 10)
					cout << "Наименьшее число в цикле от " << n << " до 10 = " << n << endl;
				else if (n > 10)
					cout << "Наименьшее число в цикле - 10" << endl;
			} break;

			case 9:
			{
				cout << "Известно количество очков, набранных каждой из 10-ти\n"; // по условию было 20 команд, но когда 20 ооооочень долго (а порой не всегда рандомные числа выпадают как надо. поэтому поменял на 10
				cout << "команд-участниц первенства по футболу. Перечень очков дан \n";
				cout << "в порядке убывания (ни одна пара команд не набрала одинаковое количество очков). \n";
				cout << "Определить, какое место заняла команда, набравшая N очков \n";
				cout << "(естественно, что значение N имеется  в перечне). \n";
				cout << "Условный оператор не использовать.\n";
				int points, teams = 0, n1 = 0, n2 = 10000, i = 0;
				do
				{	
					do
					{
						n1 = 1000 + rand() % 6000;
						if (n1 <= 1000)
							n1 = 500 + rand() % 499;
						if (n1 <= 500)
							n1 = 100 + rand() % 399;
						if (n1 <= 100)
							n1 = 1 + rand() % 99;

					} while (n1 > n2);
					i++;
					n2 = n1;
					cout << "Команда № " << i << " набрала " << n1 << " очков" << endl;
					teams++;

				} while (teams < 10);
			} break;

			case 10:
			{
				cout << "Дано натуральное число  n (n<9999). Найти предпоследнюю цифру числа (в предположении, что n>10).\n";
				int n = 10 + rand() % 9989;
				cout << "n = " << n << endl;
				for (int i = 1; i <= n; i++)
					if (i == n - 1)
						cout << "Предпоследняя цифра = " << i << endl;
			} break;

			case 11:
			{
				cout << "Даны числа от 1 до 1000 и число m. \n";
				cout << "Вывести все остатки от деления четных сотен на число m.\n";
				int m = 1 + rand() % 98;
				cout << "m = " << m << endl;
				for (int i = 1; i <=1000; i++)
				{
					if (i > 99 && i < 1000)
						if (i % 100 == 0)
						{
							cout << "i = " << i << endl;
							cout << i << " % " << m << " = " << i % m << endl;
						}	
				}
			} break;
		}


	} while (task <= 11);





	system("pause");
}