#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <windows.h>
#include <conio.h>

using namespace std;

void PracticaMenu();


vector<string> russianWords = {
    "привет", "мир", "программа", "клавиатура", "спасибо",
    "компьютер", "язык", "обучение", "практика", "скорость",
    "метод", "система", "информация", "разработка", "алгоритм",
    "код", "функция", "переменная", "строка", "число"
};

string MixWords() {
    // Inicializar semilla aleatoria
    static bool seeded = false;
    if (!seeded) {
        srand(time(0));
        seeded = true;
    }

    // Elegir entre generar una palabra aleatoria o mezclar palabras existentes
    int choice = rand() % 3;

    if (choice == 0 || russianWords.size() < 2) {
        // Devolver una palabra aleatoria simple
        return russianWords[rand() % russianWords.size()];
    }
    else if (choice == 1) {
        // Mezclar dos palabras
        string word1 = russianWords[rand() % russianWords.size()];
        string word2 = russianWords[rand() % russianWords.size()];

        // Mezclar las palabras (tomar mitad de cada una)
        int split1 = word1.length() / 2;
        int split2 = word2.length() / 2;

        return word1.substr(0, split1) + word2.substr(split2);
    }
    else {
        // Mezclar caracteres de varias palabras
        int numWords = 2 + rand() % 3; // 2-4 palabras
        vector<string> selectedWords;

        for (int i = 0; i < numWords; i++) {
            selectedWords.push_back(russianWords[rand() % russianWords.size()]);
        }

        string result;
        int totalLength = 0;
        for (const auto& word : selectedWords) {
            totalLength += word.length();
        }

        // Crear una mezcla de caracteres de todas las palabras
        while (totalLength > 0) {
            int wordIndex = rand() % selectedWords.size();
            if (!selectedWords[wordIndex].empty()) {
                result += selectedWords[wordIndex].back();
                selectedWords[wordIndex].pop_back();
                totalLength--;
            }
        }

        return result;
    }
}


void Practica1() {

    system("cls");
    cout << endl;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string Frase = MixWords();
    string UsuarioFrase;

    cout << Frase << endl;
    cout << endl;
    
    getline(cin, UsuarioFrase);
    if (UsuarioFrase == Frase) {
        system("cls");
        cout << endl;
        cout << "Correct";
    }
    else {
        system("cls");
        cout << endl;
        cout << "Incorrect";
    }
    Sleep(1000);
    PracticaMenu();

}

void PracticaMenu() {

    system("cls");
    cout << endl;
    cout << "Write the words that appear in Russian: \n";
    cout << endl;
    cout << "Start (press 1)\n";
    cout << endl;
    cout << "translates outgoing words into Russian: \n";
    cout << endl;
    cout << "Start (press 2)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == '1') {
            Practica1();
        }
    }

}

int main()
{
    cout << endl;
    cout << "Russian keyboard practice program\n";
    cout << endl;
    cout << "Start practic: (press 1)\n";
    cout << endl;
    cout << "Coming Soon";

    while (true) {
        char tecla = _getch();
        if (tecla == '1') {
            PracticaMenu();
        }
    }
}

