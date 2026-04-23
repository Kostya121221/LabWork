#include <iostream>
#include <cmath>
#define PI 3.14159

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


//Функции круга
double circleLength (double r){
    return 2*PI * abs(r);
}

double circleArea (double r){
    return PI * (r * r);
}
double circleSectorArea (double r, double ang){
    return circleArea(r) * abs(ang / ( 2*PI ));
}
//конец функций круга


//Функции трапеции
double trapezoidPer (double a, double b, double c, double d) {
    return a + b + c + d;
}
double trapezoidMidline (double c, double d) {
    return (c + d) / 2;
}
double trapezoidArea (double c, double d, double H) {
    return ( ((c + d)/2) * H);
}
//Конец функций трапеции

int main() {
    setlocale(LC_ALL, "ru");
    cout << "Выберите номер:\n 1 - Вычисление прямоугольника \n 2 - Вычисление окружности \n 3 - Вычисление трапеции\n" << endl; //Другие варианты вписать
    int choise;
    cin >> choise;

    enum variants{
        rectangle = 1,
        circle = 2,
        trapezoid = 3,
        //другие варианты
    };
    switch (choise)
    {
    case variants::rectangle: // Вычисление параметров прямоугольника
    {
        cout << "Выберите номер варианта, который соответствует вашей задаче: \n 1 - Вычисление периметра прямоугольника \n 2 - Вычисление площади прямоугольника \n 3 - Вычисление диагонали прямоугольника" << endl;
        int number;
        cin >> number;
        double firSide;
        double secSide;
        cout <<"Введите длину первой стороны" << endl;
        cin >> firSide;
        cout <<"Введите длину второй стороны" << endl;
        cin >> secSide;
	if (firSide <= 0 or secSide <= 0){
	cerr <<"ERROR:Были внесены неправильные значения для сторон прямоугольника"<<endl;
	break;
	}

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
    //Вот сюда други кейс
   //Крутой комментарий
    }
    
    case variants::circle: // Вычисление параметров окружности
    {
        cout << "Выберите номер варианта, который соответствует вашей задаче: \n 1 - Вычисление длины окружности \n 2 - Вычисление площади круга \n 3 - Вычисление площади кругового сектора" << endl;
        int number;
        cin >> number;
        double r = -1, ang = -1;
        cout << "Введите радиус окружности" << endl;
        cin >> r;
        while (r < 0) {
            cout << "Радиус не может быть меньше нуля!" << endl;
            cout << "Введите радиус окружности" << endl;
            cin >> r;
        }

        enum circleVar{
            length = 1,
            area,
            sector,
        };
        switch (number)
        {
        case circleVar::length:
            cout << circleLength(r) << endl;
            break;
        case circleVar::area:
            cout << circleArea(r) << endl;
            break;
        case circleVar::sector:
            cout << "Введите угол сектора в радианах" << endl;
            cin >> ang;
            while ( ang < 0 || 2*PI < ang ){
                cout << "Угол должен находиться в диапазоне [0; 2pi]!" << endl;
                cout << "Введите угол сектора в радианах" << endl;
                cin >> ang;
            }
            cout << circleSectorArea(r, ang) << endl;
            break;
        default:
            break;
        }
        break;
    }
    
    case variants::trapezoid:
{
    cout << "Выберите номер варианта, который соответствует вашей задаче: \n 1 - Вычисление периметра трапеции \n 2 - Вычисление площади трапеции \n 3 - Вычисление средней линии трапеции" << endl;
    int number;
    double lside, rside, hside, bside, H;

    cin >> number;
    /*
    if (lside <= 0 and rside <= 0 and hside <= 0 and bside <= 0 and H <= 0) {
        cerr << "ERROR:Были внесены неправильные значения для сторон прямоугольника" << endl;
        break;
    }
   */

    enum trapezoidVar{
            perimeter = 1,
            area,
            midline,
        };

    switch(number) {
        case trapezoidVar::perimeter:
            cout << "Длина левой грани трапеции: ";
            cin >> lside;
            cout << "Длина правой грани трапеции: ";
            cin >> rside;
            cout << "Длина верхней грани трапеции: ";
            cin >> hside;
            cout << "Длина нижней грани трапеции: ";
            cin >> bside;

            cout << trapezoidPer (lside, rside, hside, bside) << endl;
            break;
        case trapezoidVar::area:
            cout << "Длина верхней грани трапеции: ";
            cin >> hside;
            cout << "Длина нижней грани трапеции: ";
            cin >> bside;
            cout << "Длина высоты трапеции: ";
            cin >> H;

            cout << trapezoidArea (hside, bside, H) << endl;
            break;
        case trapezoidVar::midline:
            cout << "Длина верхней грани трапеции: ";
            cin >> hside;
            cout << "Длина нижней грани трапеции: ";
            cin >> bside;

            cout << trapezoidMidline (hside, bside) << endl;
            break;
    }
}


    default:
        cerr << "ERROR:Неправильный формат ввода" << endl;
        break;
    }
    

}
