#include <iostream>
#include <cmath>

using namespace std;
//Функции прмоугольника
double rectanglePer (double a, double b){
    return (a + b) * 2;
}

double rectangleArea (double a, double b){
    return (a*b);
}
double rectangleDia (double a, double b){
    return (sqrt((a*a) + (b*b)));
}
//конец функций прмоугольника

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Выберите номер:\n 1 - Вычисление прямоугольника \n" << endl; //Другие варианты вписать
    int choise;
    cin >> choise;
    enum variants{
        rectangle =1,
        //другие варианты

    };
    switch (choise)
    {
    case variants::rectangle: // Вычисление параметров прямоугольника
        cout << "Выберите номер варианта, который соответствует вашей задаче: \n 1 - Вычисление периметра прямоугольника \n 2 - Вычисление площади прямоугольника \n 3 - Вычисление диагонали прямоугольника" << endl;
        int number;
        cin >> number;
        double firSide;
        double secSide;
        cout <<"Введите длину первой стороны" << endl;
        cin >> firSide;
        cout <<"Введите длину второй стороны" << endl;
        cin >> secSide;
        enum rectanglesVar{
            perimeter = 1,
            area,
            dia,
        };
        switch (number)
        {
        case rectanglesVar::perimeter:
            cout << rectanglePer(firSide,secSide) << endl;
            break;
        case rectanglesVar::area:
            cout << rectangleArea(firSide,secSide) << endl;
            break;
        case rectanglesVar::dia:
            cout << rectangleDia(firSide,secSide) << endl;
            break;
        default:
            break;
        }
        break;
    //Вот сюда други кейсы
    default:
        cerr << "Неправильный формат ввода" << endl;
        break;
    }
    

}