#include "GamesEngineeringBase.h"
#include "Debug.h"

#define CHARACTER_WIDTH 40
#define CHARACTER_HEIGHT 40

struct Position {
    int x,y;
};

class Character {
    private:
    GamesEngineeringBase::Window* canvas;
    Position position;

    public:
    Character(GamesEngineeringBase::Window *canvas) {
        this->canvas = canvas;

        Position pos;
        pos.x = 0;
        pos.y = 0;
        this->position = pos;
    }

    Character(GamesEngineeringBase::Window *canvas, int x, int y) {
        this->canvas = canvas;

        Position pos;
        pos.x = x;
        pos.y = y;
        this->position = pos;
    }
    
    void setPosition(int x, int y) {
        this->position.x = x;
        this->position.y = y;
    }
    
    void draw() {
        for (int i=this->position.x; i < this->position.x + CHARACTER_WIDTH; i++) {
            for (int j=this->position.y; j < this->position.y + CHARACTER_HEIGHT; j++) {
                canvas->draw(i, j, 255, 255, 255);
            }
        }
    }

};