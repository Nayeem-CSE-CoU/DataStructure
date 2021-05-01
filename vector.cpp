#include<bits/stdc++.h>
using namespace std;
template<class T>
class Vector
{
private:
    T *ptr;
    int pos=0;
public:
    Vector()
    {
        ptr=new T();

    }
    Vector(int n)
    {
        ptr=new T();
        pos=n;
    }
    Vector(int n,T val)
    {
        ptr=new T();
        for(int i=0;i<n;i++)
        {
            *(ptr+pos)=val;
             pos++;
        }
    }
    void push_back(T n)
    {
        *(ptr+pos)=n;
         pos++;

    }
    void pop_back()
    {
        pos--;
        delete (ptr+pos);
    }

    T const operator [] (int i)const
    {
        
       return *(ptr+i);
         
    }
    T &operator[](int i)
    { 
        return *(ptr+i);
       
    }
    int size()
    {
        return pos;
    }
    T* begin()
    {
        return ptr;
    } 
    T* end()
    {
        return (ptr+pos);
    }

};
int main()
{
    
     Vector<string> sf;
    sf.push_back("kkk");
    sf.push_back("jjj");
    sf.push_back("Nayeem");

    
     for(auto x:sf)
     cout<<x<<" ";
     cout<<endl;

    
    return 0;

}
