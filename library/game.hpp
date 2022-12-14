#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include "library/map_wrapper.hpp"
#include "library/layer.hpp"

class Game{
private:
  SDL_Rect windowDimension;
  bool isRunning = false;

  SDL_Window *window;
  SDL_Point cursor;

public:
  MapWrapper<Layer> layers;
  SDL_Renderer *renderer;
  int frameTime = 0;
  Game(const char *title, int width, int height, int x = SDL_WINDOWPOS_UNDEFINED, int y = SDL_WINDOWPOS_UNDEFINED);
  ~Game();
  void run();
  void update();
  void render();
  void eventHandler();
  void clean();
  bool running();
  const SDL_Rect &getWindowRect();
};