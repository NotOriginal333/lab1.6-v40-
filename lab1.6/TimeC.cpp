#include "TimeC.h"
#include <iostream>
#include <sstream>

using namespace std;

bool TimeC::Init(int h, int m, int s) {
	if (h <= 23 && h >= 0 && m <= 59 && m >= 0 && s <= 59 && s >= 0) {
		triad.setHour(h);
		triad.setMin(m);
		triad.setSec(s);
		return true;
	}
	else return false;
}

void TimeC::Read() {
	int h, m, s;
	do {
		cout << "Enter hour: ";
		cin >> h;
		cout << "Enter minute: ";
		cin >> m;
		cout << "Enter second: ";
		cin >> s;
	} while (!Init(h, m, s));
}

void TimeC::Display() const {
    cout << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
}

void TimeC::incremHour() {
    triad.incremHour();
}

void TimeC::incremMin() {
    triad.incremMin();
}

void TimeC::incremSec() {
    triad.incremSec();
}

void TimeC::moreMin(int n) {
    triad.setMin(triad.getMin() + n);
}

void TimeC::moreSec(int n) {
    triad.setSec(triad.getSec() + n);
}

std::string TimeC::toString() {
    stringstream sout;
    sout << triad.getHour() << ":" << triad.getMin() << ":" << triad.getSec();
    return sout.str();
}

void TimeC::Triad::incremHour() {
	int tmp = getHour();
	setHour(++tmp);
}

void TimeC::Triad::incremMin() {
	int tmp = getMin();
	setMin(++tmp);
}

void TimeC::Triad::incremSec() {
	int tmp = getSec();
	setSec(++tmp);
}

std::string TimeC::Triad::toString() {
	std::stringstream sout;
	sout << getHour() << ":" << getMin() << ":" << getSec();
	return sout.str();
}

bool TimeC::Triad::Init(int h, int m, int s) {
	if (h <= 23 && h >= 0 && m <= 59 && m >= 0 && s <= 59 && s >= 0) {
		setHour(h);
		setMin(m);
		setSec(s);
		return true;
	}
	else return false;
}

void TimeC::Triad::Read() {
	int h, m, s;
	do {
		cout << "Enter hour: ";
		cin >> h;
		cout << "Enter minute: ";
		cin >> m;
		cout << "Enter second: ";
		cin >> s;
	} while (!Init(h, m, s));

}

void TimeC::Triad::Display() const {
	cout << "h: " << getHour() << "\nm: " << getMin() << "\ns: " << getSec() << endl;
}