#include <iostream>
#include <vector>
#include <algorithm>
#include "shape.h"
using namespace std;

template <typename T>
struct f{
int x;
    void operator() (T par){ par->setFlache(par->getFlache()*x);
    }
};
void apply(const std::vector<shape*>& vecshape, f<shape*> fshape) {
    cout<<"x: ";cin>>fshape.x;
    for_each(vecshape.begin(), vecshape.end(), fshape);
}

template <typename T>
T add(vector<T> vec, T start, T finish, T anfwert)
{
    int sum =0;
    for(auto i=start;i<finish;i++)
    {
        //cout<<sum<<" ";
        sum = sum+vec[i];
    }
    return sum + anfwert;
}

template <typename T>
auto lambdaa(vector<T> vec, T start, T finish, T anfwert)
{
    auto rez = [](vector<T> vec, T start, T finish, T aufwert){
        int suma=0;
         for(auto i=start;i<finish;i++) {
             suma = suma + vec[i];
         }
         return suma+aufwert;
    };
    return rez(vec,start,finish,anfwert);
}
int main() {
    vector<int> vec = {1,2,3,4,5};
    f<shape*> fshape{};
    vector<shape*> vecshape;
    //const shape *s1= new shape("Kreis",5);
    //const shape *s2= new shape("Dreieck",10);
    vecshape.push_back(new shape("Kreis",5));
    vecshape.push_back(new shape("Dreieck",10));

    apply(vecshape,fshape);
    for (int i =0;i<vecshape.size();i++)                                      
         cout << vecshape.at(i)->stringg() << '\n';

    cout<<"Summe "<<add(vec,0,4,1)<<'\n';
    cout<<"Summe it lambda Fkt "<<lambdaa(vec,0,4,1);
    return 0;
}
