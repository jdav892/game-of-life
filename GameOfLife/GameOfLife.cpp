#include <iostream>
#include <raylib.h>

int main() 
{

  Color GREY = {29, 29, 29, 255};
  const int screenWidth = 750;
  const int screenHeight = 750;
  int FPS = 12;

  InitWindow(screenWidth, screenHeight, "Game of Life");

  SetTargetFPS(FPS);
  
  // Simulation Loop
  while (!WindowShouldClose()) {



    DrawText("Window up and running", 190, 200, 20, BLACK);
    // Event Handling
    
    // Updating State
    
    // Drawing
    
    BeginDrawing();
    ClearBackground(GREY);
    EndDrawing();
  }

  return 0;
}
