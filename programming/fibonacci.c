#include <stdio.h>

int fibonacci(int x){
    if(x == 1 || x == 2){
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    printf("%d", fibonacci(10));

    return 0;
}
