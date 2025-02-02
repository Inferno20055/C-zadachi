#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int SIZE = 10; 
const int SHIP_COUNT = 7; 
char playerField[SIZE][SIZE]; 
char computerField[SIZE][SIZE]; 

// Функция для инициализации поля
void initializeField(char field[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            field[i][j] = '.';
}

// Функция для отображения поля
void displayField(char field[SIZE][SIZE], bool revealEnemyShips = false) {
    cout << "  ";
    for (int i = 0; i < SIZE; ++i)
        cout << i << ' ';
    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << i << ' ';
        for (int j = 0; j < SIZE; ++j) {
            if (field[i][j] == 'I' && !revealEnemyShips) {
                cout << '.'; 
            }
            else {
                cout << field[i][j];
            }
            cout << ' ';
        }
        cout << endl;
    }
}

// Функция для расстановки кораблей игрока
void placePlayerShips() {
    int x, y;
    for (int i = 0; i < SHIP_COUNT; ++i) {
        do {
            cout << "Введите координаты для корабля " << (i + 1) << " (x y): ";
            cin >> x >> y;
        } while (x < 0 || x >= SIZE || y < 0 || y >= SIZE || playerField[x][y] == 'I');
        playerField[x][y] = 'I';
    }
}

// Функция для расстановки кораблей компьютера
void placeComputerShips() {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < SHIP_COUNT; ++i) {
        int x, y;
        do {
            x = rand() % SIZE;
            y = rand() % SIZE;
        } while (computerField[x][y] == 'I');
        computerField[x][y] = 'I';
    }
}

// Функция для стрельбы
bool shoot(char field[SIZE][SIZE], int x, int y) {
    if (field[x][y] == 'I') {
        field[x][y] = 'X'; // Попадание
        return true;
    }
    else if (field[x][y] == '.') {
        field[x][y] = 'O'; // Промах
        return false;
    }
    return false; 
}

// Функция для проверки оставшихся кораблей
bool areShipsAlive(char field[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (field[i][j] == 'I')
                return true;
    return false;
}

// Функция для игрового процесса между игроком и компьютером
void playerVsComputer() {
    placePlayerShips();
    placeComputerShips();

   
    while (areShipsAlive(playerField) && areShipsAlive(computerField)) {
        int x, y;

        // Ход игрока
        cout << "\nВаше поле:\n";
        displayField(playerField,true);
        cout << "Поле компьютера:\n";
        displayField(computerField, false); // Скрываем корабли противника

        do {
            cout << "Введите координаты для выстрела (x y): ";
            cin >> x >> y;
        } while (x < 0 || x >= SIZE || y < 0 || y >= SIZE);

        if (shoot(computerField, x, y)) {
            cout << "Попадание!" << endl;
        }
        else {
            cout << "Промах!" << endl;
        }

        // Ход компьютера
        if (areShipsAlive(computerField)) {
            x = rand() % SIZE;
            y = rand() % SIZE;
            cout << "Компьютер стреляет в " << x << " " << y << endl;

            if (shoot(playerField, x, y)) {
                cout << "Компьютер попал!" << endl;
            }
            else {
                cout << "Компьютер промахнулся!" << endl;
            }
        }
    }

    // Объявление победителя
    if (areShipsAlive(computerField)) {
        cout << "Компьютер победил!" << endl;
    }
    else {
        cout << "Вы победили!" << endl;
    }
}

void computerVsComputer() {
    placeComputerShips(); 
    placeComputerShips(); 

    while (areShipsAlive(computerField)) {
        int x, y;

        do {
            x = rand() % SIZE;
            y = rand() % SIZE;
        } while (computerField[x][y] == 'X' || computerField[x][y] == 'O'); 

        cout << "Компьютер 1 стреляет в " << x << " " << y << endl;

        if (shoot(computerField, x, y)) {
            cout << "Компьютер 1 попал!" << endl;
        }
        else {
            cout << "Компьютер 1 промахнулся!" << endl;
        }

        // Показ состояния поля компьютера 2
        cout << "\nПоле компьютера 2:\n";
        displayField(computerField, false); 

        // Проверяем, не победил ли компьютер 1
        if (!areShipsAlive(computerField)) {
            cout << "Компьютер 1 победил!" << endl;
            break;
        }

        // Ход второго компьютера
        do {
            x = rand() % SIZE;
            y = rand() % SIZE;
        } while (computerField[x][y] == 'X' || computerField[x][y] == 'O'); 

        cout << "Компьютер 2 стреляет в " << x << " " << y << endl;

        if (shoot(playerField, x, y)) {
            cout << "Компьютер 2 попал!" << endl;
        }
        else {
            cout << "Компьютер 2 промахнулся!" << endl;
        }

        // Показ состояния поля компьютера 1
        cout << "\nПоле компьютера 1:\n";
        displayField(playerField, false); 
    }
}

int main() {
    setlocale(LC_ALL,"ru");
    int mode;
        cout << "Добро пожаловать в игру 'Морской бой'!" << endl;
        cout << "Выберите режим:\n1 - Игрок против компьютера\n2 - Компьютер против компьютера\n";
        cin >> mode;

        // Инициализируем поля
        initializeField(playerField);
        initializeField(computerField);

        if (mode == 1) {
            playerVsComputer(); // Игрок против компьютера
        }
        else if (mode == 2) {
            computerVsComputer(); // Компьютер против компьютера
        }
        else {
            cout << "Неверный режим игры!" << endl;
        }

    
    return 0;
}