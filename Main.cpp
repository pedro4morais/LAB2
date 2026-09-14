#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

double calculateVolume(double radius, double height)
{
    return PI * radius * radius * height;
}

double calculateSurfaceArea(double radius, double height)
{
    return 2 * PI * radius * radius + 2 * PI * radius * height;
}

int main()
{
    double radius = 5.0;
    double height = 10.0;

    double volume = calculateVolume(radius, height);
    double surfaceArea = calculateSurfaceArea(radius, height);

    cout << fixed << setprecision(2);

    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;

    return 0;
}