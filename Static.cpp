#include <stdio.h>
int main() { 
int condition = 1 ;
if (condition) {
printf("Branch taken (likely case)\n");
} else {
printf("branch not taken (unliely case)\n");
}
return 0;
}
