#pragma once
#include <iostream>
using namespace std;

class Plenty
{
private:
    int* elements;
    int size;
    int capacity;

    // Увеличение размера массива
    void resize(int newCapacity) {
        int* newElements = new int[newCapacity];
        for (int i = 0; i < size; ++i) {
            newElements[i] = elements[i];
        }
        delete[] elements;
        elements = newElements;
        capacity = newCapacity;
    }

    // Проверка на наличие элемента в множестве
    bool contains(int element) const {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                return true;
            }
        }
        return false;
    }

public:
    //для создание пустого множества
    // Конструктор по умолчанию
    Plenty() : size(0), capacity(10) {
        elements = new int[capacity];
    }

    // Конструктор с массивом
    Plenty(const int* arr, int arrSize) : size(0), capacity(arrSize > 0 ? arrSize : 10) {
        elements = new int[capacity];
        for (int i = 0; i < arrSize; ++i) {
            *this += arr[i];
        }
    }
    // Деструктор
    ~Plenty() {
        delete[] elements;
    }

    // Оператор добавления элемента
    Plenty& operator+=(int element) {
        if (!contains(element)) {
            if (size >= capacity) {
                resize(capacity * 2);
            }
            elements[size++] = element;
        }
        return *this;
    }

    // Оператор удаления элемента
    Plenty& operator-=(int element) {
        for (int i = 0; i < size; ++i) {
            if (elements[i] == element) {
                elements[i] = elements[--size];
                break;
            }
        }
        return *this;
    }

    // Объединение двух множеств
    Plenty operator+(const Plenty& other) const {
        Plenty result = *this;
        for (int i = 0; i < other.size; ++i) {
            result += other.elements[i];
        }
        return result;
    }

    // Пересечение множеств
    Plenty operator*(const Plenty& other) const {
        Plenty result;
        for (int i = 0; i < size; ++i) {
            if (other.contains(elements[i])) {
                result += elements[i];
            }
        }
        return result;
    }
    // Разность множеств
    Plenty operator-(const Plenty& other) const {
        Plenty result = *this;
        for (int i = 0; i < other.size; ++i) {
            result -= other.elements[i];
        }
        return result;
    }
    // Сравнение множеств
    bool operator==(const Plenty& other) const {
        if (size != other.size) return false;
        for (int i = 0; i < size; ++i) {
            if (!other.contains(elements[i])) return false;
        }
        return true;
    }

    // Присваивание
    Plenty& operator=(const Plenty& other) {
        if (this != &other) {
            delete[] elements;
            size = other.size;
            capacity = other.capacity;
            elements = new int[capacity];
            for (int i = 0; i < size; ++i) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }

    // Ввод/вывод
    friend ostream& operator<<(ostream& os, const Plenty& set) {
        os << "{ ";
        for (int i = 0; i < set.size; ++i) {
            os << set.elements[i];
            if (i < set.size - 1) os << ", ";
        }
        os << " }";
        return os;
    }

    friend istream& operator>>(istream& is, Plenty& set) {
        set = Plenty();
        int value;
        while (is >> value) {
            set += value;
            if (is.peek() == '\n') break;
        }
        return is;
    }

};

