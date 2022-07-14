# Raveslii-Test-OOP
Тест


Задание №1
a) Напишите класс с именем Point. В классе Point должны быть две переменные-члены типа double: m_a и m_b со значениями по умолчанию 0.0. Напишите конструктор для этого класса и функцию вывода print().

Следующая программа:

#include <iostream>
 
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
 
    return 0;
}
Должна выдавать следующий результат:

Point(0, 0)
Point(2, 5)

Ответ №1.а)

b) Теперь добавим метод distanceTo(), который будет принимать второй объект класса Point в качестве параметра и будет вычислять расстояние между двумя объектами. Учитывая две точки (a1, b1) и (a2, b2), расстояние между ними можно вычислить следующим образом: sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2)). Функция sqrt() находится в заголовочном файле cmath.

Следующая программа:

int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
 
    return 0;
}
Должна выдавать следующий результат:

Point(0, 0)
Point(2, 5)
Distance between two points: 5.38516

Ответ №1.b)

c) Измените функцию distanceTo() из метода класса в дружественную функцию, которая будет принимать два объекта класса Point в качестве параметров. Переименуйте эту функцию на distanceFrom().

Следующая программа:

int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
 
    return 0;
}
Должна выдавать следующий результат:

Point(0, 0)
Point(2, 5)
Distance between two points: 5.38516
