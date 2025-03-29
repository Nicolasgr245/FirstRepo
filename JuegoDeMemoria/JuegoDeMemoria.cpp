#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>
#include <random>

using namespace std;

int Wins = 0;
int Losts = 0;

void MemoryMenu();

long long int generarNumeroAleatorio(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<long long int> distrib(min, max);
    return distrib(gen);
}

void GameMode(int level) {
    system("cls");
    cout << endl;

    for (int i = 3; i > 0; i--) {
        system("cls");
        cout << endl;
        cout << i;
        Sleep(1000);
    }

    long long int numeroAleatorio = 0;
    long long int NumeroSecreto = 0;

    switch (level) {
    case 1:
        numeroAleatorio = generarNumeroAleatorio(1000, 9999);
        break;
    case 2:
        numeroAleatorio = generarNumeroAleatorio(100000, 999999);
        break;
    case 3:
        numeroAleatorio = generarNumeroAleatorio(10000000, 99999999);
        break;
    case 4:
        numeroAleatorio = generarNumeroAleatorio(1000000000, 9999999999);
        break;
    default:
        break;
    }

    for (int i = 5; i > 0; i--) {
        system("cls");
        cout << endl;
        cout << "Secret number: " << numeroAleatorio << endl;
        cout << "Time left: " << i << endl;
        Sleep(1000);
    }

    system("cls");
    cout << endl;
    cout << "type the secret number" << endl;
    cin >> NumeroSecreto;

    system("cls");
    cout << endl;
    if (NumeroSecreto == numeroAleatorio) {
        cout << "Correct";
        Wins = Wins + 1;
    }
    else {
        cout << "Incorrect";
        Losts = Losts + 1;
    }
    Sleep(1500);
    MemoryMenu();

}

void MemoryMenu() {
    system("cls");
    cout << endl;
    cout << "Select difficulty" << endl;
    cout << endl;
    cout << "Easy (Press 1)" << endl;
    cout << endl;
    cout << "Normal (Press 2)" << endl;
    cout << endl;
    cout << "Hard (Press 3)" << endl;
    cout << endl;
    cout << "Master (Press 4)" << endl;

    while (true) {
        char tecla = _getch();
        if (tecla >= '1' && tecla <= '4') {
            GameMode(tecla - '0'); 
            break;
        }
    }
}

void MainMenu() {
    system("cls");
    cout << endl;
    cout << "Game Memory" << endl;
    cout << "You need to remember a random number and then write it down" << endl;
    cout << endl;
    cout << "Start Game (Press 1)" << endl;
    cout << endl;
    cout << "Coming Soon" << endl;

    while (true) {
        char tecla = _getch();
        if (tecla == '1') {
            MemoryMenu();
            break;
        }
    }
}

int main() {
    cout << endl;
    cout << "Press any key to start" << endl;

    while (true) {
        char tecla = _getch();
        if (tecla) {
            MainMenu();
            break;
        }
    }
    return 0;
}