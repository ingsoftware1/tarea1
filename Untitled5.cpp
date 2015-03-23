#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <sstream>


using namespace std;

int main()
{ 
FILE *arch;
arch=fopen("Qno.csv", "w");
int i; 
int veces=14; 
int resultado;
string cadena="";




srand(time(NULL));
const time_t timer = time(NULL); 
fprintf(arch,"%s\n", ctime(&timer));

for (i=0;i<veces;i++) 
{   
    resultado = rand()%25 + 1; 
    stringstream ss;
    ss << resultado;
    string str = ss.str();
    cadena=str+";"+cadena;
}  

fprintf(arch,"%s\n", cadena.c_str()); 

      
fclose(arch);
FILE *archivo;
char linea[50];
archivo=fopen("grupo.txt", "r");
for(i=0;i<5;i++)
{
                fgets(linea, 20 , archivo);
                cout<<linea;
}
cout<<endl;
fclose(archivo);
system("pause"); 

return 0;

}
