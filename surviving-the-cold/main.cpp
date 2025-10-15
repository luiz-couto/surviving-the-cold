#include <iostream>
#include "GamesEngineeringBase.h"

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768

#define GAME_NAME "Surviving the Cold"

// pallete
// main color = (100,125,255) - light blue

int main() {
    // Create a canvas window with dimensions 1024x768 and title Tiles"
    GamesEngineeringBase::Window canvas;
    canvas.create(WINDOW_WIDTH, WINDOW_HEIGHT, GAME_NAME);
    bool running = true; // Variable to control the main loop's running state.

    while (running)
    {
        // Check for input (key presses or window events)
        // Clear the window for the next frame rendering
        canvas.clear();
        
        for (int i=0; i<WINDOW_WIDTH; i++) {
            for (int j=0; j<WINDOW_HEIGHT; j++) {
                canvas.draw(i, j, 100, 125, 255);
            }
        }

        // Update game logic
        // Draw();
        // Display the frame on the screen. This must be called once the frame
        //is finished in order to display the frame.
        canvas.present();
    }
    return 0;
}