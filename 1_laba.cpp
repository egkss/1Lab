#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int weight()
{
	int m;
	while (true)
	{
		cout << "������� ����� ���� m = ";
		cin >> m;

		if ((cin.fail()) || (m <= 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "����� ����������� �������, ��������� ����" << endl;
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
		cout << "������� ���� �� 0 �� 90 �������� � = ";
		cin >> a;

		if ((cin.fail()) || a <= 0 || a >= 90)
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "���� ����������� �����, ��������� ����" << endl;
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
		cout << "������� ����������� ���� F = ";
		cin >> f;

		if ((cin.fail()) || (f < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "���� ����������� �������, ��������� ����" << endl;
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
		cout << "������� ����������� ������ U = ";
		cin >> u;

		if ((cin.fail()) || (u < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "����������� ����� �� ���������, ��������� ����" << endl;
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

	cout << "��������� = " << acceleration;
	return 0;
}