#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>

//Screen dimension constants
const int SCREEN_WIDTH = 740;
const int SCREEN_HEIGHT = 740;

//Draws geometry on the canvas
void draw();


//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window *gWindow = nullptr;

//The window renderer
SDL_Renderer *gRenderer = nullptr;

void drawH(Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, int width, int depth) {
    if (depth == 4) {
        return;
    }
    thickLineRGBA(gRenderer, x1, y1, x2, y2, width, 0x00, 0x00, 0x00, 0xFF);
    drawH((Sint16)(x1 - (x2 - x1) / 4), (Sint16)(y1 - (x2 - x1) / 4), (Sint16)(x2 - ((x2 - x1) / 4) * 3), (Sint16)(y2 - (x2 - x1) / 4), width / 2, depth + 1); // bal fel
    drawH((Sint16)(x2 - (x2 - x1) / 4), (Sint16)(y1 - (x2 - x1) / 4), (Sint16)(x2 + (x2 - x1) / 4), (Sint16)(y2 - (x2 - x1) / 4), width / 2, depth + 1); // jobb fel
    drawH((Sint16)(x1 + ((x2 - x1) / 4) * 3), (Sint16)(y1 + (x2 - x1) / 4), (Sint16)(x2 + (x2 - x1) / 4), (Sint16)(y2 + (x2 - x1) / 4), width / 2, depth + 1); // jobb le
    drawH((Sint16)(x1 - (x2 - x1) / 4), (Sint16)(y1 + (x2 - x1) / 4), (Sint16)(x2 - ((x2 - x1) / 4) * 3), (Sint16)(y2 + (x2 - x1) / 4), width / 2, depth + 1); // bal le
}
void drawV(Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, int width, int depth)
{
    if (depth == 4) {
        return;
    }
    thickLineRGBA(gRenderer, x1, y1, x2, y2, width, 0x00, 0x00, 0x00, 0xFF);
    drawV((Sint16)(x1 - (y2 - y1) / 4), (Sint16)(y1 - (y2 - y1) / 4), (Sint16)(x2 - (y2 - y1) / 4), (Sint16)(y2 - ((y2 - y1) /4) * 3), width / 2, depth + 1); // bal fel
    drawV((Sint16)(x1 - (y2 - y1) / 4), (Sint16)(y1 + ((y2 - y1) / 4) * 3), (Sint16)(x2 - (y2 - y1) / 4), (Sint16)(y2 + (y2 - y1) /4), width / 2, depth + 1); // bal le
    drawV((Sint16)(x1 + (y2 - y1) / 4), (Sint16)(y1 - (y2 - y1) / 4), (Sint16)(x2 + (y2 - y1) / 4), (Sint16)(y2 - ((y2 - y1) /4) * 3), width / 2, depth + 1); // jobb fel
    drawV((Sint16)(x1 + (y2 - y1) / 4), (Sint16)(y1 + ((y2 - y1) / 4) * 3), (Sint16)(x2 + (y2 - y1) / 4), (Sint16)(y2 + (y2 - y1) /4), width / 2, depth + 1); // jobb le
}

bool init() {
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Line in the middle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == nullptr) {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr) {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    return true;
}

void close() {
    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main(int argc, char *args[]) {
    //Start up SDL and create window
    if (!init()) {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        drawH(SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, (SCREEN_WIDTH / 4)  * 3, SCREEN_HEIGHT / 4, 16, 0);
        drawH(SCREEN_WIDTH / 4, (SCREEN_HEIGHT / 4) * 3, (SCREEN_WIDTH / 4 ) * 3, (SCREEN_HEIGHT / 4) * 3, 16, 0);
        drawV(SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 4, (SCREEN_HEIGHT / 4) * 3, 16, 0);
        drawV((SCREEN_WIDTH / 4) * 3, SCREEN_HEIGHT / 4, (SCREEN_WIDTH / 4) * 3, (SCREEN_HEIGHT / 4) * 3, 16, 0);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}