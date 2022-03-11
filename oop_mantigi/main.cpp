#include <iostream>

using namespace std;

class araba
{
    public:
    string marka="null";
    int beygirGucu=0;

    void markaSoyle()
    {
        cout<<marka<<endl;
    }

    void beygirgucuSoyle()
    {
        cout<<beygirGucu<<endl;
    }
};

class alman:public araba
{
public:
    alman(string markas)
    {
        marka=markas;
        beygirGucu=1600;
    }
};

class fransiz:public araba
{
public:
    fransiz(string marka)
    {
        marka=marka;//null
        beygirGucu=100;
    }
};

class italyan:public araba
{
public:
    italyan(string marka)
    {
        this->marka=marka;//verdiðimiz deðer
        beygirGucu=2500;
    }
};

int main()
{
    alman a1("savas araba");
    a1.markaSoyle();

    fransiz f1("manyak araba");
    f1.markaSoyle();//null çünkü marka=marka
    f1.beygirgucuSoyle();

    italyan i1("manyak araba");
    i1.markaSoyle();

    return 0;
}
