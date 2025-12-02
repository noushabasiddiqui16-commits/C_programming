//Name :- Noushaba Siddiqui
//UID :- 251P080
//Roll No:- 05
//Branch :- Comp Eng
//Div:- D
#include <stdio.h>

int main(){
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int *p = array;
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    return 0;
}
