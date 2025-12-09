#include "raylib.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    int cx = screenWidth / 2;
    int cy = screenHeight / 2;
    float rad = 40.0f;

    InitWindow(screenWidth, screenHeight, "pennello Magico");
    SetTargetFPS(60);

    Color colore_corrente = RED;
    srand((unsigned)time(NULL));
    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_ENTER))
        {
            colore_corrente.r = GetRandomValue(0, 255);
            colore_corrente.g = GetRandomValue(0, 255);
            colore_corrente.b = GetRandomValue(0, 255);
            colore_corrente.a = 255;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(cx, cy, rad, colore_corrente);
        DrawText("premi Invio per cambiare colore", 20, 20, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
