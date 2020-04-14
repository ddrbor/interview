#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;
public:
    Point(){
        x=0;
        y=0;
        cout<<this<<"default constructor"<<endl;
    }
    Point(int valueX, int valueY){
        x = valueX;
        y = valueY;
        cout<< this << "constructor" <<endl;
    }
    bool operator == (const Point & other){
        return this->x == other.x && this->y == other.y;
    }
    bool operator != (const Point & other){
        return this->x != other.x && this->y != other.y;
    }
    Point operator+ (const Point & other){
        Point temp;
        temp.x = this->x+other.x;
        temp.y = this->y+other.y;
        return temp;
    }
//    void SetY(intY);
//    void GetY(intY);
//    void SetX(intX);
//    void GetX(intX);
};





int main()
{
    Point a(5,1);
    Point b(77,12);
    Point c;
    c=a+b;

    return 0;
}
