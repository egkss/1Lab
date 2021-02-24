#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int weight()
{
	int m;
	while (true)
	{
		cout << "Введите массу тела m = ";
		cin >> m;

		if ((cin.fail()) || (m <= 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Масса некорректно введена, повторите ввод" << endl;
		}
		else
		{
			return m;
		}
	}
}
double angle()
{
	while (true)
	{
		double a;
		cout << "Введите угол от 0 до 90 градусов а = ";
		cin >> a;

		if ((cin.fail()) || a <= 0 || a >= 90)
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Угол некорректно введён, повторите ввод" << endl;
		}
		else
		{
			return a;
		}
	}
}
double force()
{
	while (true)
	{

		double f;
		cout << "Введите приложенную силу F = ";
		cin >> f;

		if ((cin.fail()) || (f < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Сила некорректно введена, повторите ввод" << endl;
		}
		else
		{
			return f;
		}
	}
}
double friction()
{
	while (true)
	{

		double u;
		cout << "Введите коэффициент трения U = ";
		cin >> u;

		if ((cin.fail()) || (u < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Коэффициент введён не корректно, повторите ввод" << endl;
		}
		else
		{
			return u;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Ru");
	const int g = 10;
	double acceleration;
	int check_weight = weight();
	double check_angle = angle();
	double check_force = force();
	double check_friction = friction();

	double friction_force = check_friction * check_weight * g * sin(check_angle);
	double force_main = check_force * cos(check_angle) - friction_force;

	check_force == 0 ? acceleration = 0 : acceleration = force_main / check_weight;

	cout << "Ускорение = " << acceleration;
	return 0;
}