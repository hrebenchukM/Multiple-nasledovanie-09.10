#pragma once
#include <iostream>
using namespace std;

class A
{
private:
    int m_fieldA;

public:

    A(const int valueA) :
        m_fieldA(valueA)
    {
        cout << "Constructor A" << endl;
    }

    ~A()
    {
        cout << "Destructor A" << endl;
    }

    void ShowA() const
    {
        cout << m_fieldA << endl;
    }
};



class B
{
private:
    int m_fieldB;

public:

    B(const int valueB) :
        m_fieldB(valueB)
    {
        cout << "Constructor B" << endl;
    }

    ~B()
    {
        cout << "Destructor B" << endl;
    }


    void ShowB() const 
    {
        cout << m_fieldB << endl;
    }
};

class C :public B, public A
{
private:
    int m_fieldC;

public:

    C(const int valueA, const int valueB, const int valueC) :
        A(valueA),
        B(valueB),
        m_fieldC(valueC)
    {
        cout << "Constructor C" << endl;
    }

    ~C()
    {
        cout << "Destructor C" << endl;
    }

    void ShowC() const
    {
        cout << m_fieldC << endl;
    }
};

