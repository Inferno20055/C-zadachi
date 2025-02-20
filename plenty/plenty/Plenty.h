#pragma once
using namespace std;
#include <iostream>

class Plenty {
private:
    int* elements;   
    int size;       
    int capacity;    

    // ���������� ������� �������
    void resize(int newCapacity) {
        int* newElements = new int[newCapacity];
        for (int i = 0; i < size; ++i) {
            newElements[i] = elements[i];
        }
        delete[] elements;
        elements = newElements;
        capacity = newCapacity;
    }

    // �������� �� ������� �������� � ���������
    bool contains(int element) const {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                return true;
            }
        }
        return false;
    }

public:
    //��� �������� ������� ���������
    // ����������� �� ���������
    Plenty() : size(0), capacity(10) {
        elements = new int[capacity];
    }

    // ����������� � ��������
    Plenty(const int* arr, int arrSize) : size(0), capacity(arrSize > 0 ? arrSize : 10) {
        elements = new int[capacity];
        for (int i = 0; i < arrSize; ++i) {
            *this += arr[i]; 
        }
    }
    // ����������
    ~Plenty() {
        delete[] elements;
    }

    // �������� ���������� ��������
    Plenty& operator+=(int element) {
        if (!contains(element)) {
            if (size >= capacity) {
                resize(capacity * 2); 
            }
            elements[size++] = element;
        }
        return *this;
    }

    // �������� �������� ��������
    Plenty& operator-=(int element) {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                elements[i] = elements[--size]; 
                break;
            }
        }
        return *this;
    }

    // ����������� ���� ��������
    Plenty operator+(const Plenty& other) const {
        Plenty result = *this;
        for (int i = 0; i < other.size; ++i) {
            result += other.elements[i]; 
        }
        return result;
    }

    // ����������� ��������
    Plenty operator*(const Plenty& other) const {
        Plenty result;
        for (int i = 0; i < size; ++i) {
            if (other.contains(elements[i])) {
                result += elements[i]; 
            }
        }
        return result;
    }
    // �������� ��������
    Plenty operator-(const Plenty& other) const {
        Plenty result = *this;
        for (int i = 0; i < other.size; ++i) {
            result -= other.elements[i];
        }
        return result;
    }
    //������������
    Plenty& operator=(const Plenty& other) {
        if (this!=&other)
        {
            delete[]elements;
        }
    
    }
    //��������� ��������
   
    //�����/����

};

