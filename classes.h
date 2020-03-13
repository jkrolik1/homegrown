#include <cstdlib>
#include <iostream>
#include <string>

struct D{
        D(int numb, char cha) : x(numb),z(cha){};
        ~D(){std::cout << "Destroy\n";}
        void meth();
        int getX() const{return x;}
        char getZ() const{return z;}
    private:
        int x=0;
        char z='^';
};

class Box{
    private:
        double height, width, length;
        std::string boxString;
    public:
        Box() : height(0), width(0), length(0){}
        Box(double, double, double);

        void setHeight(double height){this->height = height;}
        void setWidth(double width){this->width = width;}
        void setLength(double length){this->length = length;}

        double getHeight() {return height;}
        double getWidth() {return width;}
        double getLength() {return length;}

        Box operator + (Box &box1);
        operator const char*();
        double operator [] (int x);
        void operator ++ ();
        bool operator == (Box box1);
        bool operator > (Box box1);
        bool operator < (Box box1);
        Box operator / (Box box1);
};

class Warrior{
    private:
        std::string name;
        int health,attack,block;

    public:
        Warrior();
        Warrior(std::string, int, int, int);

        std::string getName() {return name;};
        void setName(std::string name) {this->name = name;}

        int getHealth() {return health;};
        void setHealth(int health) {this->health = health;}

        int getAttack() {return attack;};
        void setAttack(int attack) {this->attack = attack;}

        int getBlock() {return block;};
        void setBlock(int block) {this->block = block;}

        void attackWarrior(int points){health -= points;}

        int blockWarrior(){
            return 0;
        }
};

class Battle{
    public:
        int chose();
        void StartFight(Warrior &warrior1, Warrior &warrior2);
        void GetAttackResult(Warrior warrior1, Warrior warrior2);
};
