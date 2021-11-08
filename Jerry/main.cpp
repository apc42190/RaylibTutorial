#include "raylib.h"

int main() {

    const int screen_width = 800;
    const int screen_height = 800;

    InitWindow(screen_width, screen_height, "Magic Circle");

    while(!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircleLines(screen_width / 2, screen_height / 2, screen_width / 2, RED);

        Vector2 center{screen_width / 2, screen_height / 2};
        DrawPolyLines(center, 3, screen_width / 2, 0, BLUE);
        DrawPolyLines(center, 3, screen_width / 2, 30, PURPLE);
        DrawPolyLines(center, 3, screen_width / 2, 60, GREEN);
        DrawPolyLines(center, 3, screen_width / 2, 90, YELLOW);


        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}