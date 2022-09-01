#include <iostream>
#include <math.h>
using namespace std;

double circleS( double S ){

    double r;
    cin >> r;

    S = M_PI * r * r;

    return S;
    }

double circleP( double P ){

    double ra;
    cin >> ra;

    P = 2 * M_PI * ra;

    return P;
    }

int main()
{
    double S , P;
    S = circleS( S );
     cout << "Your Area Is::" << S << endl;

    P = circleP( P );
     cout << "Your Perimeter Is::" << P<< endl;

    return 0;
}
