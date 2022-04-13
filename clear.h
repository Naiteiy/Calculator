#pragma once
#ifndef _CLEAR_H_
#define _CLEAR_H_
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vadefs.h>
#include "variable.h"
void clear() {
	cleardevice();
	Q = 0;
	r = 0;
	Fl = 0;
	P1 = 0;
	P2 = 0;
	Pc = 0;
	Pv = 0;
	Kv = 0;
	t = 0;
	S = 0;
	Qmax = 0;
	Qmin = 0;
	if (n == 1) {
		setfillcolor(WHITE);
		fillrectangle(95, 0, 185, 30);
		fillrectangle(190, 0, 280, 30);
		outtextxy(120, 8, choose2);
		outtextxy(215, 8, choose3);
		setfillcolor(YELLOW);
		fillrectangle(0, 0, 90, 30);
		outtextxy(25, 8, choose1);
		n = 1;
		rectangle(0, 0, 90, 30);
		outtextxy(25, 8, choose1);
		rectangle(95, 0, 185, 30);
		outtextxy(120, 8, choose2);
		rectangle(190, 0, 280, 30);
		outtextxy(215, 8, choose3);

		outtextxy(90, 100, inputQ);
		rectangle(230, 100, 270, 120);
		outtextxy(235, 102, please);

		outtextxy(90, 140, inputr);
		rectangle(230, 140, 270, 160);
		outtextxy(235, 142, please);

		outtextxy(90, 180, inputFl);
		rectangle(230, 180, 270, 200);
		outtextxy(235, 182, please);

		outtextxy(90, 220, inputP1);
		rectangle(230, 220, 270, 240);
		outtextxy(235, 222, please);

		outtextxy(90, 260, inputP2);
		rectangle(230, 260, 270, 280);
		outtextxy(235, 262, please);

		outtextxy(90, 300, inputPc);
		rectangle(230, 300, 270, 320);
		outtextxy(235, 302, please);

		outtextxy(90, 340, inputPv);
		rectangle(230, 340, 270, 360);
		outtextxy(235, 342, please);

		rectangle(360, 360, 420, 420);
		outtextxy(374, 380, jisuan);
		rectangle(440, 360, 500, 420);
		outtextxy(454, 380, allclear);
		outtextxy(90, 380, out);
	}
	if (n == 2) {
		setfillcolor(WHITE);
		fillrectangle(0, 0, 90, 30);
		fillrectangle(190, 0, 280, 30);
		outtextxy(25, 8, choose1);
		outtextxy(215, 8, choose3);
		setfillcolor(YELLOW);
		fillrectangle(95, 0, 185, 30);
		outtextxy(120, 8, choose2);
		n = 2;
		rectangle(0, 0, 90, 30);

		outtextxy(25, 8, choose1);
		rectangle(95, 0, 185, 30);
		outtextxy(120, 8, choose2);
		rectangle(190, 0, 280, 30);
		outtextxy(215, 8, choose3);


		outtextxy(90, 100, inputQ2);
		rectangle(230, 100, 270, 120);
		outtextxy(235, 102, please);

		outtextxy(90, 140, inputr2);
		rectangle(230, 140, 270, 160);
		outtextxy(235, 142, please);

		outtextxy(90, 180, inputFl2);
		rectangle(230, 180, 270, 200);
		outtextxy(235, 182, please);

		outtextxy(90, 220, inputP12);
		rectangle(230, 220, 270, 240);
		outtextxy(235, 222, please);

		outtextxy(90, 260, inputP22);
		rectangle(230, 260, 270, 280);
		outtextxy(235, 262, please);

		outtextxy(90, 300, inputt);
		rectangle(230, 300, 270, 320);
		outtextxy(235, 302, please);

		rectangle(360, 360, 420, 420);
		outtextxy(374, 380, jisuan);
		rectangle(440, 360, 500, 420);
		outtextxy(454, 380, allclear);
		outtextxy(90, 380, out);
	}
	if (n == 3) {
		cleardevice();
		setfillcolor(WHITE);
		fillrectangle(0, 0, 90, 30);
		fillrectangle(95, 0, 185, 30);
		outtextxy(25, 8, choose1);
		outtextxy(120, 8, choose2);
		setfillcolor(YELLOW);
		fillrectangle(190, 0, 280, 30);
		outtextxy(215, 8, choose3);
		n = 3;
		rectangle(0, 0, 90, 30);
		outtextxy(25, 8, choose1);
		rectangle(95, 0, 185, 30);
		outtextxy(120, 8, choose2);
		rectangle(190, 0, 280, 30);
		outtextxy(215, 8, choose3);


		outtextxy(90, 100, inputQ);
		rectangle(230, 100, 270, 120);
		outtextxy(235, 102, please);

		outtextxy(90, 140, inputKv);
		rectangle(230, 140, 270, 160);
		outtextxy(235, 142, please);

		outtextxy(90, 180, inputQmax);
		rectangle(230, 180, 270, 200);
		outtextxy(235, 182, please);

		outtextxy(90, 220, inputQmin);
		rectangle(230, 220, 270, 240);
		outtextxy(235, 222, please);



		rectangle(360, 360, 420, 420);
		outtextxy(374, 380, jisuan);
		rectangle(440, 360, 500, 420);
		outtextxy(454, 380, allclear);
		outtextxy(90, 380, out2);
	}
}
#endif // !_clear_h_