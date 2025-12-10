#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Il Pennello Magico");
    SetTargetFPS(60);

    Color colore_corrente;
    colore_corrente.r = 255;
    colore_corrente.g = 0;
    colore_corrente.b = 0;
    colore_corrente.a = 255;

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_ENTER))
        {
            colore_corrente.r = GetRandomValue(0, 255);
            colore_corrente.g = GetRandomValue(0, 255);
            colore_corrente.b = GetRandomValue(0, 255);
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Premi INVIO per cambiare colore", 10, 10, 20, DARKGRAY);
        DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 80, colore_corrente);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

