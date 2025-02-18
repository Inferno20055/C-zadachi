#include <string>
#include <cmath>
#include <iostream>
#include "Elevator.h"
#include "Wallpaper.h"
#include "Komnata.h"
#include"Kvartira.h"
using namespace std;
const int Max_rooms = 10;
const int Max_wallpaper = 20;
void Elevator::TurnOn() {
	elevatorstatus = true;
	cout << "Лифт включён" << endl;
}
void Elevator::TurnOf() {
	elevatorstatus = false;
	cout << "Лифт выключeн" << endl;
}
void Elevator::callElevator(int floor) {
	if (floor<lowerflour || floor>upperflour)
	{
		cout << "";
		return ;
	}
	if (!elevatorstatus)
	{
		cout << "Включите лифт перед использованием";
		return;
	}
	currentfloor = floor;
}
int main()
{
	setlocale(LC_ALL,"Ru");
	Elevator elevator{ 1, 10 };
	elevator.TurnOn();
	elevator.callElevator(5);
	cout << "текущий этаж " << elevator.getcurentfloor() << endl;

	elevator.callElevator(11);
	elevator.callElevator(3);
	elevator.TurnOf();
	elevator.callElevator(2);
	return 0;
}
