#include <iostream>
#include <string>

using namespace std;

class Gun {
public:
    Gun() {

    }
    Gun(string name, int clip, int maxAmmo) {
        this->name = name;
        this->clip = clip;
        curClip = clip;
        this->maxAmmo = maxAmmo;
    }
    virtual void shoot() {
        if (curClip != 0) {
            curClip--;
            cout << "BANG\nU have " << curClip << "ammo left" << endl;
        }
        else if (curClip == 0) {
            cout << "CLICK" << endl;
        }
    }
    virtual void reload() {
        if (curClip != clip) {
            maxAmmo = maxAmmo - (clip - curClip);
            curClip = clip;
            cout << "Gun reloaded\n" << "U have left " << maxAmmo << endl;
        }
        else {
            cout << "Ur clip is full" << endl;
        }
    }
protected:
    string name;
    int clip;;
    int curClip;
    int maxAmmo;
};

class SMG :public Gun {
public:
    SMG(string name, int clip, int maxAmmo) {
        this->name = name;
        this->clip = clip;
        curClip = clip;
        this->maxAmmo = maxAmmo;
    }
    void shoot() override {
        if (curClip = 0) {
            cout << "CLICK" << endl;
        }
        else {
            int sAction;
            cout << "How many bullets u want to shoot?" << endl;
            cin >> sAction;
            cout << string(sAction, 'BANG') << endl;
        } 
    }
private:
};

class Sniper :public Gun {
public:
    Sniper(string name, int clip, int maxAmmo) {
        this->name = name;
        this->clip = clip;
        curClip = clip;
        this->maxAmmo = maxAmmo;
    }
    void shoot() {
        if (curClip = 0)
        {
            cout << "CLICK" << endl;
        }
        else
        {
            curClip--;
            cout << "BANG\nU have left " << curClip << " ammo left" << endl;
        }
    }
};

int main()
{
    bool menuOn = true;
    bool gameOn = true;
    int gunChoose;
    while (menuOn)
    {
        Gun DE("Desert Eagle", 7, 35);
        SMG MPX("MPX", 30, 120);
        Sniper AWP("AWP", 5, 30);
        cout << "Choose weapon:\n1.Desert Eagle\n2.MPX\n3.AWP";
        cin >> gunChoose;
        while (gameOn)
        {
            int action;
            cout << "What do you want?\n 1.Shoot\n 2.Reload\n 3.Exit Game" << endl;
            cin >> action;
            switch (action)
            {
            case 1:
                DE.shoot();
                break;
            case 2:
                DE.reload();
                break;
            case 3:
                gameOn = false;
                break;
            default:
                cout << "lol kek moment, choose between 1-3" << endl;
            }
        }
    }
    
    cout << "GG, game is over" << endl;
    return 0;
}