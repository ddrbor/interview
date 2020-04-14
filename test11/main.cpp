#include <iostream>
#include <string>

using namespace std;

class Weapon
{
public:
    virtual void Shoot()=0;
};

class Gun: public Weapon
{
public:
    void Shoot() override
    {
        cout<<"BANG"<<endl;
    }
};

class SubmachineGun:public Gun
{
public:
    void Shoot () override
    {
        cout<<"BANG BANG BANG"<<endl;
    }
};

class Bazuka:public Weapon
{
public:
    void Shoot () override
    {
        cout<<"BABAH"<<endl;
    }
};

class Knife: public Weapon
{
public:
    void Shoot()override
    {
        cout<<"Chiki-Piki"<<endl;
    }
};

class Player
{
public:
    void Shoot(Weapon *weapon){
        weapon->Shoot();
    }
};

int main()
{
    Player Ich;
    Bazuka bazuka;
    Ich.Shoot(&bazuka);
    Knife knife;
    Ich.Shoot(&knife);
    Gun gun;
    Ich.Shoot(&gun);
    SubmachineGun SGun;
    Ich.Shoot(&SGun);

    cout << "Hello World!" << endl;
    return 0;
}
