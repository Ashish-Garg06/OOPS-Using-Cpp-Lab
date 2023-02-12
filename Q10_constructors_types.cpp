#include <iostream>
using namespace std;

class rectangle
{
    private:
        int length, breadth;
    public:
        rectangle(void);
        
        void getdata(void);
        void setdata(int a, int b);
        int getarea(void);

};

int main()
{
    rectangle x;
    x.getdata();
    x.setdata(245,20);
    x.getdata();

    cout <<x.getarea();

    return 0;
}

rectangle::rectangle(void)
{
    length=0;
    breadth=0;
}

void rectangle::getdata(void)
{
    cout<<"length : "<<length<<"\n";
    cout<<"breadth : "<<breadth<<"\n";
}

void rectangle::setdata(int a, int b)
{
    length=a;
    breadth=b;
}

int rectangle::getarea(void)
{
    return (length*breadth);
}