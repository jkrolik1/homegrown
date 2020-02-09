#include <cstdlib>
#include <iostream>      // std::cout
#include <string>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <math.h>
#include <algorithm>    // for std::copy_if and etc..
// #include <iterator>  // std::back_inserter
#include <functional>   // std::function

#include "classes.h"

#define TESTspace2

void calculator();  // using vectors
void oddEvenNumbersOfVector();  // using vectors, iota
void doubleArray(int* ptr, int size);   // *2 on array elements, but using []
void range(int first, int last, int step);    // range between 'first' and 'last' by 'step'
std::vector<int> rangeRet(int first, int last, int step);   // the same as above, but with return this vector
void investing();   // something wrong
void investing2();
void tree();
void guess();
void stringToAscii();
std::string VectorToString(std::vector<std::string> vect, char separator);
std::string deleteSpaces(std::string enter);
std::string deleteTrims(std::string enter); // "    ala ma kota     "
std::vector<int> FindSubstringMatches(std::string phrase, std::string match);   // FindSubstringMatches("Tbo be or not to be","be") and return indexes of b, when contains 'be'
int strongRecursion(int data);  // factorial
void niceLookVector(std::vector<int> vec);
std::vector<int> divisor(int div, std::vector<int> vec);    // lambda
std::vector<int> generateRandomVec(int how_many, int from, int to);
std::vector<int> addVect(std::vector<int> vec1,std::vector<int> vec2);
std::function<int(int)> factor = [&factor](int n){return n<2 ? 1 : factor(n-1)*n;};
void space();
void space2();
void testOperators();

int main(){
    testOperators();
    return 0;
}

void testOperators(){
    #undef TESToperator1   // +
    #undef TESToperator2   // write description
    #undef TESToperator3   // [ ]
    #undef TESToperator4   // ++
    #undef TESToperator5   // ==
    #undef TESToperator6   // > <
    #undef TESToperator7   // /

    Box box1(12,11,10);

    #ifdef TESToperator1
        Box box2(5,5,5);
        Box box3;
        box3 = box1 + box2;
    #endif // TESToperator1

    #ifdef TESToperator2
        std::cout << box1;
    #endif // TESToperator2

    #ifdef TESToperator3
        std::cout << box1[0];
    #endif // TESToperator3

    #ifdef TESToperator4
        std::cout << box1 << "\n";
        ++box1;
        std::cout << box1;
    #endif // TESToperator4

    #ifdef TESToperator5
        std::cout << std::boolalpha;
        Box box2(12,11,10);
        std:: cout << "Is boxes equal: " << (box1 == box2);
    #endif // TESToperator5

    #ifdef TESToperator6
        std::cout << std::boolalpha;
        Box box2(13,12,11);

        std::cout << "Box 1\n" << box1 << "\n";
        std::cout << "Box 2\n" << box2;
        std::cout << "\n";
        std::cout << "Is boxes equal: " << (box1 == box2) << "\n";
        std::cout << "Is box1 greater than box2: " << (box1 > box2) << "\n";
        std::cout << "Is box2 greater than box1: " << (box1 < box2) << "\n";
    #endif // TESToperator6

    #ifdef TESToperator7
        Box box2(13,12,11);
        Box box3;

        if(box1 >= box2) box3 = box1/box2;
        if(box1 < box2) box3 = box2/box1;

        std::cout << "Box 3\n" << box3;
    #endif // TESToperator7
}

Box Box::operator / (Box box1){
    Box boxx;
    double l = length / box1.getLength();
    double w = width / box1.getWidth();
    double h = height / box1.getHeight();

    boxx.setHeight(h);
    boxx.setWidth(w);
    boxx.setLength(l);

    return boxx;
}

bool Box::operator > (Box box1){
    if((length > box1.getLength())&&
        (width > box1.getWidth())&&
        (height > box1.getHeight()))
        return true;
    else
        return false;
}
bool Box::operator < (Box box1){
    if((length < box1.getLength())&&
        (width < box1.getWidth())&&
        (height < box1.getHeight()))
        return true;
    else
        return false;
}

bool Box::operator == (Box box1){
    if((length == box1.getLength())&&
        (width == box1.getWidth())&&
        (height == box1.getHeight()))
        return true;
    else
        return false;
}

void Box::operator ++ (){
    length++;
    height++;
    width++;
}

double Box::operator [] (int x){
    if(x == 0) return height;
    if(x == 1) return width;
    if(x == 2) return length;
    if(x >= 3) return 0;
}

Box::operator const char*(){
    std::ostringstream boxStream;
    boxStream << "Description of object:\n";
    boxStream << "Height: " << height << "\n";
    boxStream << "Width: " << width << "\n";
    boxStream << "Length: " << length << "\n";

    boxString = boxStream.str();
    return boxString.c_str();
}

Box Box::operator + (Box &box1){
    Box newBox;
    double len, wid, hei;

    len = length + box1.getLength();
    wid = width + box1.getWidth();
    hei = height + box1.getHeight();

    newBox.setHeight(hei);
    newBox.setWidth(wid);
    newBox.setLength(len);

    return newBox;
}

Box::Box(double h, double w, double l){setHeight(h),setWidth(w),setLength(l);}

void space2(){
    std::string enter[100], newString1[100];
    bool big=false,endTest=false;
    int y,x=0;
    char c;

    enter[x]=" ";
    // getline(std::cin, enter[x]);     // enter your test

    #ifdef TESTspace2
        enter[x+=1]="ala ma kota";
        enter[x+=1]="Ala ma kota";
        enter[x+=1]="xxx ma kota";
        enter[x+=1]="a A";
        enter[x+=1]="A A A A    polska";
        enter[x+=1]="  a A";
        enter[x+=1]="  a A  a    pp XaXaa";
    #endif // TESTspace2
        enter[x+=1]="End of tests";

    for(int j=0; enter[j]!="End of tests"; ++j){
        std::cout << "Test " << j+1 << ":"<< enter[j] << "\n";

        if(((int)(enter[j].at(0))>=97)&&((int)(enter[j].at(0))<=122))
            newString1[j] += (char)((int)(enter[j].at(0)))-32;
        else if((int)(enter[j].at(0))==32){}
        else
            newString1[j] += enter[j].at(0);

        for(int i=1; i<enter[j].size(); ++i){
            if((int)(enter[j].at(i))==32){
                big = true;
                continue;
            }

            if(big){
                if(((int)(enter[j].at(i))>=97)&&((int)(enter[j].at(i))<=122)){
                    y = ((int)(enter[j].at(i)))-32;
                    c = y;
                    newString1[j] += c;
                    big = false;
                    continue;
                }
                else
                    big = false;
            }

            newString1[j] += enter[j].at(i);

        }

        std::cout << "Verdict " << j+1 << ":"<< newString1[j] << "\n\n";
    }
}

void space(){
    int y=0;
    std::string enter,partOfVec,newString;
    getline(std::cin, enter);

    std::vector<std::string> division;
    std::vector<char> big;

    std::stringstream ss(enter);

    while(getline(ss,partOfVec,' '))
        division.push_back(partOfVec);

    for(auto x : division){
        y=(int)(x.at(0))-32;
        if((y>=65)&&(y<=90))
            big.push_back((char)y);
        else
            big.push_back(x.at(0));
        for(int i=1; i<x.size(); ++i)
            big.push_back(x[i]);
    }

    for(int i=0; i<big.size(); ++i)
        newString += big[i];

    std::cout << newString;
}

void Battle::GetAttackResult(Warrior warrior1, Warrior warrior2){
    std::cout << "\n" << warrior1.getName() << " has "
        << warrior1.getHealth() << " health points\n";
    std::cout << warrior2.getName() << " has "
        << warrior2.getHealth() << " health points\n";
}

void Battle::StartFight(Warrior &warrior1, Warrior &warrior2){
    bool warrior1End=false,warrior2End=false;
    int start = chose();

    if(start==0){
        std::cout << warrior1.getName() << " start attacking!\n";
        GetAttackResult(warrior1,warrior2);
        do{
            warrior2.attackWarrior(warrior1.getAttack());
            warrior1.attackWarrior(warrior2.getAttack());
            if(warrior2.getHealth()<=0){
                std::cout << "\nGame Over! " << warrior1.getName() << " won!!!\n";
                warrior2End = true;
                break;
            }
            if(warrior1.getHealth()<=0){
                std::cout << "\nGame Over! " << warrior2.getName() << " won!!!\n";
                warrior1End = true;
                break;
            }
            GetAttackResult(warrior1,warrior2);
        }while(!warrior1End && !warrior2End);
    }
    else if(start==1){
        std::cout << warrior2.getName() << " start attacking!\n";
        GetAttackResult(warrior1,warrior2);
        do{
            warrior1.attackWarrior(warrior2.getAttack());
            warrior2.attackWarrior(warrior1.getAttack());
            if(warrior1.getHealth()<=0){
                std::cout << "\nGame Over! " << warrior2.getName() << " won!!!\n";
                warrior1End = true;
                break;
            }
            if(warrior2.getHealth()<=0){
                std::cout << "\nGame Over! " << warrior1.getName() << " won!!!\n";
                warrior2End = true;
                break;
            }
            GetAttackResult(warrior1,warrior2);
        }while(!warrior1End && !warrior2End);
    }
}

int Battle::chose(){
    srand(time(NULL));
    return (rand() % 2);
}

Warrior::Warrior(){
    setName("");
    setHealth(0);
    setAttack(0);
    setBlock(0);
}

Warrior::Warrior(std::string name,int health,int attack,int block){
    setName(name);
    setHealth(health);
    setAttack(attack);
    setBlock(block);
}

std::vector<int> addVect(std::vector<int> vec1,std::vector<int> vec2){
    std::vector<int> vecReturn;
    int y = 0;

    std::for_each(vec1.begin(),vec1.end(),
                  [&y,&vecReturn,&vec2](int x){vecReturn.push_back(x+vec2[y++]);});

    return vecReturn;
}

std::vector<int> generateRandomVec(int how_many, int from, int to){
    std::vector<int> newVect;
    int x=0;

    srand(time(NULL));

    for(int i=0; i<how_many; ++i){
        x = rand() % (to - from + 1) + from;
        newVect.push_back(x);
    }

    return newVect;
}

std::vector<int> divisor(int div, std::vector<int> vec){
    std::vector<int> retur;
    std::copy_if(vec.begin(),vec.end(),std::back_inserter(retur),
                 [div](int x){return (x % div) == 0;});
    return retur;
}

void niceLookVector(std::vector<int> vec){
    std::cout << " ";

    for(int i=0; i<vec.size(); ++i)
        std::cout << "- - ";

    std::cout << "-";
    std::cout << "\n" << " | ";

    for(int i=0; i<vec.size(); ++i)
        std::cout << i << " | ";

    std::cout << "\n" << " | ";

    for(auto x : vec)
        std::cout << x << " | ";

    std::cout << "\n";
    std::cout << " ";

    for(int i=0; i<vec.size(); ++i)
        std::cout << "- - ";

    std::cout << "-";
}

int strongRecursion(int data){
    if(data == 1) return 1;
    else if(data == 0) return 1;
    else return strongRecursion(data - 1)*data;
}

std::vector<int> FindSubstringMatches(std::string phrase, std::string match){
    std::vector<int> index,indexWrong,indexCorrect;
    for(int i=0; i<phrase.length(); ++i)
        if(phrase.at(i)==match.at(0))
            index.push_back(i);
    for(auto x : index)
        for(int i=0, j=x; i<match.length(); ++i, ++j)
            if(phrase.at(j)!=match.at(i))
                indexWrong.push_back(x);
    for(int i=0; i<indexWrong.size(); ++i)
        for(int j=0; j<index.size(); ++j)
            if(indexWrong[i]==index[j])
                index[j] = 0;
    for(auto x : index)
        if(x!=0)
            indexCorrect.push_back(x);
    return indexCorrect;
}

std::string deleteTrims(std::string enter){
    std::string ret,ret2,ret3;
    bool yet = true;
    for(int i=0; i<enter.length(); ++i){
        if((enter.at(i)==' ')&&(yet)){          // whitespace
            ret += "";
        }
        else if((enter.at(i)==' ')&&(!(yet))){  // spaces in the middle
            ret += enter.at(i);
        }
        else if(enter.at(i)!=' '){
            ret += enter.at(i);
            yet = false;
        }
    }
    yet = true;
    for(int i=ret.length()-1; i>=0; --i){
        if(ret.at(i)!=' '){
            ret2 += ret.at(i);
            yet = false;
        }
        else if((ret.at(i)==' ')&&(yet)){
            ret2 += "";
        }
        else if((ret.at(i)==' ')&&(!(yet))){
            ret2 += ret.at(i);
        }
    }
    for(int i=ret2.length()-1; i>=0; --i){
        ret3 += ret2.at(i);
    }
    return ret3;
}

std::string deleteSpaces(std::string enter){
    std::string ret;
    for(int i=0; i<enter.length(); ++i)
        if(enter.at(i)!=' ')
            ret += enter.at(i);
    return ret;
}

std::string VectorToString(std::vector<std::string> vect, char separator){
    std::string ret;
    for(auto x : vect) ret += x + separator;
    return ret;
}

void stringToAscii(){
    std::string yourStr,task("Give me a uppercase string: ");
    std::cout << task;
    getline(std::cin, yourStr);

    for(int i=0; i<yourStr.length(); ++i)
        std::cout << (int)(yourStr.at(i)) << " ";
}

void guess(){
    srand(time(NULL));
    int guess = std::rand() % 101;
    int myNumber = 0;

    for(;myNumber!=guess;){
        std::cout << "Podaj liczbe: ";
        std::cin >> myNumber;
        if(myNumber > guess) std::cout << "Zbyt duza\n";
        if(myNumber < guess) std::cout << "Zbyt mala\n";
        std::cout << "\n";
    }
    std::cout << "Dobrze!\n";
}

void tree(){
    int tall=0, trunk=0, space=0, leader=1, counter=1, trunkSpace=0, trunkQuantity=0;
    int leaderA[100000]={0};
    char spaceC = ' ', leaderC = '#';

    std::cout << "How tall is the tree: ";
    std::cin >> tall;
    std::cout << "\n";

    trunk = tall;
    trunk /= 5;
    trunk += 1;
    trunkQuantity = (tall / 10) + 1;

    while(tall>0){
        space = tall;
        leaderA[counter] = leader;

        if(leader == leaderA[trunk]) trunkSpace = space;

        for(int i=0; i<space; ++i)
            std::cout << spaceC;

        for(int y=0; y<leader; ++y)
            std::cout << leaderC;

        std::cout << "\n";
        leader += 2;
        tall -= 1;
        counter += 1;
    }

    while(trunkQuantity > 0){
        leader = trunk;
        space = trunkSpace;

        for(int i=0; i<space; ++i)
            std::cout << spaceC;
        for(int y=0; y<leaderA[leader]; ++y)
            std::cout << leaderC;

        std::cout << "\n";

        trunkQuantity -= 1;
    }
}

void investing2(){
    double invest=0,percent=0;

    std::cout << "How much would You like to invest: ";
    std::cin >> invest;
    std::cout << "What is the interest rate: ";
    std::cin >> percent;

    percent /= .01;

    for (auto x : rangeRet(1,10,1))
        invest += (invest*percent);

    std::cout << "Value after 10 years: " << invest;
}

void investing(){
    std::string invest="", percent="";
    double investD=0, percentD=0;
    std::vector<double> vect;
    double current=0, now=0, real=0;

    std::cout << "How much would You like to invest: ";
    getline(std::cin, invest);

    std::cout << "What is the interest rate: ";
    getline(std::cin, percent);

    investD = std::stod(invest);
    percentD = std::stod(percent);

    now = real = investD;

    for(int i=0;i<10;++i){
        current = now*(percentD/100);
        vect.push_back(current);
        now = investD+current;
        //std::cout << vect[i] << "\n";
        real += vect[i];
    }

    std::cout << "Value after 10 years: " << real;


}

std::vector<int> rangeRet(int first, int last, int step){
    int i = first;
    std::vector<int> myVector;
    while (i <= last){
        myVector.push_back(i);
        i += step;
    }
    return myVector;
}

void range(int first, int last, int step){
    int i = first;
    std::vector<int> myVector;
    while (i <= last){
        myVector.push_back(i);
        i += step;
    }
    for(auto x : myVector) std::cout << x << "\n";
}

void doubleArray(int* ptr, int size){
    for(int i=0; i<size; ++i){
        ptr[i]=ptr[i]*2;
        std::cout << ptr[i] << "\n";
    }

    /*MAIN
    int arr[] = {1,2,3,4,5,6,7,8,9};
    doubleArray(arr,9);*/
}

void oddEvenNumbersOfVector(){
    std::vector<int> myVect(18);
    std::iota(std::begin(myVect),std::end(myVect),5);
    for(auto x : myVect){
        if((x % 2) == 0)
            std::cout << "The number " << x << " is even\n";
        else
            std::cout << "The number " << x << " is odd\n";
    }
}

void calculator(){
    double number1=0, number2=0;
    double equals=0;

    std::string enteredCalculation = "";
    std::vector<std::string> checkExpresion;

    std::cout << "Enter calculation: ";
    getline(std::cin, enteredCalculation);
    std::stringstream ss(enteredCalculation);
    std::string partOfCalculation;

    while(getline(ss,partOfCalculation,' '))
        checkExpresion.push_back(partOfCalculation);

    number1 = std::stoi(checkExpresion[0]);
    number2 = std::stoi(checkExpresion[2]);
    std::string operation = checkExpresion[1];

    if(operation=="+")
        printf("Score of %.1f + %.1f = %.1f\n",
               number1,number2,(number1+number2));
    else if(operation=="-")
        printf("Score of %.1f - %.1f = %.1f\n",
               number1,number2,(number1-number2));
    else if(operation=="*")
        printf("Score of %.1f * %.1f = %.1f\n",
               number1,number2,(number1*number2));
    else if(operation=="/")
        printf("Score of %.1f / %.1f = %.1f\n",
               number1,number2,(number1/number2));
    else
        std::cout << "Error\n";
}

