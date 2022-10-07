// BMI.cpp -- compute the BMI(Body Mass Index) of me

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    const float kFeetToInch = 12;
    const float kInchToMeter = 0.0254;
    const float kKgToPound = 2.2;

    float heightF, heightI, weight;
    cout << "身高（英尺）：";
    cin >> heightF;
    cout << "身高（英寸）：";
    cin >> heightI;
    cout << "体重（磅）：";
    cin >> weight;
    cout << "BMI: " << (weight / kKgToPound) / pow(((heightF * 12 + heightI) * kInchToMeter), 2) << endl;
    return 0;
}