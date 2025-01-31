#include<iostream>

class num{
    private:
    static int c;
    int x;
    public:
    void zero(){
        x=0;
    }
    void count(){
        c++;
        x++;
        cout<<"\n Value of c="<< c << "\n address of c ="<< (unsigned)&c;
        cout<<"\n value of x="<< x << "\n address of x="<<(unsigned)&x;
    }
};
int num::c=0;
int main(){
    num obj1, obj2, obj3;
    obj1.zero();
    obj2.zero();
    obj3.zero();
    obj1.count();
    obj2.count();
    obj3.count();
    getch();
}