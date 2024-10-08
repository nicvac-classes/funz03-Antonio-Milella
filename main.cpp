#include <iostream>
#include <cmath>

using namespace std;

float calcoloArea(int r);
float calcoloCirconferenza(int r);

int main() {
    int r1, r2;
    float area1, area2, c1, c2;
    
    cout << "Scrivi il raggio del primo cerchio" << endl;
    cin >> r1;
    cout << "Scrivi il raggio del secondo cerchio" << endl;
    cin >> r2;
    area1 = calcoloArea(r1);
    area2 = calcoloArea(r2);
    c1 = calcoloCirconferenza(r1);
    c2 = calcoloCirconferenza(r2);
    cout << "Area Cerchio n.1: " << area1 << endl;
    cout << "Circonferenza Cerchio n.1: " << c1 << endl;
    cout << "Area Cerchio n.2: " << area2 << endl;
    cout << "Circonferenza Cerchio n.2: " << c2 << endl;
    return 0;
}

float calcoloArea(int r) {
    float area;
    
    area = 3.14 * pow(r, 2);
    
    return area;
}

float calcoloCirconferenza(int r) {
    float c;
    
    c = r * 2 * 3.14;
    
    return c;
}
