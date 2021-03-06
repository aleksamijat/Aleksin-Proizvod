#include "dinstring.hpp"

DinString::DinString() {
    len = 0;
    text = NULL;
}

DinString::DinString(const char input[]) {
    len = 0;
    while(input[len] != '\0')
        len++;

    text = new char[len + 1];
    for(int i = 0; i < len; i++)
        text[i] = input[i];

    text[len] = '\0';
}

DinString::DinString(const DinString& ds) {
    len = ds.len;

    text = new char[len + 1];
    for(int i = 0; i < len; i++)
        text[i] = ds.text[i];

    text[len] = '\0';
}

DinString::~DinString() {
    delete[] text;
}

int DinString::length() const {
    return len;
}

char& DinString::operator[] (int i) {
    return text[i];
}

char DinString::operator[] (int i) const {
    return text[i];
}

DinString& DinString::operator=(const DinString& ds) {
    if(this != &ds) {
        delete[] text;
        len = ds.len;
        text = new char[len + 1];
        for (int i = 0; i < len; i++)
            text[i] = ds.text[i];

        text[len] = '\0';
    }

    return *this;
}

DinString& DinString::operator+=(const DinString& ds) {
    int i;
    char *tempText = new char[len + ds.len + 1];
    for (i = 0; i < len; i++)
        tempText[i] = text[i];
    for (i = 0; i < ds.len; i++)
        tempText[len + i] = ds.text[i];
    tempText[len + ds.len] = '\0';

    len += ds.len;

    delete[] text;
    text = tempText;

    return *this;
}

bool operator==(const DinString& ds1, const DinString& ds2){
    if(ds1.len != ds2.len)
        return false;

    for(int i = 0; i < ds1.len; i++)
        if(ds1.text[i] != ds2.text[i])
            return false;

    return true;
}

bool operator!=(const DinString& ds1, const DinString& ds2){
    if(ds1.len != ds2.len)
        return true;

    for(int i = 0; i < ds1.len; i++)
        if(ds1.text[i] != ds2.text[i])
            return true;

    return false;
}

DinString operator+(const DinString& ds1, const DinString& ds2){
    DinString temp;
    temp.len = ds1.len + ds2.len;

    temp.text = new char[temp.len + 1];

    int i;
    for(i = 0; i < ds1.len; i++)
        temp.text[i] = ds1.text[i];

    for(i = 0; i < ds2.len; i++)
        temp.text[ds1.len + i] = ds2.text[i];
    temp.text[temp.len] = '\0';

    return temp;

}



ostream& operator<<(ostream& out, const DinString& ds) {
    if(ds.len > 0)
        out << ds.text;

    return out;
}
