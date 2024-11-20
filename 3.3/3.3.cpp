#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, R; 
    double y; 

   
    cout << "¬вед≥ть значенн€ R: ";
    cin >> R;

    cout << "¬вед≥ть значенн€ x: ";
    cin >> x;
 
    if (x <= -R) {
        y = 1; 
    }
    else if (x > -R && x <= 0) {
        y = -sqrt(1 - pow(x + R, 2));
    }
    else if (x > 0 && x <= 4) {
        if (x <= 2) {
            y = -1; 
        }
        else {
            y = (x - 2) / 2 - 1; 
        }
    }
    else if (x > 4) {
        y = x - 4; 
    }

    cout << "y = " << y << endl;

    return 0;
}
