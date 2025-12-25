#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include "Task4.h"
using namespace std;

void setConsoleColor(const string& color) {
    if (color == "red") {
        system("color 4F"); // красный фон + белый текст
    }
    else if (color == "blue") {
        system("color 1F"); // синий фон + белый текст
    }
    else if (color == "green") {
        system("color 2F"); // зелёный фон + белый текст
    }
    else if (color == "yellow") {
        system("color 6F"); // жёлтый фон + белый текст
    }
    else if (color == "white") {
        system("color 7F"); // белый фон + чёрный текст
    }
    else {
        system("color 0F"); // по умолчанию: чёрный фон + белый текст
    }
}

int main() {
	system("chcp 1251 > null");

    // функция для установки цвета по названию
    string color;
    string holiday;

    ifstream fin("settings.txt"); //Создает объект fin для чтения из файла и открывает файл

    if (fin.is_open()) {// Проверка открытия файла
        // читаем сохраненные данные
        fin >> color >> holiday;// Читает данные из файла (аналогично cin)
        fin.close(); //Закрывает файл и освобождает ресурсы

        setConsoleColor(color);

        cout << "Сохраненные настройки:" << endl;
        cout << "Любимый цвет фона: " << color << endl;
        cout << "Любимый праздник: " << holiday << endl;

        char choice;
        cout << "\nХотите изменить настройки? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            cout << "Введите новый любимый цвет (red, blue, green, yellow, white): ";
            cin >> color;
            cout << "Введите любимый праздник: ";
            cin >> holiday;

            ofstream fout("settings.txt"); //Создает объект fout для записи в файл и открывает файл
            //ofstream fout("settings.txt", ios::app); // Открываем для добавления, если нужно внести еще какие-то параметры в файл ios::app, если не указывать по умолчанию очищает
            fout << color << " " << holiday; //Записывает данные в файл (аналогично cout)
            fout.close();

            cout << "Настройки обновлены!" << endl;
        }
    }
    else {
        // файла нет – вводим новые настройки
        cout << "Введите любимый цвет (red, blue, green, yellow, white): ";
        cin >> color;
        cout << "Введите любимое число: ";
        cin >> holiday;

        ofstream fout("settings.txt");
        fout << color << " " << holiday;
        fout.close();

        cout << "Настройки сохранены!" << endl;
    }
    return 0;
}