#pragma once

class A2
{
private:

    int m_fieldA;

public:

    A2() :
        m_fieldA(0)
    {
        cout << "Default constructor A2" << endl;
    }

    A2(const int valueA) :
        m_fieldA(valueA)
    {
        cout << "Constructor A2" << endl;
    }


    ~A2()
    {
        cout << "Destructor A2" << endl;
    }

    int GetField() const {
        return m_fieldA;
    }
};



class B2 : public A2
{
private:

    int m_fieldB;

public:

    B2() :  m_fieldB(0)
    {
        cout << "Default constructor B2" << endl;
    }
    B2(const int valueA, const int valueB) :
        A2(valueA),
        m_fieldB(valueB)
    {
        cout << "Constructor B2" << endl;
    }

    ~B2() {
        cout << "Destructor B2" << endl;
    }
};





class C2 : public A2
{
private:

    int m_fieldC;

public:

    C2() :
        m_fieldC(0)
    {
        cout << "Default constructor C2" << endl;
    }
    C2(const int valueA, const int valueC)
        :
        A2(valueA),
        m_fieldC(valueC)
    {
        cout << "Constructor C2" << endl;
    }

    ~C2() {
        cout << "Destructor C2" << endl;
    }
};


class D2 :public B2, public C2
{
private:

    int m_fieldD;

public:

    D2() :
        m_fieldD(0)
    {
        cout << "Default constructor D2" << endl;
    }

    D2(const int valueAB, const int valueB, const int valueAC, const int valueC, const int valueD) :
        B2(valueAB, valueB),
        C2(valueAC, valueC),
        m_fieldD(valueD)
    {
        cout << "Constructor D2" << endl;
    }

    ~D2() {
        cout << "Destructor D2" << endl;
    }
};
