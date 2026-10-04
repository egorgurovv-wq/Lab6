#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    double x, y;
    printf("Введите число X и Y\n");
    scanf("%lf %lf", &x, &y);
    if (x >=0 && y<=0 && x*x + y*y >=2 && y>=x-3){
        printf("Точка принадлежит области\n");
    }else{
        printf("Точка не принадлежит области\n");
    }
}