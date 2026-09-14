#include <iostream>
#include <iomanip>

using namespace std;

// Constant value for pi
const double PI = 3.14159;

// Calculates the volume of a right circular cylinder
double calculateVolume(double radius, double height)
{
    return PI * radius * radius * height;
}

// Calculates the surface area of a right circular cylinder
double calculateSurfaceArea(double radius, double height)
{
    return 2 * PI * radius * radius + 2 * PI * radius * height;
}

int main()
{
    // Hard-coded values used to test the program
    double radius = 5.0;
    double height = 10.0;

    // Calculate volume and surface area
    double volume = calculateVolume(radius, height);
    double surfaceArea = calculateSurfaceArea(radius, height);

    cout << fixed << setprecision(2);

    // Display the cylinder information
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;

    return 0;
}
