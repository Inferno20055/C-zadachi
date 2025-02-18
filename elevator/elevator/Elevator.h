#pragma once
#include <iostream>
using namespace std;

class Elevator
{
private:
	int currentfloor;
	int lowerflour;
	int upperflour;
	bool elevatorstatus;
public:
	Elevator(int lower,int upper):lowerflour(lower),upperflour(upper),currentfloor(lower), elevatorstatus(false){}
	~Elevator() {}
	void SetRange(int lower, int upper) {
		lowerflour = lower;
		upperflour = upper;
		if (currentfloor<lowerflour)
		{
			currentfloor = lowerflour;
		}
		else if (currentfloor>upperflour)
		{
			currentfloor = upperflour;
		}
	}
	void TurnOn();
	void TurnOf();
	bool Elevatorrunning()const {
		return elevatorstatus;
	}
	int getcurentfloor()const {
		return currentfloor;
	}
	void callElevator(int floor);
		
		

	

};

