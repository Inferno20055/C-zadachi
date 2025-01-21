#include <iostream>
using namespace std;

struct Film
{
    char movie[50];
    char producer[50];
    char genre[90];
    float rating;
    float price;
};

// Поиск по названию  
bool NameSearch(Film film[], char user[], int length)
{
    bool flag = false;
    for (int i = 0; i < length; i++)
    {
        if (strstr(film[i].movie, user) != NULL)
        {
            cout << film[i].movie << " ";
            flag = true;
            break;
        }
    }
    return flag;
}

// Поиск по жанру  
void GenreSearch(Film film[], char user[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (strstr(film[i].genre, user) != NULL)
        {
            cout << film[i].movie << " ";
        }
    }
}

// Поиск по продюсеру 
void ProdSearch(Film film[], char user[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (strstr(film[i].producer, user) != NULL)
        {
            cout << film[i].movie << " ";
        }
    }
}

// Поиск по рейтингу 
void RatingSearch(Film film[], float userRating, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (film[i].rating >= userRating)
        {
            cout << film[i].movie << " ";
        }
    }
}

void inscription(Film pat)
{
    cout << " " << endl;
    cout << "Название: " << pat.movie << endl;
    cout << "Продюсер: " << pat.producer << endl;
    cout << "Жанр: " << pat.genre << endl;
    cout << "Рейтинг: " << pat.rating << endl;
    cout << "Цена: " << pat.price << endl;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    const int length = 4;
    Film a[length] = {
        {"Interstellar", "Jonathan Nolan", "fantasy, drama, adventure", 8.7, 1200},
        {"No Man's Land", "Benji Taylor", "action", 6.6, 240},
        {"Angry Birds", "Clay Katis, Fergal Reilly", "family, adventure, comedy, action, cartoon", 6.3, 500},
        {"ABC", "Rain Gosling", "fantasy", 7.6, 600}
    };

    int move1;
    cout << "Поиск по названию (1)" << endl;
    cout << "Поиск по жанру (2)" << endl;
    cout << "Поиск по продюсеру (3)" << endl;
    cout << "Поиск по рейтингу (4)" << endl;
    cout << "Показать все фильмы (5)" << endl;
    cout << "Выберите способ поиска (от 1 до 5): ";
    cin >> move1;

    switch (move1)
    {
    case 1:
        char user1[70];
        cout << "Введите название фильма: ";
        cin >> user1;

        if (NameSearch(a, user1, length))
        {
            cout << "(Фильм существует)\n" << endl;
        }
        else
        {
            cout << "(Фильм не существует)\n" << endl;
        }
        break;

    case 2:
        char user2[70];
        cout << "Введите жанр произведения (на английском): ";
        cin >> user2;
        GenreSearch(a, user2, length);
        cout << endl;
        break;

    case 3:
        char user3[50];
        cout << "Введите продюсера фильма (на английском): ";
        cin >> user3;
        ProdSearch(a, user3, length);
        cout << endl;
        break;

    case 4:
        float userRating;
        cout << "Введите минимальный рейтинг фильма: ";
        cin >> userRating;
        RatingSearch(a, userRating, length);
        cout << endl;
        break;

    case 5:
        for (int i = 0; i < length; i++)
            inscription(a[i]);
        break;

    default:
        cout << "Неверный выбор." << endl;
        break;
    }

    return 0;
}