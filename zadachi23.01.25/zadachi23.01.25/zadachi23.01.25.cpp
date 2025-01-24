#include <iostream>
//название книги, автор, жанр, издательство писать на английском важно!
using namespace std;

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
    cout << "Книги автора \"" << author << "\": " << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].author, author) == 0) {
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
    cout << "Книга с названием \"" << title << "\": " << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].title, title) == 0) {
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
            if (strcmp(books[j].title, books[j + 1].title) > 0) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

// Функция для сортировки книг по автору
void sortByAuthorNames(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].author, books[j + 1].author) > 0) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

// Функция для сортировки книг по издательству
void sortByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].publisher, books[j + 1].publisher) > 0) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    //количество книг
    const int NUM_BOOKS = 10;
    Book books[NUM_BOOKS];

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

    printBooks(books, NUM_BOOKS);

    editBook(books[0]);
    printBooks(books, NUM_BOOKS);

    char searchAuthor[50];
    cout << "Введите автора для поиска: ";
    cin.getline(searchAuthor, sizeof(searchAuthor));
    searchByAuthor(books, NUM_BOOKS, searchAuthor);

    char searchTitle[50];
    cout << "Введите название для поиска: ";
    cin.getline(searchTitle, sizeof(searchTitle));
    searchByTitle(books, NUM_BOOKS, searchTitle);

    sortByTitle(books, NUM_BOOKS);
    cout << "Книги отсортированы по названию:\n";
    printBooks(books, NUM_BOOKS);

    sortByAuthorNames(books, NUM_BOOKS);
    cout << "Книги отсортированы по автору:\n";
    printBooks(books, NUM_BOOKS);

    sortByPublisher(books, NUM_BOOKS);
    cout << "Книги отсортированы по издательству:\n";
    printBooks(books, NUM_BOOKS);

    return 0;
}