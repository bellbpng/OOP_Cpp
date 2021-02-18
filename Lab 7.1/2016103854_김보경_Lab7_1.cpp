#include <iostream>
#include <cmath>

using namespace std;

double exp_approx(double x, int n);

int main()
{
	double x = -1, real_v, app_exp, diff;
	int n = 1;

	real_v = exp(x);
	
	cout << "e^-1값\n" << endl;
	cout << "실제값: " << real_v << endl << endl;

	for (n = 0; n <= 10; n++) {
		app_exp = exp_approx(x, n);
		cout << "n=" << n << "일때 값: " << app_exp << endl;
		diff = real_v - app_exp;
		cout << "실제값 - 근사값 = " << diff << endl;
		cout << endl;
	}
	return 0;
}

double exp_approx(double x, int n)
{
	double app = 0;
	int i, k=1, l=1;


	for (i = 0; i <= n; i++) {
		if (i == 0) {
			app += 1;
			continue;
		}
		k *= i;
		l *= x;
		app = app + ((double)l / (double)k);
	}
	
	return app;
}