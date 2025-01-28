#include <iostream>
using namespace std;
union IntCharArray {
    int number;              
    char charArray[sizeof(int)]; 
};
union Int32 {
    int32_t signedInt;      
    uint32_t unsignedInt;    

    
    Int32(int32_t value) : signedInt(value) {}
};
union IntAndBoolArray {
    int number;                    
    bool boolArray[sizeof(int)];   
};
// Функция для ввода целого числа
void inputInteger(IntCharArray& data) {
    cout << "Введите целое число: ";
    cin >> data.number;
}
void inputIntegering(IntAndBoolArray& data) {
    cout << "Введите целое число: ";
    cin >> data.number;
}
// Функция для просмотра всех байтов числа
void viewAllBytes(const IntCharArray& data) {
    cout << "Байты числа: ";
    for (size_t i = 0; i < sizeof(int); ++i) {
        cout << hex << ((static_cast<int>(data.charArray[i]) & 0xFF) < 16 ? "0" : "")
            << (static_cast<int>(data.charArray[i]) & 0xFF) << " ";
    }
    cout << dec << endl; 
}

// Функция для просмотра выбранного байта числа
void viewSelectedByte(const IntCharArray& data, size_t index) {
    if (index < sizeof(int)) {
        cout << "Байт " << index << ": "
            << hex << ((static_cast<int>(data.charArray[index]) & 0xFF) < 16 ? "0" : "")
            << (static_cast<int>(data.charArray[index]) & 0xFF) << dec << endl;
    }
    else {
        cout << "Индекс вне диапазона." << endl;
    }
}

// Функция для вывода байтов числа в двоичном и шестнадцатеричном виде
void viewBytesInBinaryAndHex(const IntCharArray& data) {
    cout << "Байты числа в двоичном и шестнадцатеричном виде:" << endl;
    for (size_t i = 0; i < sizeof(int); ++i) {
        cout << "Байт " << i << ": ";

        
        for (int j = 7; j >= 0; --j) {
            cout << ((data.charArray[i] >> j) & 1);
        }

        cout << " | " << hex << ((static_cast<int>(data.charArray[i]) & 0xFF) < 16 ? "0" : "")
            << (static_cast<int>(data.charArray[i]) & 0xFF) << dec << endl;
    }
}
int countZeroBytes(const IntAndBoolArray& data) {
    int count = 0;
    for (size_t i = 0; i < sizeof(int); ++i) {
        // Проверяем каждый байт числа; если он равен нулю - увеличиваем счетчик
        if ((data.number >> (i * 8)) & 0xFF == 0) {
            count++;
        }
    }
    return count;
}

// Функция для вывода информации о байтах числа (нулевой, не нулевой)
void displayByteInfo(const IntAndBoolArray& data) {
    cout << "Информация о байтах числа:" << endl;
    for (size_t i = 0; i < sizeof(int); ++i) {
        // Извлекаем байт из числа
        bool isZero = (data.number >> (i * 8)) & 0xFF == 0;
        cout << "Байт " << i << ": " << (isZero ? "нулевой" : "не нулевой") << endl;
    }
}
int main() {
    //задание 1
    setlocale(LC_ALL,"ru");
    /*IntCharArray data;

    inputInteger(data);
    viewAllBytes(data);

    size_t index;
    cout << "Введите индекс байта для просмотра: ";
    cin >> index;
    viewSelectedByte(data, index);

    viewBytesInBinaryAndHex(data);*/
    //задание 2
    /*Int32 value(42);

    // Работаем с числом как со знаковым целым
    cout << "Знаковое целое: " << value.signedInt << endl;

    // Теперь работаем с тем же числом как с беззнаковым целым
    value.unsignedInt = 60; 
    cout << "Беззнаковое целое: " << value.unsignedInt << endl;

    // Теперь изменим значение как знаковое
    value.signedInt = -100;
    cout << "Знаковое целое: " << value.signedInt << endl;
    cout << "Беззнаковое целое (после изменения знакового): " << value.unsignedInt << endl;
    */
    //задание 3
    IntAndBoolArray data;

    inputIntegering(data);
    int zeroCount = countZeroBytes(data);
    cout << "Количество нулевых байтов: " << zeroCount << endl;
    displayByteInfo(data);
    return 0;
}