
/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* Mostrar el resultado del siguiente programa
***********************************/
#include <stdio.h>
void fnx(int x)
{
if (x) printf("%d ", x);
}
int main() {
int i, a = 1234;
for (i = 0; i < 10; i++)
fnx(a = a/10);
return 0;
}
