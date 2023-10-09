#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    int num1;
    int num2;
    
    cout << "Эта программа поможет найти среднее арифметичесоке число двух чисел \n";
    
    cout << "Напишите первое число= \n"; cin >> num1;
    cout << "Напишите второе число= \n"; cin >>  num2;
    
    cout << "Находим среднее число: \n" << ((num1+num2)/2);

    return 0;
}
