#include <iostream>
#include <raylib.h>
#include "simulation.hpp"

int main() 
{

  Color GREY = {29, 29, 29, 255};
  // adjust to change resolution/scale of game
  const int WINDOW_WIDTH = 1400;
  const int WINDOW_HEIGHT = 750;
  const int CELL_SIZE = 4;
  int FPS = 12;

  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
  SetTargetFPS(FPS);
  Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};

  std::cout << simulation.CountLiveNeighbors(5, 29) << std::endl;

  // Simulation Loop
  while (!WindowShouldClose()) 
  {
    // Event Handling
    if(IsKeyPressed(KEY_ENTER))
    {
      simulation.Start();
      SetWindowTitle("Active");
    }
    
    if(IsKeyPressed(KEY_SPACE))
    {
      simulation.Stop();
      SetWindowTitle("Paused");
    }
    
    if(IsKeyPressed(KEY_F))
    {
      FPS += 4;
      SetTargetFPS(FPS);
    }

    if(IsKeyPressed(KEY_S))
    {
      if(FPS > 9)
      {
        FPS -= 4;
        SetTargetFPS(FPS);
      }

      if(FPS < 9 && FPS >= 4)
      {
        FPS -= 1;
        SetTargetFPS(FPS);
      }
    }

    if(IsKeyPressed(KEY_R))
    {
      simulation.CreateRandomState();
    }

    if(IsKeyPressed(KEY_C))
    {
      simulation.ClearGrid();
    }

    // Updating State
    simulation.Update();    
    // Drawing
    
    BeginDrawing();
    ClearBackground(GREY);
    simulation.Draw();
    EndDrawing();
  }

  return 0;
}
