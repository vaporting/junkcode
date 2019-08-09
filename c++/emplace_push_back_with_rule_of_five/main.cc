#include <vector>
#include <iostream>
#include "test_element.h"

using namespace std;

int main()
{
    ////example of custom constructor
    //cout << "ele:" << endl;
    //auto ele = TestElement(123, "first element");

    //// example of copy constructor
    //cout << "ele_1:" << endl;
    //auto ele_1 = ele;

    //// example of copy assignment
    //cout << "ele_2:" << endl;
    //TestElement ele_2;
    //ele_2 = ele; // copy assignment

    //// example of move constructor
    //cout << "ele_3:" << endl;
    //TestElement ele_3 = move(ele_2);

    ////example of move assignment
    //cout << "ele_4:" << endl;
    //TestElement ele_4;
    //ele_4 = move(ele_3);

    vector<TestElement> ele_group;
    cout << "first element:" << endl;
    cout<<"push_back:"<<endl;
    ele_group.push_back(TestElement(1, "first element"));
    cout << "second element:" << endl;
    cout<<"emplace_back:"<<endl;
    ele_group.emplace_back(2, "second element");
    //cout << "third element:" << endl;
    //TestElement third_element = TestElement(3, "third element");
    //cout << "push_back and emplace_back are the same with lvalue." << endl;
    //ele_group.emplace_back(third_element);
    //ele_group.emplace_back(third_element);
    return 0;
}