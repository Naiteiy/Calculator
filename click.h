#ifndef _CLICK_H_
#define _CLICK_H_
#include <graphics.h>		// ����ͼ�ο�
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vadefs.h>
#include "variable.h"
#include "do.h"
#include "clear.h"
#include "check.h"
void click() {
	ExMessage m;

	int x = 0;
	int y = 0;


	while (true)
	{
		m = getmessage(EM_MOUSE | EM_KEY);
		switch (m.message)
		{
		case WM_MOUSEMOVE://ʵʱ��ȡ�������
		{
			x = m.x;
			y = m.y;
			break;
		}
		case WM_LBUTTONDOWN: {//���������
			//Һ��
			if (x <= 90 && x >= 0 && y <= 30 && y >= 0) {
				cleardevice();//ˢ��ҳ��
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
			if (x <= 270 && x >= 230 && y <= 120 && y >= 100 && n == 1) {
				wchar_t cQ[10];
				InputBox(cQ, 10, L"������Q:");
				// ���û�����ת��Ϊ����
				Q = _wtof(cQ);//��wcharת��Ϊdouble

			}
			if (x <= 270 && x >= 230 && y <= 160 && y >= 140 && n == 1) {
				wchar_t cr[10];
				InputBox(cr, 10, L"������r:");
				// ���û�����ת��Ϊ����
				r = _wtof(cr);

			}
			if (x <= 270 && x >= 230 && y <= 200 && y >= 180 && n == 1) {
				wchar_t cFl[10];
				InputBox(cFl, 10, L"������Fl:");
				// ���û�����ת��Ϊ����
				Fl = _wtof(cFl);

			}
			if (x <= 270 && x >= 230 && y <= 240 && y >= 220 && n == 1) {
				wchar_t cP1[10];
				InputBox(cP1, 10, L"������P1:");
				// ���û�����ת��Ϊ����
				P1 = _wtof(cP1);

			}
			if (x <= 270 && x >= 230 && y <= 280 && y >= 260 && n == 1) {
				wchar_t cP2[10];
				InputBox(cP2, 10, L"������P2:");
				// ���û�����ת��Ϊ����
				P2 = _wtof(cP2);

			}
			if (x <= 270 && x >= 230 && y <= 320 && y >= 300 && n == 1) {
				wchar_t cPc[10];
				InputBox(cPc, 10, L"������Pc:");
				// ���û�����ת��Ϊ����
				Pc = _wtof(cPc);

			}
			if (x <= 270 && x >= 230 && y <= 360 && y >= 340 && n == 1) {
				wchar_t cPv[10];
				InputBox(cPv, 10, L"������Pv:");
				// ���û�����ת��Ϊ����
				Pv = _wtof(cPv);

			}
			//Һ�����
			if (x <= 420 && x >= 360 && y <= 420 && y >= 360 && n == 1) {
				Kv = water(Q, r, Fl, P1, P2, Pc, Pv);
				TCHAR s[20];

				_stprintf_s(s, _T("%f"), Kv);


				outtextxy(140, 380, s);

			}


			//����
			if (x <= 185 && x >= 95 && y <= 30 && y >= 0) {
				cleardevice();
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
			if (x <= 270 && x >= 230 && y <= 120 && y >= 100 && n == 2) {
				wchar_t cQ[10];
				InputBox(cQ, 10, L"������Qn:");
				// ���û�����ת��Ϊ����
				Q = _wtof(cQ);

			}
			if (x <= 270 && x >= 230 && y <= 160 && y >= 140 && n == 2) {
				wchar_t cr[10];
				InputBox(cr, 10, L"������rn:");
				// ���û�����ת��Ϊ����
				r = _wtof(cr);

			}
			if (x <= 270 && x >= 230 && y <= 200 && y >= 180 && n == 2) {
				wchar_t cFl[10];
				InputBox(cFl, 10, L"������Fl:");
				// ���û�����ת��Ϊ����
				Fl = _wtof(cFl);

			}
			if (x <= 270 && x >= 230 && y <= 240 && y >= 220 && n == 2) {
				wchar_t cP1[10];
				InputBox(cP1, 10, L"������P1:");
				// ���û�����ת��Ϊ����
				P1 = _wtof(cP1);

			}
			if (x <= 270 && x >= 230 && y <= 280 && y >= 260 && n == 2) {
				wchar_t cP2[10];
				InputBox(cP2, 10, L"������P2:");
				// ���û�����ת��Ϊ����
				P2 = _wtof(cP2);

			}
			if (x <= 270 && x >= 230 && y <= 320 && y >= 300 && n == 2) {
				wchar_t ct[10];
				InputBox(ct, 10, L"������t:");
				// ���û�����ת��Ϊ����
				t = _wtof(ct);

			}
			//�������
			if (x <= 420 && x >= 360 && y <= 420 && y >= 360 && n == 2) {
				Kv = gas(Q, r, Fl, P1, P2, t);
				TCHAR s2[20];

				_stprintf_s(s2, _T("%f"), Kv);


				outtextxy(140, 380, s2);

			}


			//�ھ�
			if (x <= 280 && x >= 190 && y <= 30 && y >= 0) {
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

			if (x <= 270 && x >= 230 && y <= 120 && y >= 100 && n == 3) {
				wchar_t cQ[10];
				
				InputBox(cQ, 10, L"������Q:");
				// ���û�����ת��Ϊ����
				Q = _wtof(cQ);

			}
			if (x <= 270 && x >= 230 && y <= 160 && y >= 140 && n == 3) {
				wchar_t cKv[10];
				InputBox(cKv, 10, L"������Kv:");
				// ���û�����ת��Ϊ����
				Kv = _wtof(cKv);

			}
			if (x <= 270 && x >= 230 && y <= 200 && y >= 180 && n == 3) {
				wchar_t cQmax[10];
				InputBox(cQmax, 10, L"������Qmax:");
				// ���û�����ת��Ϊ����
				Qmax = _wtof(cQmax);

			}
			if (x <= 270 && x >= 230 && y <= 240 && y >= 220 && n == 3) {
				wchar_t cQmin[10];
				InputBox(cQmin, 10, L"������Qmin:");
				// ���û�����ת��Ϊ����
				Qmin = _wtof(cQmin);

			}

			//�ھ�����
			if (x <= 420 && x >= 360 && y <= 420 && y >= 360 && n == 3) {
				S = koujing(Q, Kv, Qmax, Qmin);
				TCHAR s3[20];

				_stprintf_s(s3, _T("%f"), S);


				outtextxy(140, 380, s3);

				kaidu();
				ketiaobi();
				check();
				

			}
			if (x <= 500 && x >= 440 && y <= 420 && y >= 360) {
				clear();//�������
			}
			break;
		}



		}
	}
}

#endif // !_click_h_