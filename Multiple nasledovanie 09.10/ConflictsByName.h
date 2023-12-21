#pragma once
#include <iostream>
using namespace std;

class A1
{
protected:

    int m_field;

public:

    A1(const int valueA) :
        m_field(valueA)
    {
    }

    void Show() const {
        cout << m_field << endl;
        cout << endl;
    }
};

class B1
{
protected:

    int m_field;

public:

    B1(const int valueB) : m_field(valueB)
    {
    }


    void Show() const
    {
        cout << m_field << endl;
        cout << endl;
    }
};


class C1 :public B1, public A1
{
protected:

    int m_fieldc;

public:

    C1(const int valueA, const int valueB, const int valueC) :
        A1(valueA),
        B1(valueB),
        m_fieldc(valueC)
    {
    }


    void Show() const {
        cout << m_fieldc << endl;

        cout << A1::m_field << endl;
        cout << B1::m_field << endl;
        cout << endl;
    }
};