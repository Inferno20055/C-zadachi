#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include<string>
const int MAX_ABONENTS = 100;
class Phone_book

{
private:
    Abonent* abonents[MAX_ABONENTS];
    int count;

public:
    // �����������
    Phone_book() : count(0) {}

    // ����������
    ~Phone_book() {
        for (int i = 0; i < count; ++i) {
            delete abonents[i];
        }
    }

    // ������� ��� ���������� ��������
    void addAbonent() {
        if (count >= MAX_ABONENTS) {
            cout << "���������� ����� �����!\n";
            return;
        }

        char name[100], home[15], work[15], mobile[15], info[100];
        cout << "������� ���: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
        cout << "������� �������� �������: ";
        cin.getline(home, sizeof(home));
        cout << "������� ������� �������: ";
        cin.getline(work, sizeof(work));
        cout << "������� ��������� �������: ";
        cin.getline(mobile, sizeof(mobile));
        cout << "������� �������������� ����������: ";
        cin.getline(info, sizeof(info));

        abonents[count++] = new Abonent(name, home, work, mobile, info);
    }

    // ������� ��� �������� �������� �� ���
    void removeAbonent(const char* name) {
        for (int i = 0; i < count; ++i) {
            if (strcmp(abonents[i]->getFullName(), name) == 0) {
                delete abonents[i];
                for (int j = i; j < count - 1; ++j) {
                    abonents[j] = abonents[j + 1];
                }
                --count;
                cout << "������� ������.\n";
                return;
            }
        }
        cout << "������� �� ������.\n";
    }

    // ������� ��� ������ �������� �� ���
    void searchAbonent(const char* name) const {
        for (int i = 0; i < count; ++i) {
            if (strcmp(abonents[i]->getFullName(), name) == 0) {
                abonents[i]->display();
                return;
            }
        }
        cout << "������� �� ������.\n";
    }

    // ������� ��� ����������� ���� ���������
    void displayAll() const {
        if (count == 0) {
            cout << "���������� ����� �����.\n";
            return;
        }
        for (int i = 0; i < count; ++i) {
            abonents[i]->display();
            cout << "----------------------\n";
        }
    }

    // ������� ��� ���������� ���� ��������� � ����
    void saveToFile(const char* filename) const {
        FILE* outFile = fopen(filename, "w");
        if (!outFile) {
            cout << "�� ������� ������� ���� ��� ������.\n";
            return;
        }
        for (int i = 0; i < count; ++i) {
            abonents[i]->saveToFile(outFile);
        }
        fclose(outFile);
        cout << "������ ��������� � ����.\n";
    }

    // ������� ��� �������� ��������� �� �����
    void loadFromFile(const char* filename) {
        FILE* inFile = fopen(filename, "r");
        if (!inFile) {
            cout << "�� ������� ������� ���� ��� ������.\n";
            return;
        }
        while (!feof(inFile)) {
            abonents[count++] = new Abonent("", "", "", "", "");
            abonents[count - 1]->loadFromFile(inFile);
        }
        fclose(inFile);
        --count;
        cout << "������ ��������� �� �����.\n";
    }
};

