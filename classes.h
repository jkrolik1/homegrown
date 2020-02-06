#include <cstdlib>
#include <iostream>
#include <string>

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
