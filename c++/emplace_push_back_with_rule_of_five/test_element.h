#ifndef __TEST_ELEMENT__H_
#define __TEST_ELEMENT__H_

#include <string>
#include <iostream>

using namespace std;

class TestElement
{
public:
    TestElement()
        : num(0), name("")
    {
        cout << "TestElement default constructor" << endl;
    }

    ~TestElement() = default;

    TestElement(int num, string name)
        : num(num), name(name)
    {
        cout<<"TestElement custom constructor"<<endl;
    }

    TestElement(const TestElement& other)
        : num(other.num), name(other.name)
    {
        cout << "TestElement copy constructor" << endl;
    }

    TestElement(TestElement&& other) noexcept
        : num(other.num), name(other.name)
    {
        cout<<"TestElement move constructor"<<endl;
        other.num = 0;
        other.name = "";
    }

    TestElement& operator=(const TestElement& other)
    {
        cout<<"TestElement copy assignment"<<endl;
        if(&other != this)
        {
            this->num = other.num;
            this->name = other.name;
        }
        return *this;
    }

    TestElement& operator=(TestElement&& other)
    {
        cout << "TestElement move assignment" << endl;
        if(&other != this)
        {
            this->num = other.num;
            this->name = other.name;
            other.num = 0;
            other.name = "";
        }
        return *this;
    }
public:
    int num;
    string name;
};

#endif // !__TEST_ELEMENT__H_

