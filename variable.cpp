#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int n = 0,hege=0;
double Q = 0, r = 0, Fl = 0, P1 = 0, P2 = 0, Pc = 0, Pv = 0, Kv = 0, t = 0, Qmax = 0, Qmin = 0, S = 0, Kmax = 0, Kmin = 0, Kvmax = 0, Kvmin = 0, R = 0;
wchar_t choose1[] = L"液体";
wchar_t choose2[] = L"气体";
wchar_t choose3[] = L"口径";
wchar_t please[] = L"input";
wchar_t jisuan[] = L"计算";
wchar_t allclear[] = L"清空";
wchar_t inputQ[] = L"Q（液体流量m3/h）";
wchar_t inputr[] = L"r（液体重度g/cm3）";
wchar_t inputFl[] = L"Fl（压力恢复系数）";
wchar_t inputP1[] = L"P1（阀前压力kpa)";
wchar_t inputP2[] = L"P2（阀后压力kpa）";
wchar_t inputPc[] = L"Pc（临界压力kpa）";
wchar_t inputPv[] = L"Pv（Pv饱和蒸汽压）";
wchar_t inputQ2[] = L"Qn（气体流量m3/h）";
wchar_t inputr2[] = L"rn（液体重度g/L）";
wchar_t inputFl2[] = L"Fl（压力恢复系数）";
wchar_t inputP12[] = L"P1（阀前压力kpa)";
wchar_t inputP22[] = L"P2（阀后压力kpa）";
wchar_t inputt[] = L"t（气体温度kpa）";
wchar_t inputKv[] = L"Kv（流量系数）";
wchar_t inputQmax[] = L"Qmax（最大流量）";
wchar_t inputQmin[] = L"Qmin（最小流量）";
TCHAR out[] = _T("Kv为：");
TCHAR out2[] = _T("S为：");