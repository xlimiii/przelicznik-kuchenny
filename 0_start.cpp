//
//  0_start.cpp
//  "Gotuj z Limk�"
//
//  Created by Dominika Limanowka on 23/01/2019.
//  Copyright � 2019 Dominika Limanowka. All rights reserved.
#include<iostream>
#include <windows.h> 
#include <stdlib.h> 
#include <string>
#include <cstdlib> 
#include <time.h>
#include<fstream>
#include"Nag��wek.h"
using namespace std;

void tytul()
{
	cout << endl;
	cout << "  .g8```bgd              mm                   db" << endl;
	cout << ".dP'     `M              MM                      " << endl;
	cout << "dM'       `   ,pW`Wq.  mmMMmm  `7MM  `7MM   `7MM " << endl;
	cout << "MM           6W'   `Wb   MM      MM    MM     MM " << endl;
	cout << "MM.    `7MMF'8M     M8   MM      MM    MM     MM " << endl;
	cout << "`Mb.     MM  YA.   ,A9   MM      MM    MM     MM " << endl;
	cout << "  ``bmmmdPY   `Ybmd9'    `Mbmo   `Mbod`YML.   MM " << endl;
	cout << "                                           QO MP " << endl;
	cout << "                                           `bmP  " << endl;
	cout << "                  M```MMV " << endl;
	cout << "                  '  AMV  " << endl;
	cout << "                    AMV  " << endl;
	cout << "                   AMV  ," << endl;
	cout << "                  AMMmmmM" << endl;
	cout << endl;
	cout << "`7MMF'      `7MMF'`7MMM.     ,MMF'`7MMF' `YMM'       db      " << endl;
	cout << "  MM          MM    MMMb    dPMM    MM   .M'        ;MM:     " << endl;
	cout << "  MM          MM    M YM   ,M MM    MM .d`,         V^MM.    " << endl;
	cout << "  MM          MM    M  Mb  M' MM    MMMMM.        ,M  `MM    " << endl;
	cout << "  MM      ,   MM    M  YM.P'  MM    MM  VMA       AbmmmqMA   " << endl;
	cout << "  MM     ,M   MM    M  `YM'   MM    MM   `MM.    A'     VML  " << endl;
	cout << ".JMMmmmmMMM .JMML..JML. `'  .JMML..JMML.   MMb..AMA.   .AMMA." << endl;
	cout << "                                                            aA." << endl;
	cout << "                                                            aA.    " << endl;
	Sleep(5000);
	menu();
}
void menu()
{
	system("CLS");
	instrukcja();
	int wybor;
	do {
		system("CLS");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cout << "        `7MMM.     ,MMF'                                 " << endl;
		cout << "          MMMb    dPMM                                   " << endl;
		cout << "          M YM   ,M MM   .gP`Ya  `7MMpMMMb.  `7MM  `7MM  " << endl;
		cout << "          M  Mb  M' MM  ,M'   Yb   MM    MM    MM    MM  " << endl;
		cout << "          M  YM.P'  MM  8M`MMMM    MM    MM    MM    MM  " << endl;
		cout << "          M  `YM'   MM  YM.    ,   MM    MM    MM    MM  " << endl;
		cout << "        .JML. `'  .JMML. `Mbmmd' .JMML  JMML.  `Mbod`YML." << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "1. Przelicznik kulinarny" << endl << "2. Przelicznik foremek" << endl << "3. Wylosuj przepis" << endl;
		cout << "Wpisz cyfre: " << endl;
		cin >> wybor;
		switch (wybor)
		{
		case 1: przel_kulinarny(); break;
		case 2: przel_foremek(); break;
		case 3: losuj_przepis(); break;
		default: {cout << "Cos poszlo nie tak... Sprobuj ponownie" << endl; Sleep(2000); } break;
		}
	} while (wybor < 1 || wybor>3);
}
void instrukcja()
{
	cout << "INSTRUKCJA \n\n";
	cout << "Ten program ma celu ulatwic zycie podczas codziennych i niecodziennych kuchennych podbojow.\n";
	cout << "Jezeli kiedykolwiek zastanawiales sie \"Ile lyzek to 100 gram maki?\" - ten program jest dla Ciebie.\n";
	cout << "Jezeli kiedykolwiek chciales upiec tort majac do dyspozycji tylko blaszke - ten program jest dla Ciebie.\n";
	cout << "Jezeli masz ochote upiec ciasto, lecz nie wiesz jakie - ten program jest dla Ciebie.\n\n";
	cout << "Wcisnij enter, aby przejsc dalej.";
	cin.get();
}