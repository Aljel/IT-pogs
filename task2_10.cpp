// некоторые комментарии одинаковы, так как суть команд от задачи к задаче не меняется
#include <iostream> // для возможности вводить - выводить данные
#include <cmath> //для использования математических функций (не базовых)
using namespace std; //определение стандартного пространства имен, чтобы не писать std:: каждый раз

// функция не работает для любых x и y, так как при некоторых их значениях, подкоренное выражение отрицательно

int main() // основная функция, которая и "запускает" программу
{
    setlocale(LC_ALL,"RUS"); // для вывода русского текста
    float x, y, res, action1, action2; // создание переменных. action для удобства решения, float для его верности
    cout << "Введите числа\n"; // фраза для удобства пользователя, \n, чтобы сразу переместить курсор на следующую строку
    cin >> x >> y; // ввод чисел
    action1 = exp(sqrt(x + y)); //числитель дроби
    action2 = pow(sin(sqrt((x * x) - (y * y))),2); //знаменатель дроби
    res = sqrt(cos( action1 / action2 )); // конечный результат
    cout << "Ответ: " << res; // вывод
    return 0; // требуется для работы функции main
}