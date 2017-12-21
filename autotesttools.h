//
// Created by leonardo on 17-12-21.
//

#include <stdlib.h>
int* autoBuildArray(int n){
    int* a = (int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; ++i) {
        a[i] = rand()%200 - 100;
    }
    return a;
}
