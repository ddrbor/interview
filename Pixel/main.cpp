#include <iostream>
#include <string>

using namespace std;

class Image{
public:
    void GetImageInfo(){
        for(int i=0; i<5;i++){
            cout<<"#"<<i<<" "<<pixel[i].GetInfo()<<endl;
        }
    }
private:
    class Pixel{

    public:
        Pixel(int r, int g, int b){
            this->r=r;
            this->g=g;
            this->b=b;
        }
        string GetInfo(){
            return "Pixel: r= " + to_string(r)+" g= "+ to_string(g)+" b= "+ to_string(b);
        }
    private:
        int r,g,b;
    };

    Pixel pixel[5]{
    Pixel(0,4,64),
    Pixel(0,4,64),
    Pixel(0,4,64),
    Pixel(0,4,64),
    Pixel(0,4,64)};

};

int main()
{
    Image img;
    img.GetImageInfo();
    cout << "Hello World!" << endl;
    return 0;
}
