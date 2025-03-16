#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <random>

using namespace std;

// Values

double Coins = 0;
bool MinasDebloqueadas[5] = { true, false, false, false , false};
bool Debounce = true;

void Shop();
void MainMenu();

void Mine1();
void Mine2();
void Mine3();
void Mine4();
void Mine5();

void Minar(int Mine) {

    system("cls");

    if (Mine == 1) {
        cout << endl;
        cout << "Minning...\n";
        Sleep(2000);
        system("cls");
        cout << endl;
        srand(std::time(0));
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> distrib(1.0, 20.0);
        double numeroAleatorio = distrib(gen);
		Coins = Coins + numeroAleatorio;
		cout << "You have mined " << numeroAleatorio << " coins\n";
		cout << "You have " << Coins << " coins\n";
        Sleep(1500);
        Mine1();
    }
    if (Mine == 2) {
        cout << endl;
        cout << "Minning...\n";
        Sleep(2000);
        system("cls");
        cout << endl;
        srand(std::time(0));
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> distrib(10.0, 50.0);
        double numeroAleatorio = distrib(gen);
        Coins = Coins + numeroAleatorio;
        cout << "You have mined " << numeroAleatorio << " coins\n";
        cout << "You have " << Coins << " coins\n";
        Sleep(1500);
        Mine2();
    }
    if (Mine == 3) {
        cout << endl;
        cout << "Minning...\n";
        Sleep(2000);
        system("cls");
        cout << endl;
        srand(std::time(0));
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> distrib(30.0, 110.0);
        double numeroAleatorio = distrib(gen);
        Coins = Coins + numeroAleatorio;
        cout << "You have mined " << numeroAleatorio << " coins\n";
        cout << "You have " << Coins << " coins\n";
        Sleep(1500);
        Mine3();
    }
    if (Mine == 4) {
        cout << endl;
        cout << "Minning...\n";
        Sleep(2000);
        system("cls");
        cout << endl;
        srand(std::time(0));
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> distrib(50.0, 220.0);
        double numeroAleatorio = distrib(gen);
        Coins = Coins + numeroAleatorio;
        cout << "You have mined " << numeroAleatorio << " coins\n";
        cout << "You have " << Coins << " coins\n";
        Sleep(1500);
        Mine4();
    }
    if (Mine == 5) {
        cout << endl;
        cout << "Minning...\n";
        Sleep(2000);
        system("cls");
        cout << endl;
        srand(std::time(0));
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> distrib(100.0, 440.0);
        double numeroAleatorio = distrib(gen);
        Coins = Coins + numeroAleatorio;
        cout << "You have mined " << numeroAleatorio << " coins\n";
        cout << "You have " << Coins << " coins\n";
        Sleep(1500);
        Mine5();
    }
}

void Mine1() {

    Debounce = true;
    system("cls");
    cout << "Mine 1\n";
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mining (press: 1)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Minar(1);
            break;
        }
        Sleep(10);
    }
}

void Mine2() {

    Debounce = true;
    system("cls");
    cout << "Mine 2\n";
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mining (press: 1)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Minar(2);
            break;
        }
        Sleep(10);
    }
}

void Mine3() {

    Debounce = true;
    system("cls");
    cout << "Mine 3\n";
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mining (press: 1)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Minar(3);
            break;
        }
        Sleep(10);
    }
}

void Mine4() {

    Debounce = true;
    system("cls");
    cout << "Mine 4\n";
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mining (press: 1)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Minar(4);
            break;
        }
        Sleep(10);
    }
}

void Mine5() {

    Debounce = true;
    system("cls");
    cout << "Mine 5\n";
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mining (press: 1)\n";

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Minar(5);
            break;
        }
        Sleep(10);
    }
}

void Mine() {

    Debounce = true;
    system("cls");
    cout << "Enter a mine\n";

    int algunaDesbloqueada = 0;

    cout << endl;
    cout << "Main Menu (press: 0)\n";

    for (int i = 0; i < sizeof(MinasDebloqueadas) / sizeof(MinasDebloqueadas[0]); i++) {
        if (MinasDebloqueadas[i]) {
            cout << endl;
            cout << "Mine" << (i + 1) << " (press: " << (i + 1) << ")\n";
            algunaDesbloqueada++; 
        }
    }

    if (algunaDesbloqueada < 5) {
        cout << endl;
        cout << "(locked)\n";
    }

    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and MinasDebloqueadas[0] == true and Debounce) {
            Debounce = false;
            Mine1();
            break;
        }
        if (tecla == 50 and MinasDebloqueadas[1] == true and Debounce) {
            Debounce = false;
            Mine2();
            break;
        }
        if (tecla == 51 and MinasDebloqueadas[2] == true and Debounce) {
            Debounce = false;
            Mine3();
            break;
        }
        if (tecla == 52 and MinasDebloqueadas[3] == true and Debounce) {
            Debounce = false;
            Mine4();
            break;
        }
        if (tecla == 53 and MinasDebloqueadas[4] == true and Debounce) {
            Debounce = false;
            Mine5();
            break;
        }
        Sleep(10);
    }

}

void Shopping() {

    Debounce = true;
    system("cls");
    cout << endl;
    cout << "Buying...\n";
    Sleep(2000);
	system("cls");
    cout << endl;
    cout << "Successful purchase\n";
    Sleep(1000);
    Shop();

}

void Shop() {

    Debounce = true;
    system("cls");
    cout << "Shop Coins: " << Coins << endl;
    cout << endl;
    cout << "Main Menu (press: 0)\n";
    cout << endl;
    cout << "Mine 1 (unlocked)\n";

	if (MinasDebloqueadas[1] == false) {
		cout << endl;
		cout << "Unlock Mine 2 price: 150 (press: 1)\n";
	}
    else
    {
		cout << endl;
		cout << "Mine 2 (unlocked)\n";
    }

    if (MinasDebloqueadas[2] == false) {
        cout << endl;
        cout << "Unlock Mine 3 price: 300 (press: 2)\n";
    }
    else
    {
        cout << endl;
        cout << "Mine 3 (unlocked)\n";
    }

    if (MinasDebloqueadas[3] == false) {
        cout << endl;
        cout << "Unlock Mine 4 price: 600 (press: 3)\n";
    }
    else
    {
        cout << endl;
        cout << "Mine 4 (unlocked)\n";
    }

    if (MinasDebloqueadas[4] == false) {
        cout << endl;
        cout << "Unlock Mine 5 price: 1200 (press: 4)\n";
    }
    else
    {
        cout << endl;
        cout << "Mine 5 (unlocked)\n";
    }


    while (true) {
        char tecla = _getch();
        if (tecla == 48 and Debounce) {
            Debounce = false;
            MainMenu();
            break;
        }
        if (tecla == 49 and MinasDebloqueadas[1] == false and Coins >= 150 and Debounce) {
            Debounce = false;
            Coins = Coins - 150;
			MinasDebloqueadas[1] = true;
            Shopping();
            break;
        }
        if (tecla == 50 and MinasDebloqueadas[2] == false and Coins >= 300 and Debounce) {
            Debounce = false;
            Coins = Coins - 300;
            MinasDebloqueadas[2] = true;
            Shopping();
            break;
        }
        if (tecla == 51 and MinasDebloqueadas[3] == false and Coins >= 600 and Debounce) {
            Debounce = false;
            Coins = Coins - 600;
            MinasDebloqueadas[3] = true;
            Shopping();
            break;
        }
        if (tecla == 52 and MinasDebloqueadas[4] == false and Coins >= 1200 and Debounce) {
            Debounce = false;
            Coins = Coins - 1200;
            MinasDebloqueadas[4] = true;
            Shopping();
            break;
        }
        Sleep(10);
    }
}

void MainMenu() {

    Debounce = true;
    system("cls");
    cout << "Main Menu\n";
    cout << endl;
    cout << "Mine (press: 1)\n";
    cout << endl;
    cout << "Shop (press: 2)\n";
    cout << endl;
    cout << "Coming Soon\n";
    while (true) {
        char tecla = _getch();
        if (tecla == 49 and Debounce) {
            Debounce = false;
            Mine();
            break;
        }
        if (tecla == 50 and Debounce) {
            Debounce = false;
            Shop();
            break;
        }
        Sleep(10);
    }
}

int main()
{

	bool MinasDebloqueadas[2] = { true, false };

    cout << "welcome to digging simulator\n";
	cout << "press any key to start\n";
    _getch();

    MainMenu();
}

