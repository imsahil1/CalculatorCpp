#include <iostream>
#include <cstdlib>
using namespace std;


class Operations{

    public:
        int add(int x, int y);
        int sub(int x, int y);
        int multiply(int x, int y);
        int divide(int x, int y);
    
};

int Operations::add(int x, int y)
{
    return x+y;
}
int Operations::sub(int x, int y)
{
    return x-y;
}
int Operations::multiply(int x, int y)
{
    return x*y;
}
int Operations::divide(int x, int y)
{
    return x/y;
}

void run(int argc, char *argv[])
{
 int int1, int2;
    char *oper;

    if(argc<4)
        cerr<<"Please provide An intiger as Command Line Values: ";
    
    else
    {
        int1 = atoi(argv[1]);
        oper = argv[2];
        int2 = atoi(argv[3]);
    }
    double result;
    Operations a;

    if(*oper == '+')
        cout<< a.add(int1,int2)<<endl;
    else if(*oper == '-')
        cout<< a.sub(int1, int2)<<endl;
    else if(*oper == '*')
        cout<<a.multiply(int1, int2)<<endl;
    else if(*oper == '/')
        cout<< a.divide(int1, int2)<<endl;
    else
        cout<<"Enter a valid Operation"<<endl;

}

int main(int argc, char *argv[]){
    
   run( argc,  argv);
}