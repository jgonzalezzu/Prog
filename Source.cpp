#include<iostream>
#include<fstream>
#include<cmath>

using fptr = double(double);
double bisection(double a, double b, double esp, fptr f);
double regulafalsi(double a, double b, double esp, fptr f);
double newton_raphson(double b, double esp, fptr f, fptr fdev);
double fun(double x);
double fdev(double x);
void err_max(void);

int main(void)
{
	std::ofstream fout("1.txt");
	fout.precision(9); fout.setf(std::ios::scientific);

	double esp = 0;

	fout << "DELTA" << "\t"
		<< "Nbisec" << "\t"
		<< "Nfalsepos" << "\t"
		<< "Nnewton" << "\n";
	for (int i = 1; i <= 9; i++) {
		esp = std::pow(10, -i);
		fout << esp << "\t"
			<< bisection(0.1, 3.9, esp, fun) << "\t"
			<< regulafalsi(0.1, , esp, fun) << "\t" << "\t"
			<< newton_raphson(0.1, esp, fun, fdev) << "\n";
	}
	return 0;
	fout.close();
	std::cin.get();
}

//bisection
double bisection(double a, double b, double esp, fptr f)
{
	double i = 0;
	int iter = 0;

	while (1) {
		i = (a + b) / 2;
		if (std::fabs(f(i)) < esp) {
			break;
		}
		if (f(a) * f(i) < 0) {
			b = i;
		}
		else {
			a = i;
		}
		iter++;

		if (iter > 10000) {
			err_max();
			break;
		}
	}

	return iter;
}

//regulafalsi
double regulafalsi(double a, double b, double esp, fptr f)
{
	double i = 0;
	int iter = 0;

	while (1) {
		i = b - (f(b) * (a - b)) / (f(a) - f(b));
		if (std::fabs(f(i)) < esp) {
			break;
		}
		if (f(a) * f(i) < 0) {
			b = i;
		}
		else {
			a = i;
		}
		iter++;

		if (iter > 10000) {
			err_max();
			break;
		}
	}

	return iter;
}

//fixedpoint
double fixedpoint(double b, double esp, fptr f, fptr g)
{
	double i = b;
	int iter = 0;

	while (1) {
		if (std::fabs(f(i)) < esp) {
			break;
		}
		else {
			i = g(i);
		}
		iter++;

		if (iter > 10000) {
			err_max();
			break;
		}
	}

	return iter;
}

//newtonraphson
double newton_raphson(double b, double esp, fptr f, fptr fdev)
{
	double i = b;
	int iter = 0;

	while (1) {
		if (std::fabs(f(i)) < esp) {
			break;
		}
		else {
			i = i - f(i) / fdev(i);
		}
		iter++;

		if (iter > 1000) {
			err_max();
			break;
		}
	}

	return iter;
}

//función
double fun(double x)
{
	return 3 * std::exp(-x) - x;
}

//derivada
double fdev(double x)
{
	return -(3 * std::exp(-x) + 1);
}

//error para máximo de iteraciones
void err_max(void)
{
	std::cout << "################################" << "\n";
	std::cout << "ERROR: maximun number of iterations reached." << "\n";
}