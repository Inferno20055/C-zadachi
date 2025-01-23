#include <iostream>

using namespace std;
int j, i;
// Структура "Книга"
struct Book {
    char title[50];        
    char author[50];       
    char publisher[50];    
    char genre[30];        
};

// Функция для редактирования книги
void editBook(Book& book) {
    cout << "Введите новое название книги: ";
    cin.ignore();
    cin.getline(book.title, sizeof(book.title));

    cout << "Введите нового автора: ";
    cin.getline(book.author, sizeof(book.author));

    cout << "Введите новое издательство: ";
    cin.getline(book.publisher, sizeof(book.publisher));

    cout << "Введите новый жанр: ";
    cin.getline(book.genre, sizeof(book.genre));
}

// Функция для печати всех книг
void printBooks(const Book books[], int size) {
    cout << "Список книг:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Книга " << (i + 1) << ": " << endl;
        cout << "Название: " << books[i].title << endl;
        cout << "Автор: " << books[i].author << endl;
        cout << "Издательство: " << books[i].publisher << endl;
        cout << "Жанр: " << books[i].genre << endl;
        cout << "----------------------" << endl;
    }
}

// Функция для поиска книг по автору
void searchByAuthor(const Book books[], int size, const char* author) {
    cout << "Книги автора \"" << author << "\":" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        bool isMatch = true;
        for (int j = 0; author[j] != '\0' && books[i].author[j] != '\0'; j++) {
            if (books[i].author[j] != author[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch && (books[i].author[author[j]] == '\0' || books[i].author[j] == '\0')) {
            cout << "Название: " << books[i].title << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Книги не найдены." << endl;
    }
}

// Функция для поиска книги по названию
void searchByTitle(const Book books[], int size, const char* title) {
    cout << "Книга с названием \"" << title << "\":" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        bool isMatch = true;
        for (int j = 0; title[j] != '\0' && books[i].title[j] != '\0'; j++) {
            if (books[i].title[j] != title[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch && (books[i].title[title[j]] == '\0' || books[i].title[j] == '\0')) {
            cout << "Автор: " << books[i].author << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Книги не найдены." << endl;
    }
}

// Функция для сортировки книг по названию
void sortByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            bool isLess = false;
            for (int k = 0; books[j].title[k] != '\0' && books[j + 1].title[k] != '\0'; k++) {
                if (books[j].title[k] > books[j + 1].title[k]) {
                    isLess = true;
                    break;
                }
                if (books[j].title[k] < books[j + 1].title[k]) {
                    break;
                }
            }
            if (isLess || (books[j].title[books[j + 1].title[j]] != '\0' && books[j + 1].title[j] == '\0')) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

// Функция для сортировки книг по автору
void sortByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            bool isLess = false;
            for (int k = 0; books[j].author[k] != '\0' && books[j + 1].author[k] != '\0'; k++) {
                if (books[j].author[k] > books[j + 1].author[k]) {
                    isLess = true;
                    break;
                }
                if (books[j].author[k] < books[j + 1].author[k]) {
                    break;
                }
            }
            if (isLess || (books[j].author[books[j + 1].author[j]] != '\0' && books[j + 1].author[j] == '\0')) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

// Функция для сортировки книг по издательству
void sortByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            bool isLess = false;
            for (int k = 0; books[j].publisher[k] != '\0' && books[j + 1].publisher[k] != '\0'; k++) {
                if (books[j].publisher[k] > books[j + 1].publisher[k]) {
                    isLess = true;
                    break;
                }
                if (books[j].publisher[k] < books[j + 1].publisher[k]) {
                    break;
                }
            }
            if (isLess || (books[j].publisher[books[j + 1].publisher[j]] != '\0' && books[j + 1].publisher[j] == '\0')) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL,"Ru");
    const int NUM_BOOKS = 10;
    Book books[NUM_BOOKS];

    // Ввод информации о книгах
    for (int i = 0; i < NUM_BOOKS; i++) {
        cout << "Введите информацию о книге " << (i + 1) << ":\n";
        cout << "Название: ";
        cin.ignore();
        cin.getline(books[i].title, sizeof(books[i].title));

        cout << "Автор: ";
        cin.getline(books[i].author, sizeof(books[i].author));

        cout << "Издательство: ";
        cin.getline(books[i].publisher, sizeof(books[i].publisher));

        cout << "Жанр: ";
        cin.getline(books[i].genre, sizeof(books[i].genre));

        cout << "----------------------\n";
    }

    // Пример использования функций
    printBooks(books, NUM_BOOKS);

    // Редактирование книги
    editBook(books[0]); // Редактируем первую книгу
    printBooks(books, NUM_BOOKS);

    // Поиск книг по автору
    char searchAuthor[50];
    cout << "Введите автора для поиска: ";
    cin.getline(searchAuthor, sizeof(searchAuthor));
    searchByAuthor(books, NUM_BOOKS, searchAuthor);

    // Поиск книги по названию
    char searchTitle[50];
    cout << "Введите название для поиска: ";
    cin.getline(searchTitle, sizeof(searchTitle));
    searchByTitle(books, NUM_BOOKS, searchTitle);

    // Сортировка книг по названию
    sortByTitle(books, NUM_BOOKS);
    cout << "Книги отсортированы по названию:" << endl;
    printBooks(books, NUM_BOOKS);

    // Сортировка книг по автору
    sortByAuthor(books, NUM_BOOKS);
    cout << "Книги отсортированы по автору:" << endl;
    printBooks(books, NUM_BOOKS);

    // Сортировка книг по издательству
    sortByPublisher(books, NUM_BOOKS);
    cout << "Книги отсортированы по издательству:" << endl;
    printBooks(books, NUM_BOOKS);

    return 0;
}