#pragma once
using namespace std;
#include <iostream>
class String
{
private:
    int length;    
    char* str;     

public:
    // Êîíñòðóêòîð ñ ïàðàìåòðîì-ñòðîêîé
    String(const char* s) {
        length = 0;
        while (s[length] != '\0') { 
            length++;
        }
        str = new char[length + 1]; 
        for (int i = 0; i < length; i++) { 
            str[i] = s[i];
        }
        str[length] = '\0'; 
    }

    // Êîíñòðóêòîð ñ ïàðàìåòðîì äëèíà ñòðîêè
    String(int len) {
        length = len;
        str = new char[length + 1]; 
        str[0] = '\0'; 
    }

    // Êîíñòðóêòîð êîïèðîâàíèÿ
    String(const String& other) {
        length = other.length; 
        str = new char[length + 1]; 
        for (int i = 0; i < length; i++) { 
            str[i] = other.str[i];
        }
        str[length] = '\0'; 
    }

    // Äåñòðóêòîð
    ~String() {
        delete[] str;
    }

    // Ìåòîä äëÿ îòîáðàæåíèÿ ñòðîêè íà ýêðàíå
    void display() const {
        cout << str << endl;
        
    }

    // Ñåòòåð, ïðèíèìàþùèé ñòðîêó
    void setString(const char* s) {
        int newLength = 0;
        while (s[newLength] != '\0') { 
            newLength++;
        }

        if (newLength > length) { 
            delete[] str; 
            str = new char[newLength + 1]; 
            length = newLength; 
        }

        for (int i = 0; i < length; i++) { 
            str[i] = s[i];
        }
        str[length] = '\0'; 
    }

    // Ìåòîä äëÿ ïîëó÷åíèÿ äëèíû ñòðîêè
    int getLength() const {
        return length; 
    }
};

