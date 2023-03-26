#include <iostream>
using namespace std;

class Enemy // Base Class
{
protected:
    int hp, atk;
public:
    Enemy(int hp, int atk) : hp(hp), atk(atk) { }

    virtual void attack()
    {
        cout << "ENEMY ATTACK! [" << atk << "]" << endl;
    }

    void checkHp()
    {
        cout << "Current HP: " << hp << endl;
    }
};

class BossEnemy : public Enemy // Subclass
{
private:
    double critMult;
public:
    BossEnemy(int hp, int atk, double critMult) : Enemy(hp, atk), critMult(critMult) { }

    void attack() // Override attack() function.
    {
        cout << "CRITICAL ATTACK! [" << atk * critMult << "]" << endl;
    }

    void checkCritStat()
    {
        cout << "Crit Multi: " << critMult * 100 << "%" << endl;
    }
};

int main()
{
    // Static Type: Enemy
    // Dynamic Type: BossEnemy (Subclass of Static Type)
    Enemy *e = new BossEnemy(27000, 215, 5);

    e->attack();
    e->checkHp();
}