#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
	double h, a, b, y;
    cout << "Введите входные данные (интервал a-b(a <= b), шаг h > 0, n > 1)" << endl;
    cin >> a >> b >> h >> n;
    if (a <= b && h > 0 && n > 1){
		    double x = a;
		    while (x <= b){
		        if (x < 0) {
		            y = 1;
		            int i = 1;
		            while (i <= (n - 1)){
		                double s = 0, j = 1;
		                while (j <= n){
		                    s += pow((x - pow(i, 2) + j), 2);
		                    j++;
		                }
		                y *= s;
		                i++;
		            }
		        }
		        else if (x >= 0) {
		            double i = 0;
					y = 0;
		            while (i <= (n - 1)){
		                y += (x - 1) / (i + 1);
		                i++;
		            }
		        }
		        x += h;
		    cout << "x = " << x << " y = " << y << endl;
		    }
	} else
		cout << "Введите: (a <= b)&&(h > 0)&&(n > 1) " << endl;
	return 0;
}