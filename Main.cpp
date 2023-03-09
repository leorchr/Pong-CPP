#include "raylib.h"
#include <string>
#include <iostream>
#include "Ball.h"

using namespace std;

void Update();
void Draw();

const int screenWidth = 800;
const int screenHeight = 450;
string text = "0 | 0";
Ball ball = Ball(screenWidth/2-10, screenHeight/2-10, 2, 2, 20);

int main(int argc, char* argv[])
{
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);
    

    while (!WindowShouldClose())
    {
        Update();
        ball.Update();
        Draw();
    }

    CloseWindow();

    return 0;
}

void Update(){

}

void Draw() {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText(text.c_str(), screenWidth / 2 - 20, 20, 20, PINK);
    DrawRectangle(10, screenHeight / 2 - 60, 20, 120, PINK);
    DrawRectangle(screenWidth - 30, screenHeight / 2 - 60, 20, 120, PINK);
    ball.Draw();
    EndDrawing();
}