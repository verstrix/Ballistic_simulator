#include "raylib.h"
#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double vx;
    double vy;
} Projectile;

int main(void) {
    Projectile p = {0};
    double v0, angle_deg;

    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &v0);
    printf("Enter launch angle (degrees): ");
    scanf("%lf", &angle_deg);

    double angle_rad = angle_deg * M_PI / 180;
    p.vx = v0 * cos(angle_rad);
    p.vy = v0 * sin(angle_rad);

    double dt = 0.02;
    double g = 9.81;

    //intialising graphic window in raylib
    InitWindow(800, 600, "Ballistic Trajectory Simulator");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        if (p.y >= 0) {
            p.x += p.vx * dt;
            p.y += p.vy * dt;
            p.vy -= g * dt;
        }

        int screen_x = (int)(p.x * 10);
        int screen_y = 550 - (int)(p.y * 10);

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(0, 550, 800, 550, DARKGRAY);

        DrawCircle(screen_x, screen_y, 10, RED);

        DrawText(TextFormat("X: %.1f m, Y: %.1f m", p.x, p.y), 10, 10, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}