#include <iostream>

using namespace std;

class Gun {
public:
    virtual void shoot() {
        cout << "BANG" << endl;
    }
};

class SMG :public Gun {
public:
    void shoot() override {
        cout << "BRRRRRRR" << endl;
    }
};

class Player {
public:
    void shoot(Gun* gun) {
        gun->shoot();
    }
};

int main()
{
    Gun gun;
    SMG smg;
    Player Forsxd;
    Forsxd.shoot(&smg);
    Forsxd.shoot(&gun);
}