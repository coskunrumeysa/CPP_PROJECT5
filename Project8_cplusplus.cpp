//Beni Yaratan Elbet Yolumu Gösterir .Şuara/78
//Bu program bir dik üçgenin alanını ve çevresini hesaplamak için yazılmıştır.
//This program written for calculate perimeter and area of triangle.

#include <iostream>
using namespace std;

int main()
{
    double short_side;
    double long_side;
    double hipotenüs;
    double perimeter;
    double area;

    cout << "Please enter short side :" << endl;
    cin >> short_side;
    cout << endl;
    cout << "Please enter long side:" << endl;
    cin >> long_side;
    cout << endl;
    cout << "Please enter hipotenus :" << endl;
    cin >> hipotenüs;
    cout << endl;

    perimeter = short_side + long_side + hipotenüs;

    area = (short_side * long_side) / 2;

    cout <<"Perimeter of triangle :\t " << perimeter << endl;

    cout << "Area of triangle :\t" << area << endl;

    system("PAUSE");
    return 0;

}

