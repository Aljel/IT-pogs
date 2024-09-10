#include <iostream> // для возможности вводить - выводить данные
#include <cmath> //для использования математических функций (не базовых)
using namespace std; //определение стандартного пространства имен, чтобы не писать std:: каждый раз

int main() // основная функция, которая и "запускает" программу
{
    setlocale(LC_ALL,"RUS"); // для вывода русского текста
    float x, y, res, action1, action2, action3; // float, так как используем операции деления и тд. action для более удобной записи вычисления выражения (не реальный порядок действий)
    cout << "Введите числа\n"; // фраза для удобства пользователя, \n, чтобы сразу переместить курсор на следующую строку
    cin >> x >> y; // ввод чисел
    action1 = sqrt(exp(x * x + y * y)) - (y * x); // числитель первого слагаемого
    action2 = 2 * (x * x + y * y); // знаменатель первого слагаемого
    action3 = log((x * x) / (y * y)); // второе слагаемое. Сократил стерени в числителе и знаменателе дроби (вместо sqrt(x*x*x*x) просто x*x)
    res = action1 / action2 + action3; // получение конечного выражения
    cout << "Ответ: " << res; //вывод
    return 0; // требуется для работы функции main
}