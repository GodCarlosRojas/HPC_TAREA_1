/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* Mostrar el resultado del siguiente programa
***********************************/

#include <stdio.h>
int main()
{
int x = 0, y = 0;
for (x = 6; x > 0; x -= 2)
for (y = 0; y < 2; y++)
printf("%d ", x-y);
return 0;
}
