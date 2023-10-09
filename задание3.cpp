#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    
    int num1;
    int num2;
    int result = 0;
    
    cout << "Укажите диапозон чисел \n";
    
    cout << "Напишите первое число: \n"; cin >> num1;
    cout << "Напишите второе число: \n"; cin >> num2;
    
    for (int i = num1; i <= num2; i++){
        if ( i % 2 == 0){
            result += i;
        }
    }
    cout << "Результат: " << result;
}