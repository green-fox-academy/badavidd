#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>
#include <vector>


//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

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

void draw() {
    Sint16 a[] = {320, 340, 350, 340, 320, 310};
    Sint16 b[] = {11, 11, 30, 49, 49, 30};

    Sint16 *aPtr = a;
    Sint16 *bPtr = b;
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 6; i++) {
            b[i] = b[i] + 38;
        }
        aPtr = a;
        bPtr = b;
        polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);

    }
    for (int r = 0; r < 6; r++) {
        if (r == 2) {
            a[r] = a[r] - 31;
        } else if (r == 5) {
            a[r] = a[r] - 27;
        } else {
            a[r] = a[r] - 29;
        }
    }

    for (int j = 0; j < 5; j++) {
        if (j == 0) {
            for (int i = 0; i < 6; i++)
                if (j == 0) {
                    b[i] = b[i] - 19;
                }
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        } else {
            for (int i = 0; i < 6; i++)
                b[i] = b[i] - 38;
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        }
    }
    for (int r = 0; r < 6; r++) {
        if (r == 2) {
            a[r] = a[r] - 29;
        } else if (r == 5) {
            a[r] = a[r] - 30;
        } else {
            a[r] = a[r] - 29;
        }
    }

    for (int j = 0; j < 4; j++) {
        if (j == 0) {
            for (int i = 0; i < 6; i++)
                if (j == 0) {
                    b[i] = b[i] + 19;
                }
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        } else {
            for (int i = 0; i < 6; i++)
                b[i] = b[i] + 38;
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        }
    }
    for (int r = 0; r < 6; r++) {
        if (r == 2) {
            a[r] = a[r] - 27;
        } else if (r == 5) {
            a[r] = a[r] - 30;
        } else {
            a[r] = a[r] - 29;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (j == 0) {
            for (int i = 0; i < 6; i++)
                if (j == 0) {
                    b[i] = b[i] - 19;
                }
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        } else {
            for (int i = 0; i < 6; i++)
                b[i] = b[i] - 38;
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
        }
    }
}


/*
 *  for (int k = 0; k < 1; k++) {
                a[j] = a[j] - 38;
                b[j] = b[j] + 38;
            }
            aPtr = a;
            bPtr = b;
            polygonRGBA(gRenderer, aPtr, bPtr, 6, 0x00, 0x00, 0x00, 0xFF);
 */

bool init() {
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Starry night", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
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

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}