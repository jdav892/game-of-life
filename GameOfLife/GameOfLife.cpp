#include <iostream>
#include <raylib.h>
#include "grid.hpp"

int main() 
{

  Color GREY = {29, 29, 29, 255};
  const int WINDOW_WIDTH = 750;
  const int WINDOW_HEIGHT = 750;
  const int CELL_SIZE = 25;
  int FPS = 12;

  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
  SetTargetFPS(FPS);
  Grid grid{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};

  // Simulation Loop
  while (!WindowShouldClose()) {



    DrawText("Window up and running", 190, 200, 20, BLACK);
    // Event Handling
    
    // Updating State
    
    // Drawing
    
    BeginDrawing();
    ClearBackground(GREY);
    grid.Draw();
    EndDrawing();
  }

  return 0;
}
