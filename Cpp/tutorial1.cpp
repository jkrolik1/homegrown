#include <cstdlib>
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
#include <unordered_map>
#include <windows.h>            // sound
#include <mmsystem.h>           // sound
#include <locale>
#include <typeinfo>

#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>           // !
#include <boost/random.hpp>                     // !!
#include <boost/logic/tribool.hpp>              // !!!
#include <boost/unordered_set.hpp>              // !!
#include <boost/foreach.hpp>                    // !!
#include <boost/tuple/tuple.hpp>                // !!
#include <regex>                                // !!
#include <boost/scoped_ptr.hpp>                 // !
#include <boost/scoped_array.hpp>               // !
#include <boost/shared_ptr.hpp>                 // !
#include <boost/ptr_container/ptr_vector.hpp>   // !
#include <boost/algorithm/minmax.hpp>           // !
#include <boost/algorithm/minmax_element.hpp>   // !
#include <boost/bimap.hpp>                      // !
#include <boost/heap/priority_queue.hpp>        // !
#include <boost/heap/binomial_heap.hpp>         // !
#include <boost/heap/fibonacci_heap.hpp>        // !
#include <boost/array.hpp>                      // !
#include <boost/swap.hpp>                       // !
#include <boost/scope_exit.hpp>                 // *
#include <boost/algorithm/string.hpp>           // *
#include <boost/algorithm/string/regex.hpp>     // *
#include <boost/format.hpp>                     // *
#include <boost/tuple/tuple_io.hpp>             // *
#include <boost/ref.hpp>                        // *
#include <boost/tuple/tuple_comparison.hpp>     // *
#include <boost/any.hpp>                        // *
#include <boost/tokenizer.hpp>                  // &
#include <boost/optional.hpp>                   // &
#include <boost/variant.hpp>                    // &
#include <boost/compressed_pair.hpp>            // &
#include <boost/dynamic_bitset.hpp>             // &
#include <boost/multi_index_container.hpp>      // )
#include <boost/multi_index/hashed_index.hpp>   // )
#include <boost/multi_index/member.hpp>         // )
#include <boost/unordered_map.hpp>              // )
#include <boost/circular_buffer.hpp>            // )
#include <boost/assign.hpp>                     // )
#include <boost/current_function.hpp>           // )
#include <boost/utility/binary.hpp>             // )
#include <boost/next_prior.hpp>                 // )
#include <boost/uuid/uuid.hpp>                  // )
#include <boost/uuid/uuid_generators.hpp>       // )
#include <boost/uuid/uuid_io.hpp>               // )
#include <boost/accumulators/accumulators.hpp>  // )
#include <boost/accumulators/statistics.hpp>    // )
#include <boost/intrusive/list.hpp>             // <
#include <boost/multi_array.hpp>                // <
#include <boost/operators.hpp>                  // <
#include <boost/numeric/conversion/cast.hpp>    // <
#include <boost/algorithm/cxx11/one_of.hpp>     // <
#include <boost/algorithm/cxx11/iota.hpp>       // <
#include <boost/algorithm/cxx11/is_sorted.hpp>  // <
#include <boost/algorithm/cxx11/copy_if.hpp>    // <
#include <boost/range/algorithm.hpp>            // <
#include <boost/range/numeric.hpp>              // <

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
boost::tuple<std::map<int,boost::unordered_set<char>>,      // forward conclusion
    std::vector<char>>                                      // forward conclusion
    loadData(std::string path);                             // forward conclusion
int regNumAnalize(std::string x);                           // forward conclusion
void analizeData(boost::tuple<std::map<int,                 // forward conclusion
    boost::unordered_set<char>>, std::vector<char>> x);     // forward conclusion
boost::logic::tribool inFacts(char b,                       // forward conclusion
    std::vector<char> facts);                               // forward conclusion
void showFacts(std::vector<char> x);                        // forward conclusion
void launchForwardConclusion();                             // RUN forward conclusion
void timer1min();               // learning method
void soundLearn();              // learning method
void soundBreak();              // learning method
void learningMethod();          // learning method
std::string takeExpresion(std::string path);                            // tautology
boost::unordered_set<char> vars(std::string expresion);                 // tautology
std::map<int,std::vector<int>> binary(boost::unordered_set<char> vars); // tautology
int myPow(int n, int x);                                                // tautology
std::vector<int> numberToBin(int num);                                  // tautology
std::map<char,std::vector<int>> makeFirstCols                           // tautology
    (std::map<int,std::vector<int>> binary,                             // tautology
     boost::unordered_set<char> vars);                                  // tautology
std::map<int,std::vector<int>> add0(std::map<int,std::vector<int>> x);  // tautology
void tautologyBegin();                                                  // tautology
std::string cutBrackets(std::string expresion);                         // tautology
boost::tuple<char,char,std::string>                                     // tautology
    takePart(std::string expresionWithoutBrackets);                     // tautology
void convertSecondaryFileToSearchFile                   // SWI MLP
    (std::string sourPath,std::string destPath);        // SWI MLP
std::vector<std::string> takeAttributes                 // SWI MLP
    (std::string line);                                 // SWI MLP
void ask(std::string question);                         // SWI MLP
std::list<std::string> separate(std::string q);         // SWI MLP
std::set<int> takeAns                                   // SWI MLP
    (std::string partOfQ, std::string searchFilePath);  // SWI MLP
std::vector<std::string> ob(std::string line);          // SWI MLP
std::vector<std::string> ob2(std::string line);         // SWI MLP
void printNumber(std::ostream &os, int i);
void TicTacToeRUN();                                        // TTT
std::string takeCircleField();                              // TTT
std::string takeCrossField();                               // TTT
int whoStartGame();                                         // TTT
int startGame(int player,std::map<int,char> board);         // TTT
void paintBoard(std::map<int,char> board,int player);       // TTT
boost::logic::tribool throughBoard                          // TTT
    (std::map<int,char> board, int usr);                    // TTT
std::map<int,char> fillMapEmptyValues();                    // TTT
void constructorsTest();
void valTypTest();
void staticAssertTest();
void randomTokenizer();
void problemCollatza();
int nwd(int a, int b);
void sumaSuma();
void stos();
void ex1();
void jpesel();
void shiftLeft();
void zliczanieLiter();
void gg2();
void PP0502B();
// -------------------------------------------------------------------------BOOST FUNCTIONS
void regexMatchString();                // regex
void regexMatchStringIterator();        // regex
void cmatch();                          // regex
void smatch();                          // regex
void regexSearch();                     // regex
void scopedPtr();                       // boost smart pointers
void scopedArray();                     // boost smart pointers
void sharedPtr();                       // boost smart pointers
void ptrVector();                       // ptr container
void lexicalCastTryCatch();             // lexical cast
void randomNumbersBoostTime();          // random time
void randomNumbersBoost                 // random no time
    (int howMany, int from, int to);
void minmaxBoost();                     // minmax
void minmaxBoost2();                    // minmax element
void foreach();                         // foreach, reverse foreach
void bimap();                           // bimap
void heap();                            // heap / priority queue / binomial heap
void bArray();                          // array
void bSwap();                           // swap
int *scopeExit();                       // scope exit
void stringBoostFunctions();            // string boost - to_upper_lower
void stringBoostFunctions2();           // string boost - repleace
void stringBoostFunctions3();           // string boost - trim
void stringBoostFunctions4();           // string boost - bool functions
void findingInString();                 // string boost - find
void mergeVectBoost();                  // string boost - join
void boostSTRINGSTREAM();               // string boost - stringstream
void strRegex();                        // string boost - regex
void formatTest();                      // format
void tupleRef();                        // tuple, ref ,tuple_io, tuple_comparision
void anyB();                            // any, typeinfo
void tokenizerB();                      // tokenizer
boost::optional<int> ern();             // optional: 1 case     ternary
void RUNern();                          // optional: 1 case
boost::optional<int> ern2();            // optional: 2 case     optional constructor
void RUNern2();                         // optional: 2 case
boost::optional<int> ern3();            // optional: 3 case     make_optional
void RUNern3();                         // optional: 3 case
void variantIntroduction();             // boost variant
void variantAV();                       // boost variant    apply_visitor
void boostPairLikeSTDpair();            // compressed pair
void dynamicBitset();                   // dynamic_bitset
void multiIndex();
void uordMap();
void circularBuffer();
void assignB();
void currentFinction();
void utilityBinary();
void it();
void uuid();
void acu();
void intr();
void multiArr();
void op();
void numCast();
void algs();

// -----------------------------------mainx
// -----------------------------------
// -----------------------------------
// -----------------------------------
// -----------------------------------

int main(){
    PP0502B();
    return 0;
}

void algs(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};


    std::cout << boost::algorithm::one_of
        (std::begin(vect),std::end(vect),[](int x){
            return x == 50;
        }) << '\n';                                 // dokladnie jedna 50


    std::cout << boost::algorithm::one_of_equal
        (std::begin(vect),std::end(vect),5) << '\n';    // value


    std::vector<int> vect2;
    boost::algorithm::iota_n
        (std::inserter(vect2,vect2.begin()),10,5);
    WRT(boost::algorithm::is_increasing(vect2));
    WRT(boost::algorithm::is_decreasing(vect2));
    for(const int &y : vect2)
        std::cout << y << ' ';


    WRT('\n' << boost::count(vect2,0));
    WRT(boost::accumulate(vect2,0));
    boost::random_shuffle(vect2);
}

void numCast(){
    try{
        int i = 0x150;      // 1*16^2 + 5*16*1
        int i2 = -0x250;

        short s = boost::numeric_cast<short>(i);
        short s2 = boost::numeric_cast<short>(i2);

        WRT(s);
        WRT(s2);
    }
    catch(boost::numeric::bad_numeric_cast &e){
        std::cerr << e.what() << '1';
    }
    catch(boost::numeric::negative_overflow &f){
        std::cerr << f.what() << '2';
    }
}

void op(){
    std::unique_ptr<bank> b1 = std::make_unique<bank>();
    std::unique_ptr<bank> b2 = std::make_unique<bank>("bbb");

    std::cout << std::boolalpha << (b1 > b2) << '\n';   // zadeklarowany tylko < !!!!!

    // https://www.boost.org/doc/libs/1_73_0/libs/utility/operators.htm
}

void multiArr(){
    boost::multi_array<char,1> a(boost::extents[6]);
    std::string boostStr = "Boost";
    int i = 0;

    BOOST_FOREACH(decltype(boostStr)::value_type &x, boostStr){
        a[i] = x;
        ++i;
    }
    a[i] = '\0';

    WRT(a.origin());


    // ---------------------------------------------


    boost::multi_array<char,2> b{boost::extents[2][6]};

    typedef boost::multi_array<char,2>::array_view<1>::type array_view;
    typedef boost::multi_array_types::index_range range;

    array_view view = b[boost::indices[0][range{0,5}]];

    std::memcpy(view.origin(),"Boost",6);

    boost::multi_array<char,2>::reference subarray = b[1];
    std::memcpy(subarray.origin(),"C++",4);

    WRT("");
    WRT(view.origin());
    WRT(subarray.origin());


    // ---------------------------------------------


    char c[8] = {'1','2','3','\0',
                '4','5','6','\0'};

    boost::multi_array_ref<char,2> t{c, boost::extents[2][4]};

    boost::multi_array<char, 2>::reference sub1 = t[0];
    WRT(sub1.origin());

    boost::multi_array<char, 2>::reference sub2 = t[1];
    WRT(sub2.origin());
}

void intr(){
    typedef boost::intrusive::list<house> house_list;
    house_list houses;

    house h1("Warszawska",10);
    std::unique_ptr<house> h2 = std::make_unique<house>("Sopocka",13);
    house *h3 = new house("Katowicka",80);

    houses.push_back(h1);
    houses.push_back(*h2);
    houses.push_back(*h3);

    houses.pop_back_and_dispose([](house *h){delete h; h=nullptr;}); // ???

    h1.street = "Gdanska";

    for(const house &x : houses)
        std::cout << x.street << ' ' << x.number << '\n';
}

void acu(){
    boost::accumulators::accumulator_set
        <int,boost::accumulators::features
            <
             boost::accumulators::tag::count,
             boost::accumulators::tag::mean,
             boost::accumulators::tag::variance
            >
        > acc;

    acc(4);
    acc(-6);
    acc(9);

    WRT(boost::accumulators::count(acc));       // 3
    WRT(boost::accumulators::mean(acc));        // srednia
    WRT(boost::accumulators::variance(acc));    // rozbieznosc

    // ----------------

    boost::accumulators::accumulator_set
        <
         double,
         boost::accumulators::features
            <
             boost::accumulators::tag::mean,
             boost::accumulators::tag::variance
            >,
         int
        > acc2;

        acc2(8, boost::accumulators::weight = 1);
        acc2(80, boost::accumulators::weight = 6);
        acc2(18, boost::accumulators::weight = 18);

        WRT(boost::accumulators::mean(acc2));
        WRT(boost::accumulators::variance(acc2));
}

void uuid(){
    boost::uuids::random_generator gen;
    boost::uuids::uuid id = gen();
    WRT(id);
    WRT(id.size());     // 16 bytes
    WRT(id.is_nil());   // The nil UUID is 00000000-0000-0000-0000-000000000000
    WRT(id.variant());
    WRT(id.version());
    WRT("");

    // ----------------

    boost::uuids::uuid xyz;

    boost::uuids::nil_generator nil_gen;
    xyz = nil_gen();
    WRT(xyz);
    WRT(xyz.is_nil());
}

void it(){
    std::vector<char> x;
    boost::assign::push_back(x)('a')('z')('b')('y');

    auto it = std::find(x.begin(),x.end(),'b');
    auto prior = boost::prior(it,2);        // a
    WRT(*prior);
    auto next = boost::next(it);            // y
    WRT(*next);
}

void utilityBinary(){
    int i = BOOST_BINARY(1011);
    std::cout << i;             // 11
}

void currentFinction(){
    const char *name = BOOST_CURRENT_FUNCTION;
    std::cout << name;              //  void currentFinction
}

void assignB(){
    std::vector<int> v;
    boost::assign::push_back(v)(1)(2)(3);

    std::list<int> l;
    boost::assign::push_front(l)(4)(5)(6)(7);
}

void circularBuffer(){
    #define overW

    typedef boost::circular_buffer<int> cirBuf;
    cirBuf cB(3);

    WRT(cB.capacity());     // 3
    WRT(cB.size());         // 0

    cB.push_back(0);
    cB.push_back(1);
    cB.push_back(2);


    WRT(cB.capacity());     // 3
    WRT(cB.size());         // 3

    #ifndef overW
        cB.push_back(7);
        cB.push_back(5);
        cB.push_back(4);
    #endif

    std::cout << "\n";

    for(auto x : cB)
        WRT(x);             // 7 5 4


    std::cout << std::boolalpha << cB.is_linearized();      // false for ovewriten
}

void uordMap(){
    typedef boost::unordered_map<int,char> um;
    um first;

    first.insert(std::make_pair(1,'a'));
    first.emplace(2,'b');
    first.emplace(3,'e');
    first.insert(std::make_pair(10,'a'));

    BOOST_FOREACH(decltype(first)::value_type &x, first){
        std::cout << x.first;
    }

    // 10321
}

void multiIndex(){
    typedef boost::multi_index::multi_index_container
            <plane, boost::multi_index::indexed_by
                <boost::multi_index::hashed_non_unique
                    <boost::multi_index::member
                        <plane, std::string, &plane::name>
                    >,
                 boost::multi_index::hashed_non_unique
                    <boost::multi_index::member
                        <plane, int, &plane::number>
                    >
                >
            >   plane_multi;


    // vector + set


    plane_multi planes;

    planes.insert({"x",1});
    planes.insert({"y",2});
    planes.insert({"z",3});


    // 1

    std::cout << planes.count("a") << std::endl;        // 0

    const plane_multi::nth_index<1>::type &number_index = planes.get<1>();
    std::cout << number_index.count(3);                 // 1

    // 2

    auto &number_index_2 = planes.get<0>();             // .first
    std::cout << std::endl << number_index_2.count("x");// 1
}

void dynamicBitset(){
    boost::dynamic_bitset<> db{8,65};
                            //   | - wartosc binarna
                            // | - ilosc bitow ( _ _ _ )

    std::cout << db << std::endl;       // 01000001

    db.push_back(true);                 // stores only 1,0,true,false
    db.push_back(1);
    db.push_back(1);                    // adding three ones at the front

    std::cout << db << std::endl;       // 11101000001


    std::cout.setf(std::ios::boolalpha);    // all the time below!!!

    std::cout << db.size() << std::endl;    // amount of bits
    std::cout << db.count() << std::endl;   // amount of ones

    std::cout << db.any() << std::endl;     // true
    std::cout << db.none() << std::endl;    // false

    std::cout << db[0].flip() << std::endl;
                                // false - value after changing
    std::cout << db << std::endl;       // 11101000000

    db[1] = 0;
    std::cout << db << std::endl;       // 11101000000
    std::cout << ~db[1] << std::endl;   // return negation of value at [x]
    std::cout << db << std::endl;       // 11101000000
}

void boostPairLikeSTDpair(){
    std::pair<int,std::set<testStruct>> pair1;
    boost::compressed_pair<int,std::set<testStruct>> pair2;

    std::cout << sizeof(pair1) << ' ' << sizeof(pair2);
                // pair2 should be less
}

void variantAV(){
    boost::variant<double,char,std::string> var, var2;
    var = 2.56;
    boost::apply_visitor(out(),var);
    var = 'a';
    boost::apply_visitor(out(),var);
    var = "xyz";
    boost::apply_visitor(out(),var);

    var2 = 'p';
    boost::apply_visitor(out2(),var2);
}
template <typename X>
void out2::operator()(X c) const{std::cout << c << std::endl;}
void out::operator()(double x) const{std::cout << x << std::endl;}
void out::operator()(char x) const{std::cout << x << std::endl;}
void out::operator()(std::string x) const{std::cout << x << std::endl;}

void variantIntroduction(){
    boost::variant<double,bool> likeUnion, likeUnion2;
    likeUnion = 9.8;
    likeUnion = true;

    // ---------------------

    likeUnion2 = true;
    std::cout << boost::get<bool>(likeUnion2);
    likeUnion2 = 122.1;
    std::cout << boost::get<double>(likeUnion2);
}

boost::optional<int> ern3(){
    int y = std::rand();
    return boost::make_optional(y%2==0,y);
}

void RUNern3(){
    std::srand(static_cast<unsigned int>(std::time(0)));
    boost::optional<int> i = ern3();
    int p = boost::get_optional_value_or(i,987654321);
    std::cout << p;
}

boost::optional<int> ern2(){
    int i = std::rand();
    return boost::optional<int>(i%2 == 0, i);       // 1st param - condition
                                                    // 2st param - return value if 1st is good
}

void RUNern2(){
    std::srand(static_cast<unsigned int>(std::time(0)));
    boost::optional<int> i  = ern2();

    if(i.is_initialized())
        std::cout << i.get();
}

void RUNern(){
    boost::optional<int> i = ern();
    if(i)
        std::cout << *i;
}

boost::optional<int> ern(){
    std::time_t now = std::time(0);
    boost::random::mt19937 x(static_cast<uint32_t>(now));
    boost::random::uniform_int_distribution<> f(1,100);
    int h = f(x);
    std::cout << h << std::endl;

    return (h%2==0) ? h : boost::optional<int>();
}

void tokenizerB(){
    // separated by spaces, punctuation marks
    typedef boost::tokenizer<boost::char_separator<char>> tok;
    std::string s = "Jakub,Krolik";
    tok t1(s);
    for(tok::iterator it = t1.begin();          // INACZEJ ITERATOR NIZ ZWYKLE!!!
        it != t1.end();
        ++it)
            std::cout << *it << std::endl;      // Jakub
                                                // ,
                                                // Krolik
    // custom separator
    boost::char_separator<char> sep(" ");
    std::string s2 = "qwerty qwerta+";
    tok t2(s2,sep);                             // s2 MUSI BYÆ ZMIENNA
    for(const auto &x : t2)
        std::cout << x << std::endl;            // qwerty
                                                // qwerta+

    // more custom separators
    boost::char_separator<char> sep2(" ","+");
    tok t3(s2,sep2);
    for(const auto &x : t3)
        std::cout << x << std::endl;            // qwerty
                                                // qwerta
                                                // +
    // commas || CSV (COMMA SEPARATED VALUES) // ESCAPED_LIST_SEPARATOR
    // delete , and "
    typedef boost::tokenizer<boost::escaped_list_separator<char>> token;
    std::string h = "q,p,o";
    token p(h);
    for(const auto &l : p)
        std::cout << l << '\n';

    // individual || OFFSET_SEPARATOR
    typedef boost::tokenizer<boost::offset_separator> tokeniz;
    std::string m = "__--|-|--__";
    int offsets[] = {5,1,5};
    boost::offset_separator sep8(offsets,offsets+3);        // table size
    tokeniz u(m,sep8);
    for(const auto &v : u)
        std::cout << v << std::endl;
}

void anyB(){
    boost::any a;

    a = 1;
    std::cout << boost::any_cast<int>(a) << std::endl;
    a = std::string("qwerty");
    std::cout << boost::any_cast<std::string>(a) << std::endl;

    // -------------------
    WRT("");

    boost::any g = "poll";
    try{
        std::cout << boost::any_cast<std::string>(g);
    }catch(boost::bad_any_cast &e){
        std::cerr << e.what();
    }

    // -------------------
    WRT("");

    boost::any lo = 8;

    if(!lo.empty()){
        const std::type_info &ti = lo.type();
        std::cout << ti.name();
    }
}

void printNumber(std::ostream &os, int i){
    os << i << std::endl;
}

void tupleRef(){
    typedef boost::tuple<char,std::string,double,int> x;
    x first{'a',"aA",1.1,1};

    std::cout << first;                 // boost/tuple/tuple_io

    // --------------------------------------

    std::string d = "abc";
    std::cout << std::endl << boost::make_tuple(false,1,'a',boost::ref(d),1.98765);
    std::cout << std::endl;

    // --------------------------------------
    // boost/ref
    std::vector<int> v{1,2,3};
    std::for_each(v.begin(),v.end(),
        std::bind(printNumber,boost::ref(std::cout),std::placeholders::_1));

    // --------------------------------------

    x second{'b',"bB",2.2,2};       // OR - x second = booost::make_tuple('b',"bB",2.2,2)
    std::cout << std::endl << second.get<2>();
    std::cout << std::endl << boost::get<3>(second);

    x third = boost::make_tuple('b',"cC",2,2);
    third.get<1>() = "bB";
    // boost/tuple/tuple_comparision
    std::cout << std::endl << std::boolalpha << (second != third);

    // --------------------------------------

    char l = 's';
    std::string c = "po";
    double xz = 9.876;
    int y = 0;
    x fourth = boost::tie(l,c,xz,y);

    // --------------------------------------

    char* opo = "poiop";
    std::string opoy = "ptoiop";
    int *ptr = new int(10);

    typedef boost::tuple<char*, const std::string&, int&> q;
    q r(opo,boost::cref(opoy),*ptr);
    std::cout << std::endl << r;
}

void formatTest(){
    std::cout << boost::format{"%3%-%1%"} % 1 % 2 % 3 << '\n';  // 3-1

    std::cout << boost::format{"%2%G%1%"} % 50 %
        boost::io::group(std::showpos,100)<< '\n';              // +100G50

    std::cout << boost::format{"%+s %s %s"} % 1 % 2 % 1 << '\n';// +1 2 1
    // s - const char*
    std::cout << boost::format{"%+d %d %d"} % 1 % 2 % 1 << '\n';// +1 2 1
    // d - string

    std::cout << boost::format{"%|+| %|| %||"} % 3 % 2 % 1 << '\n';

    // exception
    // catch (boost::io::format_error &ex)
}

void strRegex(){
    std::string p = "Boost C++ Libraries";

//    boost::iterator_range<std::string::iterator> r =
//        boost::algorithm::find_regex(p,boost::regex{"\\w\\+\\+"});

    // C++
}

void boostSTRINGSTREAM(){
    std::string s = "Poland Germany USA";
    std::vector<std::string> x;

    boost::algorithm::split(x,s,
        boost::algorithm::is_space());

    for(const std::string &i : x)
        std::cout << i << std::endl;
}

void mergeVectBoost(){
    std::vector<std::string> v{"Niech","Zyje","Polska"};
    std::cout << boost::algorithm::join(v," !! ");  // Niech !! Zyje !! Polska
}

void findingInString(){
    std::string s = "Niech zyolje Polska";
    boost::iterator_range<std::string::iterator> it =
        boost::algorithm::find_first(s,"ol");

    // boost::algorithm::find_last()
    // boost::algorithm::find_nth()
    // boost::algorithm::find_head()
    // boost::algorithm::find_tail()

    std::cout << it;        // " " - no contain
                            // "ol" - contains
}

void stringBoostFunctions4(){
    std::wstring x(L"xyzABCdef123!@#");

    std::cout << std::boolalpha;

    std::cout << boost::algorithm::starts_with(x,"x") << '\n';
    std::cout << boost::algorithm::ends_with(x,"@") << '\n';
    std::cout << boost::algorithm::contains(x,"-") << '\n';

    // ???
    std::cout << boost::algorithm::lexicographical_compare(x,"xyzABCdef") << '\n';
}

void stringBoostFunctions3(){
    std::string s = "\t xyzABCdef \t";
    std::cout << '_' << s << '_' << std::endl;

    boost::algorithm::trim_left(s);
    std::cout << '_' << s << '_' << std::endl;

    boost::algorithm::trim_right(s);
    std::cout << '_' << s << '_' << std::endl;

    boost::algorithm::trim(s);
    std::cout << '_' << s << '_' << std::endl;

    // ------------------------------------

    std::string t = "123*456*78999";
    std::cout << '_' << boost::algorithm::trim_copy_if(t,
        boost::algorithm::is_digit()) << '_';               // *456*

    std::cout << std::endl;

    std::cout << '_' << boost::algorithm::trim_copy_if(t,
        boost::algorithm::is_any_of("9")) << '_';           // 123*456*78
}

void stringBoostFunctions2(){
    std::string b("abcdefghijklmnoprstuwxyz");

    std::cout << boost::algorithm::replace_first_copy(b,"d","D") << std::endl;
    std::cout << boost::algorithm::replace_last_copy(b,"d","D") << std::endl;

    std::cout << boost::algorithm::replace_nth_copy(b,"d",0,"D") << std::endl;

    std::cout << boost::algorithm::replace_all_copy(b,"d","D") << std::endl;

    std::cout << boost::algorithm::replace_head_copy(b,3,"ABC") << std::endl;
    std::cout << boost::algorithm::replace_tail_copy(b,3,"XYZ") << std::endl;
}

void stringBoostFunctions(){
    std::string x = "Polska";

    boost::algorithm::to_upper(x);
    std::cout << x << std::endl;
    std::string y = boost::algorithm::to_lower_copy(x);
    std::cout << y << std::endl;

    // -----------------------------------

    std::string s = "Boost C++ Libraries";
    std::cout << boost::algorithm::erase_first_copy(s,"s") << std::endl;        // Boot C++ Libraries
    std::cout << boost::algorithm::erase_nth_copy(s,"s",1) << std::endl;        // Boost C++ Librarie
    std::cout << boost::algorithm::erase_last_copy(s,"s") << std::endl;         // Boost C++ Librarie
    std::cout << boost::algorithm::erase_all_copy(s,"s") << std::endl;          // Boot C++ Librarie
    std::cout << boost::algorithm::erase_head_copy(s,5) << std::endl;           //  C++ Librarie
    std::cout << boost::algorithm::erase_tail_copy(s,9) << '_' << std::endl;    // Boost C++ _
}

int *scopeExit(){
    int *i = new int{10};

    BOOST_SCOPE_EXIT(&i){
        delete i;
        i = 0;
    }BOOST_SCOPE_EXIT_END

    std::cout << *i << std::endl;

    return i;

    // int *j = scopeExit();
    // std::cout << j;
}

void bSwap(){
    std::string x("abc123");
    std::string y("defghi");

    if(std::regex_match(x,std::regex("[^0-9]*[0-9]{3}[^0-9]*")))
        boost::swap(x,y);

    std::cout << x;
}

void bArray(){
    typedef boost::array<std::string,5> tab;
    tab a;

    *a.begin() = "Poland";
    a.at(1) = "Germany";
    *a.rbegin() = "Turkey";

    std::sort(a.begin(),a.end());

    for(const std::string &s : a)
        std::cout << s << " ";
}

void heap(){
    std::time_t time = std::time(0);
    boost::random::mt19937 rand(static_cast<std::uint32_t>(time));
    boost::random::uniform_int_distribution<> f(1,10);
    boost::random::uniform_int_distribution<> g(10,20);

    boost::heap::priority_queue<int> x;
    boost::heap::binomial_heap<int> y1;
    boost::heap::binomial_heap<int> y2;
    boost::heap::fibonacci_heap<int> z;

    x.push(f(rand));
    x.push(f(rand));
    x.push(f(rand));

    y1.push(g(rand));
    y1.push(g(rand));
    y1.push(g(rand));
    y2.push(f(rand));

    std::cout << x.top() << std::endl;
    std::cout << y1.top() << std::endl << std::endl;

    y1.merge(y2);

    for(auto it = y1.ordered_begin(); it != y1.ordered_end(); ++it)
        std::cout << *it << " ";

    std::cout << std::endl << std::endl << y2.empty();

    z.push(g(rand));
    z.push(g(rand));
    auto handle = z.push(12);
    z.update(handle,11);
    std::cout << std::endl << std::endl << z.top() << std::endl << std::endl;

    for(auto it2 = z.ordered_begin(); it2 != z.ordered_end(); ++it2)
        std::cout << *it2 << " ";

}

void bimap(){
    typedef boost::bimap<int,std::string> firstMap;
    firstMap cars;

    cars.insert(firstMap::value_type(1,"BMW"));
    cars.insert(firstMap::value_type(2,"Audi"));
    cars.insert(firstMap::value_type(3,"Suzuki"));

    // check if is value in bimap
    std::cout << cars.left.count(1) << std::endl;
    std::cout << cars.right.count("x") << std::endl;

    for(auto it = cars.begin(); it != cars.end(); ++it)
        std::cout << it->left << " " << it->right << std::endl;
}

void foreach(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    BOOST_FOREACH(auto x, v){
        std::cout << x << " ";
    }

    std::cout << std::endl;

    BOOST_REVERSE_FOREACH(auto y, v){
        std::cout << y << " ";
    }
}

void minmaxBoost2(){
    typedef boost::unordered_set<int> p;
    p p1;
    std::time_t now = std::time(0);
    boost::random::mt19937 x(static_cast<uint32_t>(now));
    boost::random::uniform_int_distribution<> f(1,100);

    for(int i=0; i<20; ++i)
        p1.insert(f(x));

    std::pair<boost::unordered_set<int>::iterator,
        boost::unordered_set<int>::iterator> mm =
        boost::minmax_element(p1.begin(),p1.end());

    BOOST_FOREACH(p::value_type x, p1)
        std::cout << x << " ";

    std::cout << "\nMin: " << *mm.first << "\n";
    std::cout << "Max: " << *mm.second;
}

void minmaxBoost(){
    std::time_t now = std::time(0);
    boost::random::mt19937 g(static_cast<std::uint32_t>(now));
    boost::random::uniform_int_distribution<> f(1,100);
    boost::scoped_ptr<int> x(new int(f(g)));
    boost::scoped_ptr<int> y(new int(f(g)));

    boost::tuple<const int&, const int&> t =
        boost::minmax(*x.get(),*y.get());

    std::cout << t.get<0>() << "\n" << t.get<1>();
}

void randomNumbersBoostTime(){
    std::time_t now = std::time(0);
    boost::random::mt19937 x
        (static_cast<std::uint32_t>(now));
    boost::random::uniform_int_distribution<> f(1,100);
    std::cout << f(x);
}

void lexicalCastTryCatch(){
    std::string a = "abc";
    int x;

    try{
        boost::lexical_cast<int>(a);
    }
    catch(const boost::bad_lexical_cast &ex){
        //std::cerr << ex.what();
        std::cout << "x";
    }
}

void ptrVector(){
    boost::ptr_vector<int> v;
    v.push_back(new int(1));
    v.push_back(new int(2));
    v.push_back(new int(3));
    v.push_back(new int(4));

    std::cout << v[2];
    // std::cout << v.back();
}

void sharedPtr(){
    boost::scoped_ptr<int> a1(new int(2));
    // boost::scoped_ptr<int> a2(a1);       ERROR

    boost::shared_ptr<int> p1(new int(5));
    boost::shared_ptr<int> p2(p1);

    p1.reset(new int(3));
    p1.reset();
    std::cout << static_cast<bool>(p2);
}

void scopedArray(){
    boost::scoped_array<char> p(new char[26]);
    char i='a';
    int j=0;

    for(i='a',j=0; i<='z'; ++i,++j){
        p[j] = i;
        std::cout << p[j];
    }

}

void scopedPtr(){
    boost::scoped_ptr<int> p(new int(5));
    std::cout << *p << "\n";

    p.reset(new int(2));
    std::cout << *p << " " << p.get();

    p.reset();
    std::cout << std::endl << static_cast<bool>(p);
    std::cout << std::endl <<
        std::boolalpha << static_cast<bool>(p);
}

void regexSearch(){
    std::string s ("this subject has a submarine as a subsequence");
    std::smatch m;
    std::regex e("\\b(sub)([^ ]*)");

    while (std::regex_search(s,m,e)){
        for (auto x : m)
            std::cout << x << " ";
    std::cout << std::endl;
    s = m.suffix().str();
  }
}

void cmatch(){
    const char* cstr = "6";
    std::cmatch cm;
    std::regex ex("[0-9]{1}");
    std::regex_match(cstr,cm,ex);
    std::cout << cm.size() << " matches";
}

void smatch(){
    std::string s = "p0@";
    std::string s2 = "2121@";

    std::regex eq("(([a-zA-z]{2,}.)|([a-zA-z]+[0-9]*.))@");
    std::smatch p,p2,p3;

    std::regex_match(s,p,eq);
    std::regex_match(s2,p2,eq);
    std::regex_match(s,p3,eq,
                     std::regex_constants::match_default);


    std::cout << p.size() << " matches\n";
    std::cout << p2.size() << " matches";
    std::cout << "\n\nthe matches where: ";
    for(unsigned i=0; i<p3.size(); ++i)
        std::cout << "[" << p3[i] << "] ";
    std::cout << std::endl;
}

void regexMatchStringIterator(){
    std::string s = "09";
    std::regex x("[0-9]{1}");
    if(std::regex_match(s.begin(),s.end(),x))
        std::cout << "x";
}

void regexMatchString(){
    std::string s = "1";
    std::regex x("[0-9]{1}");
    if(std::regex_match(s,x))
        std::cout << "x";
}

// -----------------------------------------------------------------`
// -----------------------------------------------------------------
// -----------------------------------------------------------------
// -----------------------------------------------------------------
// -----------------------------------------------------------------

void PP0502B(){
    std::vector<int> tablice,tablice2,x;
    std::vector<int>::iterator it;
    int testy,num,num2;

    std::cin >> testy;

    for(int i=0; i<testy; ++i){
        std::cin >> num;
        for(int u=0; u<num; ++u){
            std::cin >> num2;
            tablice.push_back(num2);
            num2 = 0;
        }

        for(int t=tablice.size()-1; t>=0; --t)
            tablice2.push_back(tablice.at(t));

        for(const auto &r : tablice2)
            std::cout << r << ' ';

        std::cout << '\n';

        tablice2.clear();
        tablice.clear();
        num = 0;
    }
}

void gg2(){
    std::string input,output;
    std::vector<char> first,second;
    int one,two;
    int o,l,h;
    char t;

    while(std::cin >> input){
        for(int i=0; i<input.size(); ++i){
            if(i % 2 == 0) first.push_back(input.at(i));
            if(i % 2 != 0) second.push_back(input.at(i));
        }

        for(int j=0; j<second.size(); ++j){
            for(h='A',l=0; h<='P'; ++h,++l)
                if(h == first.at(j))
                    one = l;

            for(h='A',o=0; h<='P'; ++h,o+=16)
                if(h == second.at(j))
                    two = o;

            t = static_cast<char>(one + two);

            output += t;
        }

        first.clear();
        second.clear();

        std::cout << output << '\n';

        output = input = "";
    }

}

void zliczanieLiter(){
    std::vector<std::string> strs;
    std::string str;
    int ile;
    std::map<char,int> literki;
    std::map<char,int> literki2;

    std::cin >> ile;

    for(int i=0; i<ile; ++i){
        getline(std::cin,str);
        for(int u=0; u<str.size(); ++u)
            if(str.at(u) >= 'a' && str.at(u) <= 'z'){
                if(literki[str.at(u)] == 1)
                    literki[str.at(u)]++;
                else literki[str.at(u)]++;
            }
            else if(str.at(u) >= 'A' && str.at(u) <= 'Z'){
                if(literki2[str.at(u)] == 1)
                    literki2[str.at(u)]++;
                else literki2[str.at(u)]++;
            }
    }

    for(const auto &f : literki){
        std::cout << f.first << ' ';
        std::cout << f.second << '\n';
    }

    for(const auto &h : literki2){
        std::cout << h.first << ' ';
        std::cout << h.second << '\n';
    }


}

void shiftLeft(){
    int ilosc, przesun, liczba;
    std::cin >> ilosc >> przesun;

    std::vector<int> x,y;

    for(int i=0; i<ilosc; ++i){
        std::cin >> liczba;
        x.push_back(liczba);
        liczba = 0;
    }

    for(int j=przesun; j<x.size(); ++j){
        y.push_back(x.at(j));
    }

    for(int k=0; k<przesun; ++k){
        y.push_back(x.at(k));
    }

    for(const auto &h : y)
        std::cout << h << ' ';

}

void jpesel(){
    std::vector<std::string> pesle_str;
    std::vector<char> wynik;
    int wybor=0,suma=0;
    std::string pesel="";

    std::cin >> wybor;

    for(int i=0; i<wybor; ++i){
        std::cin >> pesel;
        pesle_str.push_back(pesel);
        pesel = "";
    }

    for(const auto &z : pesle_str){
        for(int j=0; j<z.size(); ++j){
            if(j == 0 || j == 4 || j == 8 || j == 10)
                suma += static_cast<int>(z.at(j))*1;
            if(j == 1 || j == 5 || j == 9)
                suma += static_cast<int>(z.at(j))*3;
            if(j == 2 || j == 6)
                suma += static_cast<int>(z.at(j))*7;
            if(j == 3 || j == 7)
                suma += static_cast<int>(z.at(j))*9;
        }
        if(suma > 0)
            if(suma % 10 == 0)
                wynik.push_back('D');
            else
                wynik.push_back('N');
        suma = 0;
    }

    for(const char &r : wynik)
        std::cout << r << '\n';
}

void ex1(){
    std::string randomStr;
    std::deque<char> deque1;

    std::time_t now = static_cast<unsigned>(std::time(NULL));
    boost::random::mt19937 x(static_cast<uint32_t>(now));
    boost::random::uniform_int_distribution<> f(
        static_cast<int>('a'),static_cast<int>('z'));

    std::generate_n(std::inserter(deque1,deque1.begin()),20,
        [&](){return static_cast<char>(f(x));});


    BOOST_REVERSE_FOREACH(decltype(deque1)::value_type &c, deque1){
        std::cout << c << ' ';
    }
}

void stos(){
    std::string str="";
    int stos[10];
    int place = 9,num=0;

    while(std::cin >> str){
        if(str == "+"){
            str = "";
            std::cin >> num;
            stos[place] = num;
            num = 0;

            if(place >= 0){
                std::cout << ":)" << '\n';
                place -= 1;
            }
            else
                std::cout << ":(" << '\n';

        }
        else if(str == "-"){
            std::cout << stos[place] << '\n';
            place += 1;
        }
        else{
            // ...
        }

    }

    for(int i=0; i<9; ++i){
        std::cout << stos[i] << ' ';
    }
}

void sumaSuma(){
    int liczba=0, suma=0;
    while(std::cin >> liczba){
        suma += liczba;
        std::cout << suma << '\n';
    }
}

int nwd(int a, int b){
    int x,first,second;
    std::cin >> x;
    typedef boost::unordered_map<int,int> v;
    v o;

    for(int i=0; i<x; ++i){
        std::cin >> first >> second;
        o.insert(std::make_pair(first,second));
        first = second = 0;
    }

    BOOST_FOREACH(v::value_type &y, o){
        first = y.first;
        second = y.second;


    }

    return 0;
}

void problemCollatza(){
    int a,j,g;
    std::cin >> a;
    int arr[a], x[10000];

    for(int i=0; i<a; ++i)
        std::cin >> arr[i];

    for(j=0,g=0; j<a; ++j){
        g=0;
        x[g] = arr[j];

        if(x[g] == 1){
            std::cout << g << '\n';
            continue;
        }

        do{
            if(x[g] % 2 != 0){
                x[g+1] = 3*x[g]+1;
            }else{
                x[g+1] = x[g]/2;
            }

            g++;
        }while(x[g] != 1);

        std::cout << g << '\n';
    }

}

void randomTokenizer(){
    std::time_t now = static_cast<unsigned>(std::time(NULL));
    boost::random::mt19937 x(static_cast<uint32_t>(now));
    std::string g = "W podobnym tonie wypowiedzial sie kolarz Movistaru";

    boost::random::uniform_int_distribution<> f(0,(g.size()-1));

    typedef boost::tokenizer<boost::char_separator<char>> tok;

    const char *y = g.at(f(x))+"";

    boost::char_separator<char> sep(y);

    tok t1(g,sep);

    for(const auto &b : t1) WRT(b);

    WRT("----------");
    WRT(*y);
}

void staticAssertTest(){
    static_assert(Class1::g > 20, "Class1::g is too small");
}

void valTypTest(){
    std::vector<char> p;

    for(unsigned int i = 100; i<110; ++i)
        p.push_back(static_cast<char>(i));

    BOOST_FOREACH(decltype(p)::value_type &d, p){
        std::cout << '_' << d << '\n';
    }
}

void constructorsTest(){
    std::shared_ptr<daughter> d1 = std::make_shared<daughter>();
}

grandmother::grandmother(){std::cout << "Grandmother born" << std::endl;};
grandmother::~grandmother(){std::cout << "Grandmother died" << std::endl;};
grandfather::grandfather(){std::cout << "Grandfather born" << std::endl;};
grandfather::~grandfather(){std::cout << "Grandfather died" << std::endl;};
mother::mother(){std::cout << "Mother born" << std::endl;};
mother::~mother(){std::cout << "Mother died" << std::endl;};
daughter::daughter(){std::cout << "Daughter born" << std::endl;};
daughter::~daughter(){std::cout << "Daughter died" << std::endl;};

std::map<int,char> fillMapEmptyValues(){
    std::map<int,char> x;

    for(int i=1; i<10; ++i){
        x[i] = ' ';
    }

    return x;
}

boost::logic::tribool throughBoard(std::map<int,char> board, int usr){
    for(auto &i : board)
        if(i.first == usr)
            if(i.second != ' ')
                return true;
    return false;
}

void paintBoard(std::map<int,char> board,int player){
    std::cout << '\t' << "---------";
    int j=0;

    for(auto &i : board){
        if(j % 3 == 0){
            if(j!=0)
                std::cout << "|";
            std::cout << std::endl << '\t' << "| ";
        }

        if(i.second != ' '){
            std::cout << i.second << " ";
        }else{
            std::cout << i.first << " ";
        }

        ++j;
    }

    std::cout << "|" << std::endl <<'\t' << "---------" << std::endl;
}

int startGame(int player,std::map<int,char> board){
    std::string user;
    int user2=0,user3=0,ret = 0;

    if(player == 0) user = takeCircleField();
    if(player == 1) user = takeCrossField();

    try{
        user2 = boost::lexical_cast<int>(user);
        if((user2<1 || user2>9) || (throughBoard(board,user2)))
            throw 0;
        else
            return user2;
    }catch(boost::bad_lexical_cast &e){
        user3 = startGame(player,board);
    }catch(int x){
        user3 = startGame(player,board);
    }

    return user3;
}

int whoStartGame(){
    std::time_t now = std::time(0);
    boost::random::mt19937 x(static_cast<std::uint32_t>(now));
    boost::random::uniform_int_distribution<> f(0,1);
    return f(x);
}

std::string takeCircleField(){
    std::string field;

    std::cout << "Podaj numer pola, w ktorym chcesz postawic kolko: ";
    std::cin >> field;

    return field;
}

std::string takeCrossField(){
    std::string field;

    std::cout << "Podaj numer pola, w ktorym chcesz postawic krzyzyk: ";
    std::cin >> field;

    return field;
}

void TicTacToeRUN(){
    int player, user;
    char c;
    std::map<int,char> board = fillMapEmptyValues();
    char arr[9];
    arr[0] = 'p';

    paintBoard(board,player);

    player = whoStartGame();
    if(player == 0) c = 'O';
    if(player == 1) c = 'X';

    while(true){
        user = startGame(player,board);
        board[user]=c;

        paintBoard(board,player);

        auto l = board.begin();
        for(int u=1; l!=board.end(); l++,++u)
            arr[u] = l->second;

        if(arr[1]==arr[2]==arr[3])                  // ????????????????????
            std::cout << "!!!!!!!!!!!";

        if(player == 1){
            player = 0;
            c = 'O';
            continue;
        }

        if(player == 0){
            player = 1;
            c = 'X';
            continue;
        }

    }

}

std::vector<std::string> ob(std::string line){
    std::string x,part;
    int y = 0;
    std::vector<std::string> ret;

    for(int i=0; i<line.size(); ++i){
        if(line.at(i) == '='){
            if(line.at(i+1) == ' '){
                y = i+1;
                break;
            }
        }
    }

    for(int q=(y+1); q<line.size(); ++q)
        if(line.at(q) != '(')
            x.append(line.at(q)+"");

    x.erase((x.length()-2),(x.length()-1));

    std::stringstream ss(x);

    while(getline(ss,part,')'))
        ret.push_back(part);

    return ret;
}

std::vector<std::string> ob2(std::string line){
    std::string x,part;
    std::vector<std::string> ret;

    for(int q=0; q<line.size(); ++q)
        if(line.at(q) != '(')
            x.append(line.at(q)+"");

    x.erase((x.length()-2),(x.length()-1));

    std::stringstream ss(x);

    while(getline(ss,part,')'))
        ret.push_back(part);

    return ret;
}

std::set<int> takeAns(std::string partOfQ, std::string searchFilePath){
    std::ifstream myFile(searchFilePath);
    std::string line;
    std::vector<std::string> x,y;
    std::vector<boost::logic::tribool> p;
    int m=0;

    y = ob2(partOfQ);               // question

    while(getline(myFile,line)){
        x = ob(line);               // object

        x.clear();
    }
}

std::list<std::string> separate(std::string q){
    std::stringstream ss(q);
    std::string x;
    std::list<std::string> separated;

    while(getline(ss,x,'+'))
        separated.push_back(x);

    return separated;
}

void ask(std::string question){
    convertSecondaryFileToSearchFile("secondaryFile.txt","sourceFile.txt");

    std::list<std::string> separated = separate(question);
    std::list<std::string>::iterator it = separated.begin();
    std::vector<std::set<int>> answer;

    for(; it!=separated.end(); ++it){
        answer.push_back(takeAns(*it,"secondaryFile.txt"));

    }

    // ask("(c,c1)(a,a1)+(b,b1)");
}

std::vector<std::string> takeAttributes(std::string line){
    std::vector<std::string> atrybs;
    std::string atryb,part;;
    std::stringstream ss(line);

    while(getline(ss,part,' '))
        if(part != "")
            atrybs.push_back(part);

    return atrybs;
}

void convertSecondaryFileToSearchFile(std::string sourPath,std::string destPath){
    std::ifstream myFile(sourPath);
    std::ofstream myFile2;
    std::string line,component;
    std::vector<std::string> attributes, numANDvalues;
    std::map<int,std::vector<std::string>> objects;
    int numOfIter = 0,numOfIter2 = 1;

    myFile2.open("searchFile.txt",std::ios::trunc);

    while(getline(myFile,line)){
        if(numOfIter == 0)
            attributes = takeAttributes(line);
        if(numOfIter > 0){
            if((line.at(0) == 'x') || (line.at(0) == 'X')){
                numANDvalues = takeAttributes(line);
                myFile2 << 't'+numANDvalues.at(0)+" = ";

                for(auto atr : attributes){
                    boost::algorithm::to_lower(atr);
                    myFile2 << '('+atr+','+numANDvalues.at(numOfIter2)+')';
                    numOfIter2 += 1;
                }

                myFile2 << '\n';
                numANDvalues.clear();
                numOfIter2 = 1;
            }
        }
        numOfIter += 1;
    }

    myFile.close();
    myFile2.close();
}

boost::tuple<char,char,std::string> takePart(std::string expresionWithoutBrackets){
    boost::logic::tribool first= false,second= false;
    typedef boost::tuple<char,char,std::string> retT;
    int index1, index2, nast;
    std::string x;
    char a,b;

    for(int i=0; i<expresionWithoutBrackets.size(); ++i){
        if((expresionWithoutBrackets.at(i) >= 'a')&&
            (expresionWithoutBrackets.at(i) <= 'z')){
                a = expresionWithoutBrackets.at(i);
                if(i != 0)
                    if((expresionWithoutBrackets.at(i-1)) == '~'){
                        index1 = (i-1);
                        second = true;
                    }
                    else{
                        index1 = i;
                        first = true;
                    }
                else{
                    index1 = i;
                    first = true;
                }
        }
        if(first || second)
            break;
    }

    if(first){
        x += expresionWithoutBrackets.at(index1);
        nast = index1 + 1;
    }
    if(second){
        x += expresionWithoutBrackets.at(index1);
        x += expresionWithoutBrackets.at(index1+1);
        nast = index1 + 2;
    }

    for(int j=nast;
        j<expresionWithoutBrackets.size();
        ++j){
            x += expresionWithoutBrackets.at(j);
            if((expresionWithoutBrackets.at(j) >= 'a')&&
                (expresionWithoutBrackets.at(j) <= 'z')){
                    b = expresionWithoutBrackets.at(j);
                    index2 = j;
                    break;
            }
    }

    retT tup(a,b,x);
    return tup;
}

std::string cutBrackets(std::string expresion){
    std::string s1 = "";

    for(int i=0; i<expresion.size(); ++i){
        if((expresion.at(i) == '[')||(expresion.at(i) == ']'))
            continue;
        if((expresion.at(i) == '(')||(expresion.at(i) == ')'))
            continue;
        s1 += expresion.at(i);
    }

    return s1;
}

void tautologyBegin(){
    boost::unordered_set<char> var =
        vars(takeExpresion("tautology.txt"));

    std::map<int,std::vector<int>> x = add0(binary(var));
    std::vector<int> y;

    std::map<char,std::vector<int>> newM =
        makeFirstCols(x,var);

    for(auto p=newM.begin(); p!=newM.end(); ++p)
        std::cout << p->first << " ";

    int i=0;
    do{
        std::cout << std::endl;
        for(auto q=newM.begin(); q!=newM.end(); ++q){
            y = q->second;
            std::cout << y.at(i) << " ";
            y.clear();
        }
        i++;
    }while(i < myPow(2,var.size()));
}

std::map<char,std::vector<int>> makeFirstCols
    (std::map<int,std::vector<int>> binary,
     boost::unordered_set<char> vars){

        typedef boost::unordered_set<char> y;
        std::map<char,std::vector<int>> newM;
        std::vector<int> bin,bin2;
        int i = 0;

        BOOST_FOREACH(y::value_type o, vars){
            for(auto it=binary.begin(); it!=binary.end(); ++it){
                bin = it->second;
                bin2.push_back(bin.at(i));
                bin.clear();
            }
            newM[o] = bin2;
            bin2.clear();
            i++;
        }

    return newM;
}

int myPow(int n, int x){
    int ret = n;
    if(x == 0)
        return 1;
    for(int i=(x-1); i>0; --i)
        ret*=n;
    return ret;
}

std::map<int,std::vector<int>> add0(std::map<int,std::vector<int>> x){
    std::map<int,std::vector<int>> ret;
    std::vector<int> v,w;
    int sizeH = 0,difference = 0;

    auto it2 = x.end();
    it2--;
    v = it2->second;
    sizeH = v.size();
    v.clear();

    for(auto it = x.begin(); it!=x.end(); ++it){
        v = it->second;
        difference = sizeH - v.size();
        if(difference != 0){
            for(int i=difference; i!=0; --i)
                w.push_back(0);
            for(int j=0; j<v.size(); ++j){
                w.push_back(v.at(j));
            }
            ret[it->first] = w;
            w.clear();
            v.clear();
            std::cout << '\n';
            continue;
        }
        ret[it->first] = v;
        v.clear();
        std::cout << '\n';
    }

    return ret;
}

std::map<int,std::vector<int>>
    binary(boost::unordered_set<char> vars){

    typedef std::map<int,std::vector<int>> bin;
    bin binVars;
    std::vector<int> vect;

    int highest = myPow(2,vars.size())-1;

    for(int i=highest; i>=0; --i){
        vect = numberToBin(i);
        binVars[i] = vect;
        vect.clear();
    }

    return binVars;
}

std::vector<int> numberToBin(int num){
    std::vector<int> binary;
    int currentNum = num,currentPow,pow = 0,power = 1;

    if(num == 0){
        binary.push_back(0);
        return binary;
    }

    while((myPow(2,power)) <= currentNum)
        power += 1;

    pow = power;

    binary.push_back(1);
    currentNum -= myPow(2,(pow-1));
    currentPow = (pow-2);

    while(binary.size() <= (pow-1)){
        if((currentNum - (myPow(2,currentPow))) >= 0){
            binary.push_back(1);
            currentNum -= (myPow(2,currentPow));
        }
        else
            binary.push_back(0);

        currentPow--;
    }

    return binary;
}

boost::unordered_set<char> vars(std::string expresion){
    boost::unordered_set<char> varsCh;

    for(int i=0; i<expresion.size(); ++i)
        if((expresion.at(i) >= 'a')&&(expresion.at(i) <= 'z'))
            varsCh.insert(expresion.at(i));

    return varsCh;
}

std::string takeExpresion(std::string path){
    std::ifstream myfile(path);
    std::string line;

    while(getline(myfile,line))
        return line;

    return "";
}

void learningMethod(){
    while(1){

        soundBreak();

        for(int i=0; i<5; ++i)
            timer1min();

        soundLearn();

        for(int i=0; i<15; ++i)
            timer1min();
    }
}

void soundLearn(){
    PlaySound(TEXT("start.wav"), NULL, SND_SYNC);
}

void soundBreak(){
    PlaySound(TEXT("stop.wav"), NULL, SND_SYNC);
}

void timer1min(){
    unsigned int x_hours=0;
	unsigned int x_minutes=0;
	unsigned int x_seconds=0;
	unsigned int x_milliseconds=0;
	unsigned int totaltime=0;
	unsigned int count_down_time_in_secs=0;
	unsigned int time_left=0;

    clock_t x_startTime,x_countTime;
	count_down_time_in_secs=60;  // 1 minute is 60, 1 hour is 3600

    x_startTime=clock();  // start clock
    time_left=count_down_time_in_secs-x_seconds;   // update timer

	while (time_left>0){
		x_countTime=clock(); // update timer difference
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
		x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
		x_hours=x_minutes/60;

		time_left=count_down_time_in_secs-x_seconds; // subtract to get difference

		std::cout << time_left << " ";
	}
}

void launchForwardConclusion(){
    std::cout << "Wnioskowanie calej wiedzy z bazy: \n\n";

    analizeData(loadData("forward.txt"));

    //  TXT FILE EXAMPLE
    //
    //  R1: Jezeli a i b i c to d
    //  R2: Jezeli a i b to g
    //  R3: Jezeli b i c to e
    //  R4: Jezeli a i c to f
    //  R5: Jezeli e i b i c to f
    //  Fakty: a b c
}

void showFacts(std::vector<char> x){
    std::cout << "Fakty: ";
    for(char& p : x)
        std::cout << p << " ";
    std::cout << std::endl;
}

boost::logic::tribool inFacts(char b, std::vector<char> facts){
    for(auto v : facts){
        if(v == b)
            return true;
    }

    return false;
}

void analizeData(boost::tuple<std::map<int, boost::unordered_set<char>>,
    std::vector<char>> x){

    std::map<int,boost::unordered_set<char>> rules = boost::get<0>(x);
    std::map<int,boost::unordered_set<char>>::iterator it1;
    std::vector<char> facts = boost::get<1>(x);
    typedef boost::unordered_set<char> letters;
    letters letter;
    int meter = 0;
    char conclusion;
    boost::logic::tribool activRule = true;
    std::list<int> unactiveRules;

    for(it1=rules.begin(); it1!=rules.end(); ++it1){
        std::cout << "\nAnalizowanie reguly " << it1->first << "\n";
        showFacts(facts);
        letter = it1->second;
        BOOST_FOREACH(letters::value_type o, letter){   // rules elements
            meter += 1;
            if(meter == 1)
                conclusion = o;
            else if(meter != 1){
                if(inFacts(o,facts))
                    continue;
                else{
                    std::cout << "\'" << o << "\'"
                    << " nie ma w faktach." <<
                    " Nie mozna uaktywnic reguly " <<
                        it1->first << ".\n";
                    activRule = false;
                    unactiveRules.push_back(it1->first);
                }
            }
        }
        if(activRule){
            facts.push_back(conclusion);
            std::cout << "Regula " << it1->first << " uaktywniona.\n";
            std::cout << "Dopisano do faktow '" << conclusion << "'.\n";
        }
        activRule = true;
        meter = 0;
    }

    std::cout << "\nPozostale reguly: ";
    unactiveRules.unique();

    for(auto& bl : unactiveRules)
        std::cout << bl << " ";
    std::cout << "\n-------------------------------\n";

    for(auto& bl : unactiveRules){
        std::cout << "\nAnalizowanie reguly " << bl << "\n";
        showFacts(facts);
        letter = rules[bl];
        BOOST_FOREACH(letters::value_type o, letter){
            meter += 1;
            if(meter == 1)
                conclusion = o;
            else if(meter != 1){
                if(inFacts(o,facts))
                    continue;
                else{
                    std::cout << "\'" << o << "\'"
                    << " nie ma w faktach." <<
                    " Nie mozna uaktywnic reguly " <<
                        bl << ".\n";
                    activRule = false;
                }
            }
        }
        if(activRule){
            facts.push_back(conclusion);
            std::cout << "Regula " << bl << " uaktywniona.\n";
            std::cout << "Dopisano do faktow '" << conclusion << "'.\n";
        }
        activRule = true;
        meter = 0;
    }

// WRITE ELEMENTS TO OUTPUT
//
//    for(it1=rules.begin(); it1!=rules.end(); ++it1){
//        std::cout << it1->first << "\n";
//        letter = it1->second;
//        BOOST_FOREACH(letters::value_type o, letter)
//            std::cout << o << " ";
//        std::cout << "\n\n";
//    }
//
//    for(char s : facts)
//        std::cout << s << " ";

}

int regNumAnalize(std::string x){
    int ret = 0,i;
    std::string glue = "";

    if((x.at(0) != 'R') && (x.at(0) != 'r'))
        return -1;

    if((x.at(1) >= '1') && (x.at(1) <= '9'))
        for(i=1; ((x.at(i)>='0') && (x.at(i)<='9')); ++i){
            glue += x.at(i); }
    else
        return -1;

    if((x.at(i)) != ':')
        return -1;

    return boost::lexical_cast<int>(glue);
}

boost::tuple<std::map<int,boost::unordered_set<char>>,
std::vector<char>> loadData(std::string path){
    std::ifstream myFile(path);
    std::string part, line;
    int regNum = 0, counter = 0, linesC = 0;
    char c;
    std::map<int,boost::unordered_set<char>> rules;
    std::map<int,boost::unordered_set<char>>::iterator it1;
    boost::unordered_set<char> letter;
    boost::unordered_set<char>::iterator it2;
    std::vector<char> facts;
    boost::logic::tribool endB = false;
    typedef boost::tuple<std::map<int,boost::unordered_set<char>>,
        std::vector<char>> ret;

    while(getline(myFile,line)){
        linesC += 1;
        std::stringstream ss(line);
        while(getline(ss,part,' ')){
            counter += 1;
            if((part == "Fakty:") || (part == "fakty:") ||
                (part == "FAKTY:")){
                    endB = true;
                    continue;
                }
            if(endB){
                try{
                    c = boost::lexical_cast<char>(part);
                    facts.push_back(c);
                }
                catch( ... ){
                    std::cout << "Nieprawidlowe fakty " <<
                        "w linii " << linesC << "\n";
                    continue;
                }
                continue;
            }
            if(counter == 1){
                try{
                    regNum = regNumAnalize(part);
                    if(regNum == -1)
                        throw "Nieprawidlowy numer reguly";
                }
                catch(const char* exp){
                    std::cout << "Blad w linii " << linesC <<
                    ": " << exp;
                    break;
                }
            }
            if(counter == 2){
                if((part != "jezeli") && (part != "Jezeli")
                && (part != "JEZELI") &&
                (part != "if") && (part != "If")
                && (part != "IF")){
                    std::cout << "Nieprawidlowe rozpoczecie " <<
                        "instrukcji warunkowej w linii " <<
                        linesC << "\n";
                    break;
                }
            }
            if(((counter % 2) != 0) && (counter > 1)){
                try{
                    c = boost::lexical_cast<char>(part);
                    if((c >= 'a') && (c <= 'z'))
                        letter.insert(c);
                    else
                        throw "Przeslanka musi byc litera!";
                }
                catch(const char* exp){
                    std::cout << "Blad w linii " << linesC <<
                    ": " << exp;
                    break;
                }
                catch( ... ){
                    std::cout << "Nieprawidlowa przeslanka " <<
                        "lub konkluzja w linii " << linesC << "\n";
                    break;
                }
            }
            if(((counter % 2) == 0) && (counter > 3)){
                if((part != "and") && (part != "AND")
                && (part != "i") &&
                (part != "to") && (part != "then")
                && (part != "Then")){
                    std::cout << "Nieprawidlowy " <<
                        "lacznik w linii " <<
                        linesC << "\n";
                    break;
                }
            }
        }
        rules.insert(std::make_pair(regNum,letter));
        letter.clear();
        counter = 0;
    }

    ret retT(rules,facts);
    return retT;
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

