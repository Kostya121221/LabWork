#include <iostream>
#include <cmath>

using namespace std;



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