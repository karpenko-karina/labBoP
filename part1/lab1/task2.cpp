#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a, b, c, d, e, f, g, h, result;
    cout << "Hello world!" << endl;
    cout << "Введите 8 цифр чтобы получить среднее арифметическое " << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    result = (a + b + c + d + e + f + g + h) / 8;
    cout << "Среднее арифметическое = " << result << endl;

    return 0;
}
