#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Wallpaper
{
public:
	string name;
	float width;
	float height;
	double price;
	Wallpaper(string n,float w,float h,float p):name(n),width(w),height(h),price(p) {}
	~Wallpaper() {
	
	}
};

