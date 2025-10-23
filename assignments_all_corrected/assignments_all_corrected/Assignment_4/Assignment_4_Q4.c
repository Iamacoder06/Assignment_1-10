#include <stdio.h>

/* Auto-generated: solution with only necessary headers included */


int main(){
    int rows=5; char start='A';
    int len = 5;
    for(int r=0;r<rows;r++){
        char c = start + 2*r;
        for(int k=0;k<len-r;k++) printf("%c", c++);
        printf("\n");
    }
    return 0;
}
