#include<iostream>
using namespace std;
class Base {
    public:
    void display()
    {
        cout<<"Base";
    }
};
int main()
{
    Base b;
    b.display();
    return 0;
}