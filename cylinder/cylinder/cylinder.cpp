#include <iostream>
using namespace std;
int radius;
int height;
double area;
int main() {
	cout << "whats the radius?" << endl;
	cin >> radius;
	cout << "whats the height?" << endl;
	cin >> height;
	area = (2 * 3.14*radius*height + (2 * 3.14*(radius*radius)));//why is the program mad at me???????
	cout << area << endl;
}