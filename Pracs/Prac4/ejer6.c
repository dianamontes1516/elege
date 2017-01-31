#include <stdio.h>

/**/
int main(int argc, char *argv[])
{
  int fig=1;
  while(fig){
    printf("Escoge la figura de la que quieres cualcular el área\n");
    printf("1. Triángulo\n");
    printf("2. Cuadrado\n");
    printf("3. Rectángulo\n");
    printf("4. No me importan las áreas, quiero salir.\n");
    scanf("%d",&fig);
    switch (fig) {
    case 1: {
      float base,altura;
      printf("Ingresa base:\n");
      scanf("%f",&base);
      printf("Ingresa altura:\n");
      scanf("%f",&altura);
      printf("El área del triángulo es %f\n", (base*altura)/2);
      break;
    }
    case 2: {
      float lado;
      printf("Ingresa lado:\n");
      scanf("%f",&lado);
      printf("El área del cuadrado es %f\n", (lado*lado));
    
      break;
    }
    case 3: {
      float base,altura;
      printf("Ingresa base:\n");
      scanf("%f",&base);
      printf("Ingresa altura:\n");
      scanf("%f",&altura);
      printf("El área del rectángulo es %f\n", (base*altura));
    
      break;
    }
    case 4: {
      fig = 0;
      break;
    }
    default:
      printf("No seas wey, sólo hay 4 opciones.\n");
      break;
    }
  }
  return 0;
}
