// GeometryOOPDZ.cpp 

#include "Geometry.h"

int StaticGeom::x{};
int StaticGeom::y{};
int StaticGeom::z{};
int StaticGeom::Count{};
long long StaticGeom::ploshad{};

int main()
{
    setlocale(NULL, "RU");
    int chislo1{}, chislo2{}, chislo3{}, vibor{};
    string answer{};
    

    do
    {
        cout << "Выберите Фигуру для подсчета площади: " << endl;
        cout << R"(
1. - Треугольник
2. - Прямоугольник
3. - Квадрат
4. - Ромба  
)" << endl;

        cout << "Введите (1-4): ";
        cin >> vibor;
        cout << endl;
        switch (vibor)
        {
        case 1:

            cout << "Вы выбрали Треугольник!" << endl << endl;
            cout << "Ведите 1 - сторону: ";
            cin >> chislo1;
            cout << "Ведите 2 - сторону: ";
            cin >> chislo2;
            cout << "Ведите 3 - сторону: ";
            cin >> chislo3;
            cout << endl;
            StaticGeom::Treygolnik(chislo1, chislo2, chislo3);
            cout << "Площадь(S) Треугольника = " << StaticGeom::ploshad << endl;
            break;


        case 2:
            cout << "Вы выбрали Прямоугольник!" << endl << endl;
            cout << "Ведите 1 - сторону: ";
            cin >> chislo1;
            cout << "Ведите 2 - сторону: ";
            cin >> chislo2;

            cout << endl;

            StaticGeom::Pryamoygilnik(chislo1, chislo2);
            cout << "Площадь(S) Прямоугольника = " << StaticGeom::ploshad << endl;
            break;

        case 3:
            cout << "Вы выбрали квадрат!" << endl << endl;
            cout << "Ведите 1 - сторону: ";
            cin >> chislo1;
            cout << endl;
            StaticGeom::Kvadrat(chislo1);
            cout << "Площадь(S) квадрата = " << StaticGeom::ploshad << endl;
            break;
        case 4:
            cout << "Вы выбрали Ромб!" << endl << endl;
            cout << "Ведите 1 - сторону: ";
            cin >> chislo1;
            cout << "Ведите 2 - сторону: ";
            cin >> chislo2;

            cout << endl;

            StaticGeom::Romb(chislo1, chislo2);
            cout << "Площадь(S) Ромба = " << StaticGeom::ploshad << endl;
            break;
        default:
            cout << "Такой фигуры нет в программе!" << endl;
            break;

        }
        cout << endl;
        cout << "Сколько раз посчитпли площадь: " << StaticGeom::getCount() << endl << endl;
    
        cout << "Продолжить использование программы? (Y/N) или (Да/Нет): ";
        cin >> answer;
        cin.ignore();
        cout << endl<<endl;

    } while (answer == "Y" || answer == "y" || answer == "Да" || answer == "да");
   




   
   
   
    

  
 
    

}

