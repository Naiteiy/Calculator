#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int n = 0,hege=0;
double Q = 0, r = 0, Fl = 0, P1 = 0, P2 = 0, Pc = 0, Pv = 0, Kv = 0, t = 0, Qmax = 0, Qmin = 0, S = 0, Kmax = 0, Kmin = 0, Kvmax = 0, Kvmin = 0, R = 0;
wchar_t choose1[] = L"Һ��";
wchar_t choose2[] = L"����";
wchar_t choose3[] = L"�ھ�";
wchar_t please[] = L"input";
wchar_t jisuan[] = L"����";
wchar_t allclear[] = L"���";
wchar_t inputQ[] = L"Q��Һ������m3/h��";
wchar_t inputr[] = L"r��Һ���ض�g/cm3��";
wchar_t inputFl[] = L"Fl��ѹ���ָ�ϵ����";
wchar_t inputP1[] = L"P1����ǰѹ��kpa)";
wchar_t inputP2[] = L"P2������ѹ��kpa��";
wchar_t inputPc[] = L"Pc���ٽ�ѹ��kpa��";
wchar_t inputPv[] = L"Pv��Pv��������ѹ��";
wchar_t inputQ2[] = L"Qn����������m3/h��";
wchar_t inputr2[] = L"rn��Һ���ض�g/L��";
wchar_t inputFl2[] = L"Fl��ѹ���ָ�ϵ����";
wchar_t inputP12[] = L"P1����ǰѹ��kpa)";
wchar_t inputP22[] = L"P2������ѹ��kpa��";
wchar_t inputt[] = L"t�������¶�kpa��";
wchar_t inputKv[] = L"Kv������ϵ����";
wchar_t inputQmax[] = L"Qmax�����������";
wchar_t inputQmin[] = L"Qmin����С������";
TCHAR out[] = _T("KvΪ��");
TCHAR out2[] = _T("SΪ��");