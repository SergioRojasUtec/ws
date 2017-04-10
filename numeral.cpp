
using namespace std

int num(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
        {return n*num(n-1);}
}
