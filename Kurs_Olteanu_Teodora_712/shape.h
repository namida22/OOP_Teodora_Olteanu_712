//
// Created by Teo on 23.03.2020.
//

#ifndef KURS_OLTEANU_TEODORA_712_SHAPE_H
#define KURS_OLTEANU_TEODORA_712_SHAPE_H
#include <string>
using namespace std;

class shape {
private:
    string name;
    float flache;

public:
    shape(string name, float flache);
    string getName();
    float getFlache();
    void setName(string Name);
    void setFlache(float Flache);
    string stringg();
};


#endif //KURS_OLTEANU_TEODORA_712_SHAPE_H
