#ifndef _DO_H_
#define _DO_H_
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vadefs.h>
#include "variable.h"
double water(double Q, double r, double Fl, double P1, double P2, double Pc, double Pv) {
	double deltaP =0, deltaPc;
	double truekv;
	if (P2 > P1)
	{
		deltaP = P2 - P1;
	}
	if(P1>P2)
	{
		deltaP = P1 - P2;
	}

	Kv = Q * sqrt((r / deltaP));
	deltaPc = Fl * Fl;

	if (deltaP < deltaPc)
	{
		truekv = Kv;
		printf("Kv=%f\n\n", truekv);
		if (truekv < 0)
		{
			printf("请检查你输入的数据是否有误！\n\n");
		}
	}
	else
	{
		Kv = 0;
		deltaPc = 0;
		if (Pv < 0.5 * P1)
		{
			deltaPc = Fl * Fl * (P1 - Pv);
			Kv = Q * sqrt((r / deltaPc));
		}
		else
		{
			deltaPc = Fl * Fl * (P1 - (0.96 - (0.28 * sqrt((P1 / Pc)))) * Pv);
			Kv = Q * sqrt((r / deltaPc));
		}
		truekv = Kv;
	}
	return truekv;
}
double gas(double Q, double r, double Fl, double P1, double P2, double t) {
	double deltaP =0;
	
	if (P2 > P1)
	{
		deltaP = P2 - P1;
	}
	if(P1>P2)
	{
		deltaP = P1 - P2;
	}
	if ((deltaP / P1) < (0.5 * Fl * Fl)) {
		Kv = (Q / 380) * (sqrt((r * (273 + t) / (deltaP * P1 + deltaP * P2))));
	}
	if ((deltaP / P1) >= (0.5 * Fl * Fl)) {
		Kv = (Q / 330) * sqrt(r * (273 + t)) / (P1 * Fl );
	}
	return Kv;
}
double koujing(double Q, double Kv, double Qmax, double Qmin) {

	Kvmax = Kv / Q * Qmax;
	Kvmin = Kv / Q * Qmin;
	S = (Qmax * Qmax - Qmin * Qmin) /( (Qmin * Qmin * ((Kv * Kv) / ((Kvmin * Kvmin) - 1)) - Qmax * Qmax * ((Kv * Kv) / ((Kvmax * Kvmax) - 1))));
	return S;
}

#endif // !_do_h_