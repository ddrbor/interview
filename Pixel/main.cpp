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


class Fixel{

public:
    Fixel(){
        r=g=b=0;
    }
    Fixel(int r, int g, int b){
        this->r=r;
        this->g=g;
        this->b=b;
    }
    string GetInfo(){
        return "Fixel: r= " + to_string(r)+" g= "+ to_string(g)+" b= "+ to_string(b);
    }
private:
    int r,g,b;
};



int main()
{
    Image img;
    img.GetImageInfo();

    Fixel arr[5];
    arr[0]=Fixel(12,12,12);
    cout<<"Static "<<arr[0].GetInfo()<<endl;

    Fixel  *arr_dinamic = new Fixel[5];
    arr_dinamic[0]=Fixel(14,15,16);
    cout<<"Dinamic"<<arr_dinamic[0].GetInfo()<<endl;
    delete[] arr_dinamic;

    cout << "Hello World!" << endl;
    return 0;
}
