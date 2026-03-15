#include <iostream>
#include <cmath>

using namespace std;

int rectanglePer (int a, int b){
    return (a + b) * 2;
}

int rectangleArea (int a, int b){
    return (a*b);
}
int rectangleDia (int a, int b){
    return (sqrt((a*a) + (b*b)));
}

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
    case variants::rectangle:
        /* code */
        break;
    
    default:
        cerr << "Неправильный формат ввода" << endl;
        break;
    }
    

}