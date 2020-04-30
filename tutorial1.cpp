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
#include <fstream>
#include <map>
#include <list>
#include <memory>
#include <deque>
#include <stack>
#include <set>

#include <boost/lexical_cast.hpp>
#include <boost/variant.hpp>
#include <boost/any.hpp>
#include <boost/optional.hpp>
#include <boost/algorithm/cxx11/iota.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/array.hpp>
#include <boost/random.hpp>
// Study it: random,

#include "classes.h"
#define TESTspace2
#define WRT(x) std::cout << x << "\n"

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
void readFromFile(std::string path);
void writeToFile(std::string path);
void descriptionOfTxt(std::string path, std::string path2);
void insertValueToList();
void myMap();
void conv();                            // boost/lexical_cast.hpp
std::string gg(std::string input);      // https://pl.spoj.com/problems/JGGHACK/
bool testGG();
void ex29();                            // boost/algorithm/cxx11/iota.hpp
int armstrongNumbers(int number);
bool IsTheNumberPalindrom(int number);
void tryCatchTest();
void upTest();
void boostVariant();
void boostAny();
void boostAnyStack();
void boostOptional();
void zmienKazdaLitereNaPozycjiN(char s[], int n);
bool poprawnaNazwaPlikuDOS(char s[]);
bool poprawnaNazwaPlikuDOStest();
std::vector<std::vector<int>> ptsumy(int n);                    //  https://pl.spoj.com/problems/PTSUMY/
std::vector<std::vector<int>> mergeV                            //
    (std::vector<std::vector<int>> myV1,                        //  N
     std::vector<std::vector<int>> myV2);                       //  I   U
void testMergeV();                                              //  E   M
void showDvect(std::vector<std::vector<int>> myVector);         //      I   !
int sumvect(std::vector<int> myVector);                         //      E   !
int searchOnes(std::vector<std::vector<int>> myVector,int n);   //      M   !
bool significantNumber(int usrNumber);              // https://pl.spoj.com/problems/PZPI3/
std::set<int> dividers(int n);                      //
float properDividersAverage(std::set<int> x);       //
std::vector<int> mainSigNums                        //
    (std::vector<std::vector<int>> data);           //
bool testMainSigNums();                             //
std::vector<int> shift(int x,std::vector<int> input);   //  https://pl.spoj.com/problems/PP0602D/
void totolotek();
void fibDictionary();
int fibonacci(int n);
int searchMap(std::map<int,int> in,int userX);
void lustro();
std::vector<std::string> readUntilWordStopToVector();
std::string revStr(std::string x);
std::vector<std::string> rightAlignment(std::vector<std::string> x);
std::string addSpaces(int n,std::string s);
void withoutDivBy4noDivBy16(int minN, int maxN);
std::map<int,int> takeFromUser();                       // finalConvert
std::vector<int> verifyBase(std::map<int,int> x);       // finalConvert
std::vector<int> calculateBase2(int n);                 // finalConvert
std::vector<int> calculateBase4(int n);                 // finalConvert
std::vector<int> calculateBase8(int n);                 // finalConvert
std::vector<int> fillZero8(std::vector<int> x);         // finalConvert
std::vector<int> fillZero4(std::vector<int> x);         // finalConvert
void finalConvert();
void deadline(std::string file);
std::stack<int> fillStack(int sSize, int from, int to);
void revStack(std::stack<int> x);
void randomNumbersBoost(int howMany, int from, int to);
void ExpertSystemsConclusion(std::string path);

int main(){

    return 0;
}

void ExpertSystemsConclusion(std::string path){

}

void randomNumbersBoost(int howMany, int from, int to){
    boost::random::mt19937 x;
    boost::random::uniform_int_distribution<> rand(from,to);

    for(int i=0,num=0; i<howMany; ++i){
        num = rand(x);
        std::cout << num << " ";
    }
}

std::stack<int> fillStack(int sSize, int from, int to){
    std::stack<int> sRet;
    srand(time(NULL));
    int num = 0;

    for(int i=0; i<sSize; ++i){
        num = std::rand()%(to-from+1)+from;
        sRet.push(num);
    }

    return sRet;
}

void revStack(std::stack<int> x){
    std::stack<int> y;
    std::stack<int> z;
    int i = 1;

    while(!(x.empty())){
        std::cout << i << ". " << x.top() << std::endl;
        y.push(x.top());
        x.pop();
        ++i;
    }

    std::cout << std::endl;
    i = 1;

    while(!(y.empty())){
        std::cout << i << ". " << y.top() << std::endl;
        x.push(y.top());
        y.pop();
        ++i;
    }
}

void deadline(std::string file){
    std::ifstream myfile(file);
    std::string line = "";
    std::map<char,int> letters;
    std::multimap<int,char,std::greater<int>> sorted;
    std::map<int,char>::iterator q;
    std::map<char,int>::iterator p;
    char c;

    while(getline(myfile,line)){
        for(int i=0; i<line.size(); ++i){
            c = line.at(i);
            if((c >= 'A') && (c <= 'Z'))
                c += 32;
            if((c >= 'a') && (c <= 'z')){
                letters[c]++;
            }
        }
    }

    for(p = letters.begin(); p != letters.end(); ++p)
        sorted.insert(std::pair<int,char>(p->second,p->first));

    for(q = sorted.begin(); q != sorted.end(); ++q)
        std::cout << q->first << " " << q->second << std::endl;

}

void finalConvert(){
    std::vector<int> nums = verifyBase(takeFromUser());

    std::cout << std::endl;
    for(auto p : nums)
        std::cout << p;
    std::cout << std::endl;
}

std::vector<int> calculateBase4(int n){
    std::vector<int> x = calculateBase2(n);
    std::vector<int> out,ret;
    std::vector<int>::iterator z;
    int d = 0;

    x = fillZero4(x);

    for(int i=(x.size()-1); i>0;){
        if((x.at(i)) == 1)
            d += 1;
        i -= 1;

        if((x.at(i)) == 1)
            d += 2;
        i -= 1;

        out.push_back(d);

        d = 0;
    }

    for(int i=(out.size()-1); i>-1; --i)
        ret.push_back(out.at(i));

    return ret;
}

std::vector<int> calculateBase8(int n){
    std::vector<int> x = calculateBase2(n);
    std::vector<int> z,ret;
    int sum = 0;

    x = fillZero8(x);

    for(int i=(x.size()-1); i>0;){
        if(x.at(i) == 1)
            sum += 1;
        i--;

        if(x.at(i) == 1)
            sum += 2;
        i--;

        if(x.at(i) == 1)
            sum += 4;
        i--;

        z.push_back(sum);

        sum = 0;
    }

    for(int i=(z.size()-1); i>-1; --i)
        ret.push_back(z.at(i));

    return ret;
}

std::vector<int> calculateBase2(int n){
    int x = n;
    int q, w, i;
    std::vector<int> bin, binN;

    for(; x > 0;){
        for(i=1; ; i=i*2)
            if(i > x)
                break;
        bin.push_back(i/2);
        x = x - i/2;
    }

    for(w=0,q=bin.at(w); w != bin.size(); q=(q/2)){
        if((bin.at(w) == q) || (w == 0)){
            w += 1;
            binN.push_back(1);
        }
        else
            binN.push_back(0);
    }

    if((bin.at(bin.size()-1)) != 1 )
        for(int v = (bin.at(bin.size()-1)); v>1; v=v/2)
            binN.push_back(0);

    return binN;
}

std::vector<int> fillZero4(std::vector<int> x){
    std::vector<int> y,retV;
    std::string s = "";
    int xSize = x.size();

    if((xSize % 2) != 0){
        int mod = 2 - (xSize % 2);

        for(int i=0; i<mod; ++i)
            s += "0";
    }

    for(auto p : x)
        s += p;

    for(int i=0; i<s.length(); ++i)
        retV.push_back(s.at(i));

    return retV;
}

std::vector<int> fillZero8(std::vector<int> x){
    std::vector<int> y,retV;
    std::string s = "";
    int xSize = x.size();

    if((xSize % 3) != 0){
        int mod = 3 - (xSize % 3);

        for(int i=0; i<mod; ++i)
            s += "0";
    }

    for(auto p : x)
        s += p;

    for(int i=0; i<s.length(); ++i)
        retV.push_back(s.at(i));

    return retV;
}

std::vector<int> verifyBase(std::map<int,int> x){
    std::map<int,int>::iterator it = x.begin();
    std::vector<int> retX;
    int base = it->second;
    int num = it->first;

    if(base == 2)
        retX = calculateBase2(num);
    else if(base == 4)
        retX = calculateBase4(num);
    else if(base == 8)
        retX = calculateBase8(num);
    else
        exit(0);

    return retX;
}

std::map<int,int> takeFromUser(){
    std::string numberS = "", baseS = "";
    int number = 0, base = 0;
    std::map<int,int> retMap;

    try{
        std::cout << "Enter a number: ";
        std::cin >> numberS;
        number = boost::lexical_cast<int>(numberS);
    }catch( ... ){
        std::cout << "Wrong number! Try again.\n";
        exit(0);
    }

    try{
        std::cout << "Enter base (2, 4 or 8): ";
        std::cin >> baseS;
        base = boost::lexical_cast<int>(baseS);
        if((base != 2) && (base != 4) && (base != 8))
            throw "Wrong base! Enter 2, 4 or 8.\n";
    }catch(const char *x){
        std::cout << x;
        exit(0);
    }catch( ... ){
        std::cout << "Wrong base! Try again.\n";
        exit(0);
    }

    retMap.insert(std::pair<int,int>(number,base));

    return retMap;
}

void withoutDivBy4noDivBy16(int minN, int maxN){
    std::vector<int> x;
    for(int i = minN; i <= maxN; ++i){
        if(((i % 4) == 0) && ((i % 16) != 0))
            continue;
        else
            x.push_back(i);
    }

    for(auto n : x)
        std::cout << n << "\n";
}

void lustro(){
    std::vector<std::string> input = readUntilWordStopToVector();
    std::vector<std::string> output;
    std::vector<std::string>::iterator it;
    std::string s = "";

    for(it = input.end(); it >= input.begin(); --it){
        s = revStr(*it);
        output.push_back(s);
    }

    output = rightAlignment(output);

    for(auto x : output)
        std::cout << x << "\n";
}

std::vector<std::string> rightAlignment(std::vector<std::string> x){
    std::vector<std::string> out;
    int maxLen = x.at(0).length(), cur = 0;
    std::string s = "";

    for(auto n : x)
        if(n.length() > maxLen)
            maxLen = n.length();

    for(auto n : x){
        if(n.length() < maxLen){
            cur = maxLen - n.length();
            s = addSpaces(cur,n);
            out.push_back(s);
        }
        else
            out.push_back(n);
    }

    return out;
}

std::string addSpaces(int n,std::string s){
    std::string newS = "";
    for(int i=0; i<n; ++i){
        newS += " ";
    }
    newS += s;
    return newS;
}

std::string revStr(std::string x){
    std::string out = "";
    int i;
    for(i=(x.length()-1); i>=0; --i)
        out += x.at(i);
    return out;
}

std::vector<std::string> readUntilWordStopToVector(){
    std::vector<std::string> lines;
    std::string s;

    while(getline(std::cin,s)){
        if(s == "stop")
            break;
        lines.push_back(s);
    }
    return lines;
}

int searchMap(std::map<int,int> in, int userX){
    std::map<int,int>::iterator it = in.begin();
    for(; it!=in.end(); ++it)
        if((it->first) == userX)
            return it->second;
    return -1;
}

void fibDictionary(){
    int userN, score;
    std::map<int,int> fibNumbers;

    do{
        std::cout << "Jaka liczba wyrazow ciagu fibonacciego: ";
        std::cin >> userN;

        score = searchMap(fibNumbers,userN);

        if(score == -1){
            score = fibonacci(userN);
            fibNumbers.insert(std::pair<int,int>(userN,score));
        }

        std::cout << score << std::endl << std::endl;

    }while(userN != -1);
}

int fibonacci(int n){
    return n>1 ? fibonacci(n-1)+fibonacci(n-2) : 1;
}

void totolotek(){
    srand(time(NULL));
    int randNumber;
    std::set<int> numbers;

    for(; numbers.size()!=6; )
        numbers.insert(std::rand()%(49-1+1)+1);

    for(auto x : numbers)
        std::cout << x << " ";
}

std::vector<int> shift(int x,std::vector<int> input){
    std::vector<int> output;
    int i,j;

    for(i=0; i<x; ++i){
        input.push_back(input.at(i));
    }
    for(i=x; i<input.size(); ++i){
        output.push_back(input.at(i));
    }

    return output;
}

bool testMainSigNums(){
    std::vector<int> endV;
    std::vector<std::vector<int>> myVec{{4,6},{1,3}};

    endV = mainSigNums(myVec);

    std::cout << std::boolalpha;

    if((endV[0]==1) && (endV[1]==0))
        return true;
    return false;
}

std::vector<int> mainSigNums(std::vector<std::vector<int>> data){
    std::vector<int> score;
    int quan=0;

    for(int i=0; i<data.size(); ++i){
        for(int j=data[i][0]; j<=data[i][1]; ++j){
            if(significantNumber(j)){
                quan += 1;
            }
        }
        score.push_back(quan);
        quan = 0;
    }
    return score;
}

bool significantNumber(int usrNumber){
    float average = properDividersAverage(dividers(usrNumber));
    float sqrtNum = sqrt(usrNumber);
    if((average <= sqrtNum)&&(average!=0))
        return true;
    return false;
}

float properDividersAverage(std::set<int> x){
    float sum=0,quantity=0;
    float ret = 0;
    std::set<int>::iterator it;
    for(it=x.begin(); it!=x.end(); ++it){
        sum += *it;
        quantity += 1;
    }
    ret = sum/quantity;
    return ret;
}

std::set<int> dividers(int n){
    std::set<int> retSet;
    std::set<int>::iterator itRetSet = retSet.begin();

    for(int i=(n-1); i>1; --i)
        if(n%i == 0)
            retSet.insert(itRetSet,i);

    if(retSet.empty())
        retSet.insert(retSet.begin(),0);
    return retSet;
}

int searchOnes(std::vector<std::vector<int>> myVector, int n){
    int odl=0,index=-1;
    for(int i=0; i<myVector.size(); ++i){
        for(int j=0; j<myVector[i].size(); ++j){
            if(myVector[i][j]==1)
                odl += 1;
            if((j+1)==(myVector[i].size()))
                if(odl==n)
                    index = i;
        }
        odl = 0;
    }
    return index;
}

int sumvect(std::vector<int> myVector){
    int sum = 0;
    for(int j=0; j<myVector.size(); ++j){
        sum += myVector[j];
    }
    return sum;
}

void showDvect(std::vector<std::vector<int>> myVector){
    for(int i=0; i<myVector.size(); ++i){
        for(int j=0; j<myVector[i].size(); ++j){
            std::cout << myVector[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void testMergeV(){
    std::vector<std::vector<int>> v1{{2,1,1},{3,5}};
    std::vector<std::vector<int>> v2{{8,8,6},{1,1,1,1}};
    std::vector<std::vector<int>> vRet = mergeV(v1,v2);
    for(int i=0; i<vRet.size(); ++i){
        for(int j=0; j<vRet[i].size(); ++j){
            std::cout << vRet[i][j] << " ";
        }
        std::cout << "\n";
    }
}

std::vector<std::vector<int>> mergeV
(std::vector<std::vector<int>> myV1,std::vector<std::vector<int>> myV2){
    int sizeMyV1 = myV1.size();
    int sizeMyV2 = myV2.size();
    int totalSize = sizeMyV1+sizeMyV2;
    std::vector<std::vector<int>> myVret(totalSize);
    int p=0;

    for(int i=0; i<myV1.size(); ++i,p++){
        for(int j=0; j<myV1[i].size(); ++j){
            myVret[p].push_back(myV1[i][j]);
        }
    }
    for(int i=0; i<myV2.size(); ++i,p++){
        for(int j=0; j<myV2[i].size(); ++j){
            myVret[p].push_back(myV2[i][j]);
        }
    }
    return myVret;
}

std::vector<std::vector<int>> ptsumy(int n){
    std::vector<std::vector<int>> ready(n*2);
    int r2c=0,coun=0;
    std::vector<std::vector<int>> newV(n*2);
    int x,i,j,dif,qOfSc=0,crash=0,go=0;

    for(x=(n-1),i=1; x>0; x-=1,i*=2,qOfSc+=1){
        j = i;
        while(j>0){
            dif = n-x;
            if(j==1){
                ready[qOfSc].push_back(dif);
                ready[qOfSc].push_back(n-dif);
            }else{
                newV = ptsumy(dif);
                newV[n-dif-x].push_back(n-dif);
                ready = mergeV(ready,newV);
            }
            j-=1;
        }
    }

    if(n==1)
        ready[0].push_back(1);
    else
        ready[qOfSc].push_back(n);

    std::cout << ready[0][1];
//    for(int i=0; i<ready.size(); ++i)
//        if((ready[i][0]>=48)&&(ready[i][0]<=57))
//            coun += 1;

//    std::vector<std::vector<int>> ready2(coun+1);

//    for(int i=0; i<ready.size(); ++i){
//        if(sumvect(ready[i])!=n){
//            ready[i].erase(ready[i].begin(),ready[i].end());
//        }
//        if((ready[i][0]>=48)&&(ready[i][0]>=57)){
//            ready2[r2c].swap(ready[i]);
//            r2c += 1;
//        }
//
//    }

//    crash = ready.size();
//    while(((sumvect(ready[go]))!=n)&&(go<crash)){
//        dif = n-(sumvect(ready[go]));
//        if(searchOnes(ready,n)!=(-1))
//            ready[go].push_back(dif);
//        else{
//            for(int z=0; z<n; ++z)
//                ready[n*2-1].push_back(1);
//        }
//
//
//        go += 1;
//    }

    return ready;
}

bool poprawnaNazwaPlikuDOStest(){
    if(poprawnaNazwaPlikuDOS("config.sys") != true) return false;
    if(poprawnaNazwaPlikuDOS("autorun") != true) return false;
    if(poprawnaNazwaPlikuDOS("autoexekuniek") != false) return false;
    if(poprawnaNazwaPlikuDOS("config.") != false) return false;
    if(poprawnaNazwaPlikuDOS("alama.kota") != false) return false;
    return true;
}

bool poprawnaNazwaPlikuDOS(char s[]){
    bool afterDot = false;
    bool afterDot2 = false;
    int counter1 = 0;
    int counter2 = 0;
    int dotCounter = 0;

    for(;*s;++s){
        if(*s == '.'){
            afterDot = true;
            dotCounter += 1;
        }
        if(afterDot2){
            counter2 += 1;
        }
        if(afterDot){
            if(counter1>8)
                return false;
            afterDot2 = true;
            afterDot = false;
            if(dotCounter > 1)
                return false;
        }
        if(afterDot2==false){
            counter1 += 1;
        }
        if(counter2 > 3){
            return false;
        }
        if(counter1 > 8)
            return false;
    }
    if((counter2 == 0)&&(afterDot2))
        return false;
    return true;
}

void zmienKazdaLitereNaPozycjiN(char s[], int n){
    int signCounter = 0;
    char letter;
    std::string x;

    for( ; *s; ++s){
        if(*s == ' ')
            signCounter = 0;
        else
            signCounter += 1;

        if(signCounter == n){
            letter = *s;
            letter -= 32;
            x += letter;
            continue;
        }
        x += *s;
    }

    std::cout << x;
}

void boostOptional(){
    A a;

    boost::optional<A> opA0;
    boost::optional<A> opA(a);

    std::cout << opA->name << " " << opA->value;
}

void boostAnyStack(){
    std::stack<boost::any> test;

    std::string str1 = "Jakub";
    test.push(str1);
    test.push(10);
    test.push('A');
    test.push(true);

    try
    {
        if((test.top()).type()==typeid(std::string))
            std::cout << boost::any_cast<std::string>(test.top());
        else if((test.top()).type()==typeid(int))
            std::cout << boost::any_cast<int>(test.top());
        else if((test.top()).type()==typeid(char))
            std::cout << boost::any_cast<char>(test.top());
        else
            throw "I don't know a type!";
    }
    catch(boost::bad_any_cast &exp)
    {
        std::cerr << exp.what();
    }
    catch(const char* exp2)
    {
        std::cout << exp2;
    }
}

void boostAny(){
    boost::any x,y,z;
    x = std::string("String");
    y = 3.14;

    try{
        std::cout << boost::any_cast<std::string>(x) << std::endl <<
                    boost::any_cast<int>(y) << std::endl;
    }catch(boost::bad_any_cast &e){std::cerr << "EXCEPTION! " << e.what();}
}

void boostVariant(){
    boost::variant<int,char> u1,u2;
    u1=1;
    u2='A';

    boost::apply_visitor(DoubleX(),u1);
    boost::apply_visitor(DoubleX(),u2);
}

void upTest(){
    typedef std::deque<std::unique_ptr<D>> structDeques;
    structDeques firstDeq;
    structDeques::iterator it = firstDeq.begin();

    firstDeq.insert(it,std::make_unique<D>(1,'A'));
    std::advance(it,1);
    firstDeq.insert(it,std::make_unique<D>(2,'B'));

    for(auto &p : firstDeq){
        p->meth();
        std::cout << std::endl;
    }
}

void D::meth(){
    std::cout << "Method meth!\n";
}

void tryCatchTest(){
    int x = 2, y = 5;
    try{
        if(x > 5) throw "xxx";
        if(y > 4) throw "yyy";
    }
    catch(const char* ex)  {std::cout << ex;}
    catch(const char* ex2) {std::cout << ex2;}
    catch(...)  {std::cout << "exp";}

}
bool IsTheNumberPalindrom(int number){
    std::string stringNumber = boost::lexical_cast<std::string>(number);
    int i,j;
    for(i=0,j=stringNumber.size()-1; i<j; ++i,--j){
        if(stringNumber.at(i)!=stringNumber.at(j))
            return false;
    }
    return true;
}

int armstrongNumbers(int number){
    std::string stringNumb = boost::lexical_cast<std::string>(number);
    int stringSize = stringNumb.size();
    int partOfNumb,retNumb=0,newNumb=1;

    for(int i=0; i<stringSize; ++i){
        try{
            partOfNumb = boost::lexical_cast<int>(stringNumb.at(i));
        }
        catch(...){
            std::cout << "";
        }
        for(int j=0; j<stringSize; ++j)
            newNumb *= partOfNumb;

        retNumb += newNumb;
        newNumb = 1;
    }
    return retNumb;
}

void ex29(){
    std::vector<int> range;
    std::vector<int>::iterator r;
    std::ostream_iterator<char> out{std::cout,""};

    boost::algorithm::iota_n(std::back_inserter(range),51,6);

    for(r = range.begin(); r != range.end(); ++r)
        std::cout << (char)(*r) << " ";
}

bool testGG(){
    if(gg("BGCGDGEGFGGGHGIGJGKG")!="abcdefghij") return false;
    if(gg("LGBGEHBGDHEHCHPGGGBG")!="katastrofa") return false;
    if(gg("PGCGPGKHPGHHJGDHLGPG")!="obozowisko") return false;
    return true;
}

std::string gg(std::string input){
    std::vector<char> first,second;
    std::string output;

    for(int i=0; i<input.size(); ++i){
        if(i % 2 == 0) first.push_back(input.at(i));
        if(i % 2 != 0) second.push_back(input.at(i));
    }

    for(int j=0; j<second.size(); ++j){
        if(second[j]=='G') output += first[j]+32-1;
        if(second[j]=='H') output += first[j]+32+15;
    }

    return output;
}

void conv(){
    int a = 5;
    std::string str = boost::lexical_cast<std::string>(a);
    WRT(str);
}

void myMap(){
    std::map<int,char> myMap;
    std::map<int,char>::iterator myMapIt = myMap.begin();
    char c='a';

    for(int i=0; i<10; ++i,++c,++myMapIt)
        myMap.insert(myMapIt,std::pair<int,char>(i,c));

    for(auto x : myMap)
        std::cout << x.first << " " << x.second << "\n";
}

void insertValueToList(){
    std::list<int> list1 = {5,2,4,6,2};
    std::list<int>::iterator it = list1.begin();
    advance(it,2);
    list1.insert(it,455555);

    for(auto x : list1)
        std::cout << x << " ";
}

void descriptionOfTxt(std::string path, std::string path2){
    std::vector<std::string> stringVec;
    std::vector<char> letters;
    std::vector<int> letterAmount;
    std::string partOfVec, fileLine, word;
    char c;
    bool contain=false;
    int xContain,maximum=-1,ind,sizeVec,sizeVec2=0;

    std::ifstream readStream(path,std::ios_base::in);
    std::ofstream writeStream(path2,std::ios_base::out | std::ios_base::trunc);

    try{
        if(readStream.is_open()){
            while(readStream.good()){
                getline(readStream,fileLine);
                std::stringstream ss(fileLine);
                while(getline(ss,partOfVec,' ')){
                    stringVec.push_back(partOfVec);
                }
                for(int counter=0; counter<stringVec.size(); ++counter){
                    word = stringVec[counter];
                    for(int throughWord=0; throughWord<word.size(); ++throughWord){
                        if((word.at(throughWord)>=97)&&(word.at(throughWord)<=122)){
                            c = word.at(throughWord);
                        }else if(((word.at(throughWord)>=65)&&
                                  (word.at(throughWord)<=90))){
                            c = (char)(((int)(word.at(throughWord)))+32);
                        }else continue;

                        for(int x=0; x<letters.size(); ++x){
                            if(c == letters[x]){
                                contain = true;
                                xContain = x;
                            }
                        }
                        if(contain) letterAmount[xContain] += 1;
                        else{
                            letters.push_back(c);
                            letterAmount.push_back(1);
                        }
                       contain = false;
                    }
                    word="";
                }
                if(writeStream.is_open()){
                    sizeVec = letterAmount.size()+2;
                        letterAmount.push_back(-1);
                        letters.push_back('^');


                    for(int i=0; sizeVec>i; ++i){
                        for(int i=0; letterAmount[i]!=-1; ++i){
                            if(maximum < letterAmount[i]){
                                maximum = letterAmount[i];
                                ind = i;
                            }
                        }

                        c = letters[ind];
                        letterAmount.push_back(maximum);
                        letters.push_back(c);

                        letterAmount[ind]=0;
                        letters[ind]='^';

                        sizeVec2 += 1;
                        maximum = -1;
                    }

                    writeStream << fileLine;
                    writeStream << "\nQuantity of words: ";
                    writeStream << stringVec.size();
                    writeStream << "\n";
                    writeStream << "Sign stats: ";
                    writeStream << "\n";

                    for(int x=0; x<letters.size(); ++x)
                        if(letters[x]!='^')
                            writeStream << letters[x] << " " << letterAmount[x] << "\n";

                    writeStream << "\n";
                }
                letters.clear();
                letterAmount.clear();
                stringVec.clear();
                fileLine="";
                partOfVec="";
            }
            readStream.close();
            writeStream.close();
        }else
            throw "No file in directory";
    }
    catch(const char *exp) {std::cout << exp;}


    std::ifstream readStream2(path2,std::ios_base::in);

    try{
        if(readStream2.is_open()){
            while(readStream2.good()){
                getline(readStream2,fileLine);
                std::cout << fileLine << "\n";
            }
            readStream2.close();
        }else
            throw "No file in directory";
    }catch(const char *exp) {std::cout << exp;}
}

void writeToFile(std::string path){
    std::ofstream write;
    std::string fileLine="";

    write.open(path, std::ios_base::out | std::ios_base::app);

    if(write.is_open()){
        write << "New file text";
        write.close();
    }
}

void readFromFile(std::string path){
    std::ifstream read;
    std::string fileLine="";

    read.open(path, std::ios_base::in);

    try{
        if(read.is_open()){
            while(read.good()){
                getline(read,fileLine);
                std::cout << fileLine << "\n";
            }
            read.close();
        }
        else
            throw "There is no such file!";
        }
    catch(const char *ex) {std::cout << ex;}
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

