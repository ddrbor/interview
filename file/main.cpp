#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Point {
public:
    Point(){
        x=y=z=0;
    }
    Point(int x, int y, int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void Print(){
        cout<<"x= "<<x<<"\ty= "<<y<<"\tz= "<<z<<endl;
    }

    int x,y,z;
};

int main()
{
    string path= "myFile.txt";
    Point point(5,6,7);
    point.Print();

    ofstream fout;
    fout.open(path,ofstream::app);
    if (!fout.is_open()){
        cout<<"File not open"<<endl;
    }
    else{
        cout<<"File open"<<endl;
        fout.write((char*)&point,sizeof(Point));
    }
    fout.close();

    ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        cout<<"File not open"<<endl;
    }
    else{
        cout<<"File open"<<endl;
        while(fin.read((char*)&point,sizeof(Point))){
        point.Print();
        }
    }
    fin.close();
    cout << "Hello World!" << endl;
    return 0;
}
