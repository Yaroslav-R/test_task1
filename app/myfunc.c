#include <stdio.h>
#include <stdlib.h>
#include <math.h>


const float EPS = (float)1e-7;

int check(float a, float b, float c, float x) {
    if (fabs(a * x * x + b * x + c) < EPS)
        return 1;
    else 
        return 0;
}

int solve(float a, float b, float c, float* x1, float* x2) {
    int cnt = 0;
    // Проверяем тип уравнения
    // Если уравнение вида C = 0
    if (fabs(a) < EPS && fabs(b) < EPS) { 
        // Если уравнение принимает вид 0 = 0
        if (fabs(c) < EPS) {
            cnt = 3;

            *x1 = 0;
            *x2 = 0;
        } 
        // Уравнение принимает вид C = 0, где C != 0
        else {
            cnt = 0;
        }
    } 
    // Уравнение вида B * x + C = 0
    else if (fabs(a) < EPS && fabs(b) >= EPS) {
        cnt = 1; // 1 корень

        *x1 = -c / b;
        *x2 = -c / b;
    } 
    else {
        float D = b * b - (4.0f * a * c);
        // D больше нуля, два R корня
        if (D > EPS) {
            cnt = 2;
            float sqrtD = (float)sqrt(D);
            *x1 = (-b + sqrtD) / (2.0f * a);
            *x2 = (-b - sqrtD) / (2.0f * a);
        } 
        // D равен нулю, есть 1 R корень
        else if (fabs(D) <= EPS) {
            cnt = 1;

            *x1 = -b / (2.0f * a);
            *x2 = -b / (2.0f * a);
        } 
        // D меньше нуля, R корней нет
        else {
            cnt = 0;
            *x1 = 0;
            *x2 = 0;
        }
    }

    return cnt;
}
