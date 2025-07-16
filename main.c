#include <SDL3/SDL.h>
#include <stdio.h>

#define gameboyWidth 160
#define gameboyHeight 144

#define gummyBearWidth gameboyWidth*4
#define gummyBearHeight gameboyHeight*4
int main() {
    
    SDL_Window* win = SDL_CreateWindow("gummyBear", gummyBearWidth, gummyBearHeight, SDL_WINDOW_MAXIMIZED);
    SDL_Renderer *renderer = SDL_CreateRenderer(win, NULL);
    SDL_Event event;
    int running = 1;
    while(running)
    {
        while (SDL_PollEvent(&event))
        {  
            switch(event.type) {
                case SDL_EVENT_QUIT:
                    SDL_DestroyWindow(win);
                    SDL_Quit();
                    running = 0;
                    break;
            }
        }
    }
    return 0;
}