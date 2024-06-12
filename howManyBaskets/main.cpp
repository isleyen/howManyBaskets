#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hangi Öðrenci Kaç Basket Attý?

using namespace std;

int main() {
	srand(time(NULL));
	int sayi;
	cout << "Ankara Universitesi Kas Basket Atti: ";
	cin >> sayi;
	int cemil, suat, yusuf, orhan, furkan, ahmet;
	    cemil = rand() % sayi;
		if (cemil >= 0) {
		cout << "Cemil:" << cemil << endl;
		}

		suat = rand() % (sayi - cemil);
		if (suat >= 0) {
			cout << "Suat:" << suat << endl;
		}

		yusuf = rand() % (sayi - cemil - suat);
		if (yusuf >= 0) {
			cout << "Yusuf:" << yusuf << endl;
		}

		orhan = rand() % (sayi - cemil - suat - yusuf);
		if (orhan >= 0) {
			cout << "Orhan:" << orhan << endl;
		}

		furkan = rand() % (sayi - cemil - suat - yusuf - orhan);
		if (furkan >= 0) {
			cout << "Furkan:" << furkan << endl;
		}

		ahmet = (sayi - cemil - suat - yusuf - orhan - furkan);
		cout << "Ahmet:" << ahmet << endl;
	return 0;

 }