#include <stdio.h>
int fibonacci(int sayi){
    if(sayi<=1){
        return sayi;
    }
        return fibonacci(sayi-1)+ fibonacci(sayi-2);

}
int main() {
    printf("%d",fibonacci(8));
    getchar();
    return 0;
}
