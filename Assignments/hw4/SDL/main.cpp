#include <iostream>
#include <Circle.h>
#include "SDL2/include/SDL.h"

using namespace std;
#define WINDOW_WIDTH 600

template<class T>
void renderCircle(T centerX, T centerY, T radius, SDL_Renderer *renderer) {
    for (int y = -radius; y <= radius; y++)
        for (int x = -radius; x <= radius; x++)
            if (x * x + y * y <= radius * radius) {
                SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);

            }

}

template<class T>
void renderRectangle(T x, T y, T w, T h, SDL_Renderer *renderer) {


}


void renderTest(SDL_Renderer *renderer) {
    for (int i = 0; i < WINDOW_WIDTH; ++i)
        SDL_RenderDrawPoint(renderer, i, i);
}

int main() {
    cout << "Welcome to SDL Graphics" << endl;

    SDL_Event event;
    SDL_Renderer *renderer;
    SDL_Window *window;
    int i, j;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "Could not initialise" << std::endl;
        return 1;
    }
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);


    /*
     * Draw line
     */
    //renderTest(renderer);

    renderCircle(60, 60, 30, renderer);


    //TODO GRAPHICS- UNCOMMENT THE SECTION BELOW WHEN YOUR TESTS PASS
    /*
     Circle<float> *circleFloat = new Circle<float>(333.4, 333.2, 40.4);
     renderCircle(circleFloat->getX(), circleFloat->getY(), circleFloat->getRadius(), renderer);
     */


    SDL_RenderPresent(renderer);


    while (1) {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;


    return 0;
}