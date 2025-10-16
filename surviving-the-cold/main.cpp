#include <iostream>
#include "GamesEngineeringBase.h"
#include "Character.h"

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768

#define GAME_NAME "Surviving the Cold"

// pallete
// main color = (100,125,255) - light blue

void renderBackground(GamesEngineeringBase::Window &canvas) {
    unsigned char backgroundColorPixel[3] = {100, 125, 255};
    for (int i=0; i<WINDOW_WIDTH; i++) {
        for (int j=0; j<WINDOW_HEIGHT; j++) {
            canvas.draw(i, j, backgroundColorPixel);
        }
    }
}

int main() {
    GamesEngineeringBase::Window canvas;
    canvas.create(WINDOW_WIDTH, WINDOW_HEIGHT, GAME_NAME);
    bool running = true;

    Character character = Character(&canvas, WINDOW_WIDTH/2, WINDOW_HEIGHT/2);

    while (running)
    {
        // Check for input (key presses or window events)
        if (canvas.keyPressed('W')) {
            character.move(0, -1);
        }
        if (canvas.keyPressed('A')) {
            character.move(-1, 0);
        }
        if (canvas.keyPressed('D')) {
            character.move(1, 0);
        }
        if (canvas.keyPressed('S')) {
            character.move(0, 1);
        }

        // Clear the window for the next frame rendering
        canvas.clear();
        
        // Update game logic
        // Draw();
        renderBackground(canvas);
        character.draw();

        // Display the frame on the screen. This must be called once the frame
        //is finished in order to display the frame.
        canvas.present();
    }
    return 0;
}