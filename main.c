#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double vx;
    double vy;
} Projectile;

int main(void) {
    Projectile p;
    p.x = 0;
    p.y = 0;
    double v0, angle_deg;
    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &v0);
    printf("Enter launch angle (degrees): ");
    scanf("%lf", &angle_deg);

    double angle_rad = angle_deg * M_PI / 180;
    p.vx = v0 * cos(angle_rad);
    p.vy = v0 * sin(angle_rad);

    double dt = 0.01;
    double g = 9.81;


    while (p.y >= 0) {
        p.x += p.vx * dt;
        p.y += p.vy * dt;
        p.vy -= g*dt;
        printf("X: %f, Y: %f\n", p.x, p.y);
    }
    return 0;
}
