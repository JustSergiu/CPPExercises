// Se citesc doua intervale de timp exprimate in ore, minute si secunde.
// ( h1,m1,s1 pt primul interval si h2,m2,s2 pt al doilea interval)
// Sa se calculeze suma celor doua intervale de timp.
#include<iostream>
using namespace std;
int h1,m1,s1;
int h2,m2,s2;
int hf,mf,sf;
int main()
{
    cout<<"s1= "; cin>>s1;
    cout<<"m1= "; cin>>m1;
    cout<<"h1= "; cin>>h1;
    cout<<"s2= "; cin>>s2;
    cout<<"m2= "; cin>>m2;
    cout<<"h2= "; cin>>h2;
    if(s1>59)
    {
        m1=s1/60+m1;
        s1=s1%60;
    }
    if(m1>59)
    {
            h1=m1/60+h1;
            m1=m1%60;
    }

    if(s2>59)
    {
        m2=(s2/60)+m2;
        s2=s2%60;
    }
    if(m2>59)
    {
            h2=(m2/60)+h2;
            m2=m2%60;
    }
    cout<<h1<<" ore "<<m1<<" minute "<<s1<<" secunde"<<endl;
    cout<<h2<<" ore "<<m2<<" minute "<<s2<<" secunde"<<endl;
    sf=s1+s2;
    mf=m1+m2;
    hf=h1+h2;
    if(sf>59)
    {
        mf=(sf/60)+mf;
        sf=sf%60;
    }
    if(mf>59)
    {
        hf=(mf/60)+hf;
        mf=mf%60;
    }
    cout<<hf<<" ore "<<mf<<" minute "<<sf<<" secunde";
}
