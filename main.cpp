#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <vadefs.h>
#include "variable.h"
#include "click.h"
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
	setbkcolor(WHITE);
	setbkmode(TRANSPARENT);
	cleardevice();

	

	setlinecolor(BLACK);
	settextcolor(BLACK);

	rectangle(0, 0, 90, 30);
	outtextxy(25, 8, choose1);
	rectangle(95, 0, 185, 30);
	outtextxy(120, 8, choose2);
	rectangle(190, 0, 280, 30);
	outtextxy(215, 8, choose3);
	wchar_t welcome[] = L"欢迎使用调节阀计算器！";

	outtextxy(220, 220, welcome);


	click();

	_getch();				// 按任意键继续
	closegraph();			// 关闭绘图窗口
	return 0;
}