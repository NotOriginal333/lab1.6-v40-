#pragma once
#include <string>

class TimeC
{
	class Triad
	{
		int hour, min, sec;
	public:
		bool Init(int h, int m, int s);
		void Read();
		void Display() const;

		void setHour(int h) { hour = h; };
		void setMin(int m) { min = m; };
		void setSec(int s) { sec = s; };

		int getHour() const { return this->hour; };
		int getMin() const { return this->min; };
		int getSec() const { return this->sec; };

		std::string toString();

		void incremHour();
		void incremMin();
		void incremSec();
	};
	Triad triad;
public:
	bool Init(int, int, int);
	void Read();
	void Display() const;

	void incremHour();
	void incremMin();
	void incremSec();

	void moreMin(int n);
	void moreSec(int n);

	std::string toString();

};

