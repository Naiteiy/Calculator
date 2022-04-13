#pragma once
#ifndef _CHECK_H_
#define _CHECK_H_
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vadefs.h>
#include "variable.h"
#include "do.h"
#include "clear.h"
void kaidu() {
	Kmax = Kvmax / Kv;
	Kmin = Kvmin / Kv;
	if (Kmax < 0.9 && Kmin>0.1) {
		hege += 1;
	}
}
void ketiaobi() {
	R = 10 * sqrt(S);
	if (R >= Qmax / Qmin) {
		hege += 1;
	}
}
void check() {
	wchar_t yes[] = L"合格";
	wchar_t no[] = L"不合格";
	if (hege >= 2) {
		outtextxy(90, 420,yes);
	}
	else {
		outtextxy(90, 420, no);
	}
}
#endif // !_check_h_