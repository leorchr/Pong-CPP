#pragma once

class Ball
{
private:
	int mX;
	int mY;
	int mSpeedX;
	int mSpeedY;
	int mSize;

public:
	Ball();
	Ball(int x, int y, int speedX, int speedY, int size);
	~Ball();
	void Update();
	void Draw();
};