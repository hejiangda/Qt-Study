#include <iostream>
#include "lib001.h"
using namespace std;
class a{
public: a(int bb,int* cc) {
        b=&bb;c=cc;
    }
    void print() {
        printf("%p\n",b);
    }
private:
    int* b;
    int* c;
};

int main()
{
//    Lib001().print("hejiangda");
    int bb=1;
    int cc=2;

    printf("%p\n",&bb);
    a aa(bb,&cc);
    aa.print();
    return 0;
}
