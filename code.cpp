#include <stdio.h>
#include <iostream>

using namespace std;

// hp - health , reg - regeneration/sec, sld - slow duration, csd - cast duration, as - atack speed, y - yes, n - no, s - single, m - multiple, fb - fireball

class Base
{
public:
    int hp;
    float reg;
};

class Money
{
public:
    int total, income;
};

class Troops
{
protected:
    int hp,range, damage, speed;
    float as;
public:
    void setDamage(int a){
        damage=a;
    }
    void setHp(int a){
        range=a;
    }
    void setRange(int a){
        range=a;
    }
};

class Ninja: public Troops{
public:
    void atack()
    {
        cout << "I'm a ninja, ninja chop! - " << damage <<endl;
    }
};

class Warrior: public Troops{
public:
    void atack()
    {
        cout << "I will cut you! - " << damage <<endl;
    }
};

class Archer: public Troops{
public:
    void atack()
    {
        cout << "Eat my arrow! - " << damage <<endl;
    }
};

class Cannoneer: public Troops{
public:
    void atack()
    {
        cout << "Check out my cannon! - " << damage <<endl;
    }
};

class Monster: public Troops{
public:
    void atack()
    {
        cout << "Monster must eat you!!! - " << damage <<endl;
    }
};

class Tower
{
protected:
    int range, damage, cost, upgrade;
    char spawn, target;
public:
    void setRange (int a){
        range=a;
    }
    void setDamage (int a){
        damage=a;
    }
};

class Castele: public Tower{
public:
    void protect()
    {
    	cout<<"You will defend my base! - "<<damage<<endl;
    }
};

class Arch: public Tower{
public:
    void protect()
    {
    	cout<<"I will take you down with my arrows! - "<<damage<<endl;
    }
};

class Wizzard: public Tower{
public:
    void protect()
    {
    	cout<<"My magic is stronger then you! - "<<damage<<endl;
    }
};

class Spells
{
public:
    int cost, damage, sld, csd;
    char target;
};

int main()
{
    Ninja n;
    Warrior w;
    Archer a;
    Cannoneer c;
    Monster m;

    Troops *enemy1 = &n;
    Troops *enemy2 = &w;
    Troops *enemy3 = &a;
    Troops *enemy4 = &c;
    Troops *enemy5 = &m;

    enemy1->setDamage(50);
    enemy2->setDamage(60);
    enemy3->setDamage(40);
    enemy4->setDamage(75);
    enemy5->setDamage(100);

    enemy1->setHp(120);
    enemy2->setHp(150);
    enemy3->setHp(100);
    enemy4->setHp(200);
    enemy5->setHp(300);

    enemy1->setRange(5);
    enemy2->setRange(3);
    enemy3->setRange(10);
    enemy4->setRange(7);
    enemy5->setRange(1);


    Castele castle;
    Arch arch;
    Wizzard wizzard;

    Tower *tower1 = &castle;
    Tower *tower2 = &arch;
    Tower *tower3 = &wizzard;

    tower1->setRange(3);
    tower2->setRange(10);
    tower3->setRange(7);

    tower1->setDamage(40);
    tower2->setDamage(65);
    tower3->setDamage(50);
}
