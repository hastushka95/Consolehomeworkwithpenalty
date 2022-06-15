// ConsoleApplication19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int main()
{
	int wishsalary, late, work, penalty, choice;
	float priceofwork, temp;
	penalty = 0;
	priceofwork = 0.5;
	cout << "choice what u need \n";
	cout << "1- how much work need\n";
	cout << "2-how much late u can\n";
	cout << "3-how much salary u get\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << " enter salary and latest\n";
		cin >> wishsalary;
		cin >> late;
		if (late >= 3) {
			penalty = late / 3 * 20;
			work = (wishsalary + penalty) / priceofwork;
		}
		else {
			work = wishsalary / priceofwork;
		}

		cout << "your work should be: \n" << work;
		break;
	case 2:
		cout << "enter work and wishsalary\n";
		cin >> work;
		cin >> wishsalary;
		temp = work * priceofwork;
		if (wishsalary >= temp)
		{
			cout << "stop to be late\n";
		}
		else {
			late = (temp - wishsalary) / 20 * 3;
			cout << "u can be late:\n " << late;
		}
		break;

	case 3:
	{
		cout << " enter work and late time\n ";
		cin >> work;
		cin >> late;
		temp = work * priceofwork;
		if (late >= 3) {
			penalty = late / 3 * 20;

			if (penalty >= temp) {
				cout << "nothing\n";
			}

			else {
				wishsalary = work * priceofwork - penalty;
				cout << "u get\n" << wishsalary;
			}
		}
		else {
			wishsalary = temp;
			cout << " get \n: " << wishsalary;
		} break;
	}
	default:
		cout << "wrong\n ";
	}
	return 0;




}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
