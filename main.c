#include <stdio.h>
#include <SDL3/SDL.h>

#define gameboyWidth 160
#define gameboyHeight 144

#define gummyBearWidth gameboyWidth*4
#define gummyBearHeight gameboyHeight*4

int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* win = SDL_CreateWindow("gummyBear", gummyBearWidth, gummyBearHeight, 0);
    if (!win)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Event event;
    int running = 1;

    while(running)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_EVENT_QUIT:
                    running = 0;
                    break;
            }
        }
        SDL_Delay(16);
    }

    SDL_DestroyWindow(win);
    SDL_Quit;
    return 0;
}
