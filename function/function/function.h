#ifndef FUNCTION_H
#define FUNCTION_H

#ifdef INTEGER
void FillArrayInt(int* arr, int size);
void ShowArrayInt(const int* arr, int size);
int FindMinInt(const int* arr, int size);
int FindMaxInt(const int* arr, int size);
void SortArrayInt(int* arr, int size);
void EditValueInt(int* arr, int size, int index, int newValue);
#endif

#ifdef DOUBLE
void FillArrayDouble(double* arr, int size);
void ShowArrayDouble(const double* arr, int size);
double FindMinDouble(const double* arr, int size);
double FindMaxDouble(const double* arr, int size);
void SortArrayDouble(double* arr, int size);
void EditValueDouble(double* arr, int size, int index, double newValue);
#endif

#ifdef CHAR
void FillArrayChar(char* arr, int size);
void ShowArrayChar(const char* arr, int size);
char FindMinChar(const char* arr, int size);
char FindMaxChar(const char* arr, int size);
void SortArrayChar(char* arr, int size);
void EditValueChar(char* arr, int size, int index, char newValue);
#endif

#endif // FUNCTION_H