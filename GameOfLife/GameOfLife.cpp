#include <iostream>
#include <raylib.h>

int main() 
{
  const int screenWidth = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Game of Life");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Window up and running", 190, 200, 20, BLACK);

    EndDrawing();
  }

  return 0;
}
