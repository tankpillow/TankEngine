#include <TankEngine/core/GameWindow.hpp>

#include <SDL2/SDL.h>

namespace TankEngine
{
    GameWindow::GameWindow()
    {
        width = 800;
        height = 600;
        title = "TankEngine";
    }

    void GameWindow::createWindow()
    {
        SDL_Init(SDL_INIT_VIDEO);

        SDL_Window* window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
        SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

        SDL_Event event;
        bool running = true;
        while (running)
        {
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                {
                    running = false;
                }
            }

            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);
        }

        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

    void GameWindow::setSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    void GameWindow::setTitle(const std::string& title)
    {
        this->title = title;
    }
}
