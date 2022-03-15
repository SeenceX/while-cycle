//
//  main.cpp
//  lab2
//
//  Created by Андрей Воропаев on 05.10.2021.
//
//проверить, существует ли в массиве элемент, который больше всех элементов, находящихся справа
//от него, но меньше всех элементов, находящихся слева от него

#include <iostream>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int i, n, z, l, a[10];
    bool x = false;
    bool y = false;
    
    printf("Введите кол-во элементов массива: ");
    scanf("%d", &n);
    i = 0;
    while(i < n){
        printf("%d-й: ", i+1);
        scanf("%d", &a[i]);
        i += 1;
    }
    i = 1;
    while(i < n-1){
        l = i;
        z = a[i];
        if((a[i-1] > z) && (z > a[i+1])){
            while(a[l-1] > 0){
                if((z < a[i-l]) && (l > 0)){
                    x = true;
                    l -= 1;
                }
                else{
                    x = false;
                    break;
                }
            }
            l = i+1;
            if(x){
                while(l < n){
                    if(z > a[l]){
                        y = true;
                        l += 1;
                    }
                    else{
                        y = false;
                        break;
                    }
                }
            }
        }
        i += 1;
    }
    if(x){
        if(y){
            printf("Существует\n");
        }
        else
        {
            printf("Такого значения не существует\n");
        }
            
    }
    else{
        printf("Такого значения не существует\n");
    }

        
    /*1-й: 5
    2-й: 2
    3-й: 9
    4-й: -3
    5-й: -8
    6-й: -5
    7-й: -8
     
     1-й: 9
     2-й: 4
     3-й: 6
     4-й: 1
     5-й: 0
     6-й: -5
     7-й: -1
     */
}
