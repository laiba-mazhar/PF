#include <iostream>
using namespace std;

int main()
{
int wheels, carBodies, figures, cars;
int x_wheels, x_figures;

cout << "\nEnter number of wheels: ";
cin >> wheels;
cout << "Enter number of car bodies: ";
cin >> carBodies;
cout << "Enter number of human figures: ";
cin >> figures;

x_wheels = wheels/4;
x_figures = figures/2;

cars=carBodies;

if(x_wheels<carBodies && x_wheels<x_figures)
cars=x_wheels;
else if(carBodies<x_wheels && carBodies<x_figures)
cars=carBodies;
else 
cars=x_figures;

cout << "\n\n" << cars << " number of cars can be made!\n";

return 0;
}
