#include <iostream>
using namespace std;

int main()
{
    double a;
    
    cout << "Введите число: \n"; // просим число
    
    cout<<"a="; cin >> a; //вводим число
    
    cout << a << "^2=" << a*a << "\n"; // высчитывает число в квадрате
    cout << a << "^3=" << a*a*a << "\n"; // высчитывает число в кубе
    
    system("pause"); //останавливает систему
    return 0;
}