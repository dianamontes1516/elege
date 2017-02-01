#include<stdio.h>
#define BEGIN int main(){
#define INTEGER int
#define IF if 

#define THEN {
#define ELSE } else {
#define ENDIF }
#define END }
#define PRINT printf

BEGIN
INTEGER x=10;
 IF(x>=10)
THEN
PRINT("Tengo 10 \n");
ELSE
PRINT("Reprobaré\n");
ENDIF
END
  
