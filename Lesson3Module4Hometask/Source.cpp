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
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				cout << "��� ��������� n � ����� ����� ��������� n! � n2." << endl;
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
				cout << "������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����." << endl;
				int n = -1000 + rand() % 3000;
				cout << "n = " << n << endl;
				if (n < 10)
					cout << "���������� ����� � ����� �� " << n << " �� 10 = 10" << endl;
				else if (n > 10)
					cout << "���������� ����� � ����� �� 10 �� " << n << " = " << n << endl;
			} break;

			case 3:
			{
				cout << "������ ����������� ����� �� 10 �� N. ��� ������������ ����� ����� ������ ����� � ����� ��� ����." << endl;
				int n = -1000 + rand() % 3000;
				int sum = 0;
				cout << "n = " << n << endl;
				if (n < 10)
				{
					for (int i = n; i <= 10; i++)
						sum += i;
					cout << "���������� ����� � ����� �� " << n << " �� 10 = 10" << endl;
					cout << "����� ����� ����� " << sum << endl;
				}	
				else if (n > 10)
				{
					for (int i = 10; i <= n; i++)
					{
						for (int i = 10; i <= n; i++)
							sum += i;
						
					}
					cout << "���������� ����� � ����� �� 10 �� " << n << " = " << n << endl;
					cout << "����� ����� ����� " << sum << endl;
				}
			} break;

			case 4:
			{
				cout << "����������, �������� �� ����� ����� ������������, �. �. \n";
				cout << "����� ������, ������� ��������� �������� ����� ������� � ������ ������\n";
				cout << "(���������, ����������). ��������, ����� 123 - 321, 202, 9889, 5555\n";
				int n;
				do
				{
					cout << "������� ����� n = ";
					cin >> n;

				} while (n < 100 || n > 10000);

				if (n > 100 && n < 1000)
				{
					int a = n / 100, b = n % 10;
					if (a == b)
						cout << "����� " << n << " �������� �����������" << endl;
					else
						cout << "����� " << n << " �� �������� �����������" << endl;
				}
				else if (n > 1000 && n < 10000)
				{
					int a = n / 1000, b = n % 10, c = (n % 100) / 10, d = (n / 100) % 10;
					if(a == b && d == c)
						cout << "����� " << n << " �������� �����������" << endl;
					else
						cout << "����� " << n << " �� �������� �����������" << endl;
					break;
				}
			} break;

			case 5:
			{
				cout << "������� ����� ��������� ����� �� 12 �� 80 �� 1- ����� � ������." << endl;
				int sum = 0;
				for (int i = 12; i <= 80; i++)
				{
					sum += pow(i, 2);
				}
				cout << "����� ��������� ����� �� 12 �� 80 = " << sum << endl;
			} break;

			case 6:
			{
				cout << "������� �������� ��������� ����� �� 22 �� 88 �� 1- ����� � ������." << endl;
				int sum = 0;
				for (int i = 88; i >= 22; i--)
				{
					if (sum == 0)
						sum = pow(i, 2);
					if (sum != pow(88, 2))
						sum -= pow(i, 2);
				}
				cout << "�������� ��������� ����� �� 12 �� 80 = " << sum << endl;
			} break;

			case 7:
			{
				cout << "���� ������������ ����� A � ����������� ����� �� 1 �� N (> 0).\n";
				cout << "����� �������� ��������� A � ����������� ����� N . \n";
				double a = (250 + rand() % 500) * 1.021;
				int n = 1 + rand() % 200;
				cout << "a = " << a << endl;
				cout << "n = " << n << endl;
				cout << a << endl;
				for (int i = 1; i <= n; i++)
					cout << "�������� ��������� ����� " << a << " � " << i << " = " << pow(a, 2) - pow(i, 2) << endl;
			} break;
			
			case 8:
			{
				cout << "������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����." << endl;
				int n = -1000 + rand() % 3000;
				cout << "n = " << n << endl;
				if (n < 10)
					cout << "���������� ����� � ����� �� " << n << " �� 10 = " << n << endl;
				else if (n > 10)
					cout << "���������� ����� � ����� - 10" << endl;
			} break;

			case 9:
			{
				cout << "�������� ���������� �����, ��������� ������ �� 10-��\n"; // �� ������� ���� 20 ������, �� ����� 20 ��������� ����� (� ����� �� ������ ��������� ����� �������� ��� ����. ������� ������� �� 10
				cout << "������-�������� ���������� �� �������. �������� ����� ��� \n";
				cout << "� ������� �������� (�� ���� ���� ������ �� ������� ���������� ���������� �����). \n";
				cout << "����������, ����� ����� ������ �������, ��������� N ����� \n";
				cout << "(�����������, ��� �������� N �������  � �������). \n";
				cout << "�������� �������� �� ������������.\n";
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
					cout << "������� � " << i << " ������� " << n1 << " �����" << endl;
					teams++;

				} while (teams < 10);
			} break;

			case 10:
			{
				cout << "���� ����������� �����  n (n<9999). ����� ������������� ����� ����� (� �������������, ��� n>10).\n";
				int n = 10 + rand() % 9989;
				cout << "n = " << n << endl;
				for (int i = 1; i <= n; i++)
					if (i == n - 1)
						cout << "������������� ����� = " << i << endl;
			} break;

			case 11:
			{
				cout << "���� ����� �� 1 �� 1000 � ����� m. \n";
				cout << "������� ��� ������� �� ������� ������ ����� �� ����� m.\n";
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