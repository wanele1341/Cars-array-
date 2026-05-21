#include <iostream>
using namespace std;

int main()
{

    string car = "Maserati";

    string cars[3] = {"BMW","Coop","Benz"};
 
    cout << "Length :" << cars->length() << endl;
    cout << "Append:" << car.append(" Coop") << endl;
    cout << "Length:" << car.length() << endl;
    cout << cars[1] << endl;
    cout << "Replace" << car.replace(0, 1, "AMG") << endl;
    cout << "Substring:" << cars->substr(0, 1) << endl;

    return 0;
}