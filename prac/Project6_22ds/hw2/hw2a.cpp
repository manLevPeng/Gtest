﻿//B835009 고예령 컴퓨터공학과 4학년
#include<iostream>
using namespace std;
#include "polya.h"
int main()
{
	Polynomial p1, p2, p3;

	cin >> p1 >> p2;	//2개의 다항식을 읽어 들인다
	p3 = p1 + p2;
	cout << p1 << p2 << p3;
}