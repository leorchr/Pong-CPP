#include "Ball.h"
#include "raylib.h"

Ball::Ball() {
	mX = 0;
	mY = 0;
	mSpeedX = 10;
	mSpeedY = 10;
	mSize = 20;
}

Ball::Ball(int x, int y, int speedX, int speedY, int size) {
	mX = x;
	mY = y;
	mSpeedX = speedX;
	mSpeedY = speedY;
	mSize = size;
}

Ball::~Ball() {}

void Ball::Update() {
	mX += mSpeedX;
	mY += mSpeedY;

	if (mX > GetScreenWidth() - mSize) {
		mSpeedX = -mSpeedX;
	}
	if (mX < 0) {
		mSpeedX = -mSpeedX;
	}
	if (mY > GetScreenHeight() - mSize) {
		mSpeedY = -mSpeedY;
	}
	if (mY < 0) {
		mSpeedY = -mSpeedY;
	}
}

void Ball::Draw() {
	DrawRectangle(mX, mY, mSize, mSize, PINK);
}