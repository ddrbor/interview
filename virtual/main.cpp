#include <iostream>

using namespace std;

class Gun{
public:
    virtual void Shot(){
        cout<<"BANG"<<endl;
    }
};
class GunMash: public Gun{
public:
    void Shot() override
    {
        cout<<"BANG BANG BANG"<<endl;
    }

};

class Player{
public:
    void Shot(Gun *gun){
        gun->Shot();
    }
};

int main()
{
    Gun gun;
    GunMash gm;
    Gun *weapon= &gm;
    Player pl;
    pl.Shot(&gm);
    //weapon->Shot();
    cout << "Hello World!" << endl;
    return 0;
}
