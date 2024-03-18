#include <iostream>
using namespace std;
class rectangle {
private:
double width;
double height;
public:
rectangle(double w, double h) {
width = w;
height = h; 
}
double getPerimeter() {
return 2 * (width+height);
}
double getArea(){ 
return width * height;
}
};
int main () {
rectangle myRectangle( 5, 10);
cout << "Perimeter: "<< myRectangle.getPerimeter() << endl;
rectangle hinhcn2( 3, 4);
cout << "Chu vi:" << hinhcn2.getPerimeter() << endl;
cout << " dien tich:"<<hinhcn2.getArea() << endl; 
return 0;
}

