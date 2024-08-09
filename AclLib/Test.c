#define _CRT_SECURE_NO_WARNINGS 1

#include "acllib.h"
#include <stdio.h>

void mouseListener(int x, int y, int button, int event)
{
	static int ox = 0;
	static int oy = 0;
	printf("x=%d, y=%d, button=%d, event=%d\n", x, y, button, event);

	beginPaint();
	line(x, y, ox, oy);
	endPaint(x, y);
	ox = x;
	oy = y;
}

void keyListener(int key, int event)
{
	printf("key=%d, event=%d\n", key, event);
}

void timerListener(int id)
{
	static int count = 0;
	printf("id=%d\n", id);
	
	if (id == 0)
	{
		count++;
		if (count == 5)
		{
			cancelTimer(0);
		}
	}
}

int Setup()
{
	initConsole();
	printf("Hello\n");
	initWindow("test", 100, 100, 200, 200);

	registerMouseEvent(mouseListener);
	registerKeyboardEvent(keyListener);
	registerTimerEvent(timerListener);
	startTimer(0, 500);
	startTimer(1, 1000);


	beginPaint();

	//line(20, 20, 100, 100);

	endPaint();
	return 0;
}