﻿#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания от 1 до 7 : ";
	cin >> nz;

	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Локатор может быть ориентирован на одну из сторон света («C» – " << endl;
		cout << " север, «Ю» – юг, «З» –  запад, «В» – восток) и может принимать " << endl;
		cout << " команды: «1» – поворот направо (90º), «–1» –  поворот налево (–" << endl;
		cout << " 90º), «2» – поворот в обратную сторону (180º). Исходная " << endl;
		cout << " ориентация локатора «C». Определить ориентацию локатора " << endl;
		cout << " после выполнения последовательности вводимых команд N1, N2 ." << endl;
		cout << "------------------------------------------------------------------" << endl;
		char c;
		int n1, n2, N;
		cout << "Введите исходное положение локатора" << endl << "(n - север, w - запад, s - юг, e - восток): ";
		cin >> c;
		switch (c)
		{
		case 'n':
		{
			N = 0;
			break;
		}
		case 'e':
		{
			N = -1;
			break;
		}
		case 's':
		{
			N = 2;
			break;
		}
		case 'w':
		{
			N = 1;
			break;
		}
		}
		cout << "Введите первую команду: ";
		cin >> n1;
		cout << "Введите вторую команду: ";
		cin >> n2;
		cout << "Текущая ориентация локатора: ";
		switch (N + n1 + n2)
		{
		case 0:
			cout << "север\n";
			break;
		case 1:
			cout << "запад\n";
			break;
		case -1:
			cout << "восток\n";
			break;
		case 2:
			cout << "юг\n";
			break;
		case -2:
			cout << "юг\n";
			break;
		case 3:
			cout << "восток\n";
			break;
		case -3:
			cout << "запад\n";
			break;
		case 4:
			cout << "север\n";
			break;
		case 5:
			cout << "запад\n";
			break;
		case 6:
			cout << "юг\n";
			break;
		}
		system("pause");
		goto start;
		break;
	}

	case 2:

	{
		system("cls");
		cout << "2 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Даны значения трех сторон треугольника a, b и c. Определить вид " << endl;
		cout << " треугольника (прямоугольный, равносторонний или простой). " << endl;
		cout << " Ответ вывести в виде сообщения. " << endl;
		cout << "------------------------------------------------------------------" << endl;
	nach:
		double a, b, c;
		cout << ("Введите сторону a ");
		cin >> a;
		cout << ("Введите сторону b ");
		cin >> b;
		cout << ("Введите сторону c ");
		cin >> c;
		if ((c > abs(a - b)) && (c < a + b))
			cout << " Треугольник построить можно" << endl;
		else
		{
			cout << " Треугольник с такими сторонами построить невозможно" << endl;
			system("pause");
			goto nach;
		}
		if ((sqrt(a) + sqrt(b) || (sqrt(a) + sqrt(c) || (sqrt(c) + sqrt(b)))))
			cout << " Треугольник прямоугольный " << endl;
		else if (((a = b) && (a != c)) || ((a = c) && (a != b)) || ((b = c) && (b != a)))
			cout << " Это равнобедренный треугольник " << endl;
		else if ((a = c) && (c = b))
			cout << " Это равносторонний треугольник " << endl;
		else
			cout << " Треугольник произвольный " << endl;
		system("pause");
		goto start;
		break;
	}

	case 3:

	{
		system("cls");
		cout << "3 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Даны два числа A и B. Разработать и описать алгоритм, в " << endl;
		cout << " результате которого числа меняют свой знак на " << endl;
		cout << " противоположный, если они имеют разный знак и будут заменены " << endl;
		cout << " на нули, если это не так. " << endl;
		cout << "------------------------------------------------------------------" << endl;
		double a, b;
		cout << ("Введите a ");
		cin >> a;
		cout << ("Введите b ");
		cin >> b;
		if (a*b > 0)
		{
			a *= -1; b *= -1;
		}
		else
		{
			(a, b) = (0, 0);
		}
		cout << "a = " << a << " b = " << b << endl;
		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		cout << "4 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Дано целое число k (1<k<365). Определить, каким днем недели " << endl;
		cout << " (понедельник, вторник, воскресенье) является k-день " << endl;
		cout << " невысокосного года, если 1 января – понедельник." << endl;
		cout << "------------------------------------------------------------------" << endl;
		int k = 0, d = 0, n = 0;
		vector<string> days = { "Пн", "Вт", "Ср", "Чт", "Пт", "Сб", "Вс" };
		cout << "Введите номер дня невисокосного года: " << endl;
		cin >> k;
		if (k >= 1 && k <= 365) {
			cout << "Введите номер дня недели 1 января d= " << endl;
			cin >> d;
			if (d >= 1 && d <= 7) {
				cout << "1 января: " << days[d - 1] << endl;
				n = k % 7 + d - 1;
				if (n > 7) {
					n = n - 7;
				}
				cout << "День номер " << k << ": " << days[n - 1] << endl;
			}
			else {
				cout << "Error!" << endl;
			}
		}
		else {
			cout << "Error!" << endl;
		}
		system("pause");
		goto start;
		break;
	}


	case 5:

	{
		system("cls");
		cout << "5 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Закажите гостиницу на курорте Трускавец, выбрав уровень " << endl;
		cout << " гостиницы  количество мест в номере, проживание с питанием или " << endl;
		cout << " без. Гостиница «Курортная» пять звезд, одноместная комната – " << endl;
		cout << " 1000 тн в сутки (с питанием 1500 тн), двухместный – 1500 тн (с " << endl;
		cout << " питанием 2500 тн). Гостиница «Верховина» четыре звезды, " << endl;
		cout << " одноместная комната – 600 тн в сутки (с питанием 900 тн), " << endl;
		cout << " двухместный - 900гр (с питанием 1500 тн). Гостиница «Гуцулка» " << endl;
		cout << " три звезды, одноместная комната – 300 тн в сутки (с питанием " << endl;
		cout << " 500тн), двухместный – 450 тн (с питанием 800 тн). Предусмотреть " << endl;
		cout << " обработку ошибок ввода. " << endl;
		cout << "------------------------------------------------------------------" << endl;
	pyatzad:
		system("cls");
		int zv, pit, mest;
		cout << " В скольки звездочной гостинице вы хотите жить? В - ";
		cin >> zv;

		if (zv == 5)
		{
			cout << " Вам подойдет гостиница 'Курортная'" << endl;

			cout << " Скольки местная комната? ";
			cin >> mest;

			cout << " С питанием ? (1-ДА, 2-НЕТ) ";
			cin >> pit;

			if (mest == 1)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 1-но местный номер с питанием. С вас 1500 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 1-но местный номер без питанием. С вас 1000 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}

			}

			else if (mest == 2)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 2-ух местный номер с питанием. С вас 2500 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 2-ух местный номер без питанием. С вас 1500 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}
			}
			else
			{
				cout << "Извинте стольки местной комнаты у нас нету. " << endl;
				cout << "Попробуйте еще раз " << endl;
				system("pause");
				goto pyatzad;
			}
		}

		else if (zv == 4)
		{
			cout << " Вам подойдет гостиница 'Верховина'" << endl;

			cout << " Скольки местная комната? ";
			cin >> mest;

			cout << " С питанием ? (1-ДА, 2-НЕТ) ";
			cin >> pit;

			if (mest == 1)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 1-но местный номер с питанием. С вас 900 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 1-но местный номер без питанием. С вас 600 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}

			}

			else if (mest == 2)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 2-ух местный номер без питанием. С вас 1500 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 2-ух местный номер без питания. С вас 900 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}
			}
			else
			{
				cout << "Извинте стольки местной комнаты у нас нету. " << endl;
				cout << "Попробуйте еще раз " << endl;
				system("pause");
				goto pyatzad;
			}
		}

		else if (zv == 3)
		{
			cout << " Вам подойдет гостиница 'Гуцулка'" << endl;

			cout << " Скольки местная комната? ";
			cin >> mest;

			cout << " С питанием ? (1-ДА, 2-НЕТ) ";
			cin >> pit;

			if (mest == 1)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 1-но местный номер с питанием. С вас 500 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 1-но местный номер без питанием. С вас 300 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}

			}

			else if (mest == 2)
			{
				if (pit == 1)
				{
					cout << "Вы выбрали 2-ух местный номер без питанием. С вас 800 тенге " << endl;
				}
				else if (pit == 2)
				{
					cout << "Вы выбрали 2-ух местный номер без питания. С вас 450 тенге " << endl;
				}
				else
				{
					cout << "Вы ввели не корректный ответ! " << endl;
					cout << "Попробуйте еще раз " << endl;
					system("pause");
					goto pyatzad;
				}
			}
			else
			{
				cout << "Извинте стольки местной комнаты у нас нету. " << endl;
				cout << "Попробуйте еще раз " << endl;
				system("pause");
				goto pyatzad;
			}
		}

		else
		{
			cout << "Извинте стольки звездочной гостиницы у нас нету " << endl;
			cout << "Попробуйте еще раз " << endl;
			system("pause");
			goto pyatzad;
		}

		system("pause");
		goto start;
		break;
	}

	case 6:

	{
		system("cls");
		cout << "6 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Напишите функцию int f(int x), которая принимает целое значение  " << endl;
		cout << " (не больше пяти знаков) и возвращает число с обратным порядком " << endl;
		cout << " цифр. Например, принимается число 7631, возвращается число 1367 " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int n, m = 0;
		cout << "Введите целое число: ";
		cin >> n;
		while (n != 0)
		{
			m *= 10;
			m += n % 10;
			n = n / 10;
		}
		cout << "Число в обратном порядке: " << m << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;

	}

	case 7:

	{
	nacha:
		system("cls");
		cout << "7 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/* Дата подается в формате ДД.ММ.Г (то есть в случае, если или месяц день представляется однозначным числом, то к нему дописывается незначащий ноль), либо в формате Д.М.Г.
Например, 31 января 2015 года будет записано как 31.01.2015 или как 31.1.2015.
Вывести дату необходимо в таком же формате, как она была введена. Если введенная дата попадает под оба формата, то подразумевается формат ДД.ММ.Г.
Если введена некорректная дата (например, 99.99.2015), необходимо вывести "WRONG DATE" (без кавычек).
Если введенная строка не попадает ни под один из разрешенных форматов ввода, необходимо вывести "WRONG FORMAT" (без кавычек).
Напоминаем, что год является високосным, если он делится на 4, но не делится на 100, либо если он делится на 400.
*/

		int dd, mm, gg, vv;
		cout << "Введите дату в формате ДД.ММ.ГГ. " << endl;
		cout << "Введите день: ";
		cin >> dd;
		cout << "Введите месяц: ";
		cin >> mm;
		cout << "Введите год: ";
		cin >> gg;

		if ((dd > 31 || dd < 1) || (mm > 12 || mm < 1))
		{
			cout << "WRONG FORMAT" << endl;
			system("pause");
			goto nacha;
		}
		if (dd <= 31)
		{
			if (mm == 1)
			{
				cout << dd << " января " << gg << " года" << endl;
			}
			else if (mm == 2)
			{
				cout << dd << " февраля " << gg << " года" << endl;
			}
			else if (mm == 3)
			{
				cout << dd << " марта " << gg << " года" << endl;
			}
			else if (mm == 4)
			{
				cout << dd << " апреля " << gg << " года" << endl;
			}
			else if (mm == 5)
			{
				cout << dd << " мая " << gg << " года" << endl;
			}
			else if (mm == 6)
			{
				cout << dd << " июня " << gg << " года" << endl;
			}
			else if (mm == 7)
			{
				cout << dd << " июля " << gg << " года" << endl;
			}
			else if (mm == 8)
			{
				cout << dd << " августа " << gg << " года" << endl;
			}
			else if (mm == 9)
			{
				cout << dd << " сентября " << gg << " года" << endl;
			}
			else if (mm == 10)
			{
				cout << dd << " октября " << gg << " года" << endl;
			}
			else if (mm == 11)
			{
				cout << dd << " ноября " << gg << " года" << endl;
			}
			else if (mm == 12)
			{
				cout << dd << " декабря " << gg << " года" << endl;
			}

		}

		system("pause");
		goto start;
		break;
	}

	default:
		system("cls");
		cout << "      !!! Введенного задания не существует !!! " << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;
	}
}




















