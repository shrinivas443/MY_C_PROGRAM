#include <stdio.h>
enum Day {
    SUN, 
    MON,  
    TUE,  
    WED,  
    THU,  
    FRI,  
    SAT   
};
int main() {
    enum Day today = WED;
    printf("%d\n", today);
}