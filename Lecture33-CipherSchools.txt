//1 Method Overloading:- 

#include<iostream>
using namespace std;

class Coordinate
{
    public:

    float a;
    float b;

    public:

    void sqdistancefromcoordinate(float a)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
    void sqdistancefromcoordinate(float a, float b)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
    void sqdistancefromcoordinate(float a, float b, float c)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
};

int main()
{
    Coordinate x;
    x.a = 3;
    x.b = 4;
    x.sqdistancefromcoordinate(0);

    return 0;
}

//2 Operator Overloading:- 

#include<iostream>
using namespace std;

class Coordinate
{
    public:

    float a;
    float b;

    public:

    Coordinate operator+(Coordinate const & obj)
    {
        Coordinate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;

        return z;
    }
    void sqdistancefromcoordinate(float a)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
    void sqdistancefromcoordinate(float a, float b)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
    void sqdistancefromcoordinate(float a, float b, float c)
    {
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist<<endl;
    }
};

int main()
{
    Coordinate x;
    x.a = 3;
    x.b = 4;
    x.sqdistancefromcoordinate(0);

    Coordinate y;
    y.a = 5;
    y.b = 6;

    Coordinate z;
    z = x + y;
    z = x - y;

    cout<<"The coordinates after addition are "<<z.a<<" "<<z.b<<endl;
    return 0;
}
