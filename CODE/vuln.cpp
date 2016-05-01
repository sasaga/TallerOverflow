#include <cstdlib>
#include <iostream>
 
using namespace std;
 
/* declaramos la funcion que usaremos para leer el fichero*/
 
int LeerFichero(char*, char*, int);
int FuncionVulnerable(char *cptr); 


 
int main()
 
{
 
/* esta es la funcion principal en la que declaramos una variable de tipo char que
contendra el string recogido desde "archivo.txt"*/
 
        char buffer[1000];
        char nombre[]="almacen.txt";
 
/* tras declarar las variables llamamos a la funcion leer fichero() que metera en la
variable buffer el contenido del archivo.txt, luego llamaremos a la funcion vulnerable
para que copie el contenido de este a una variable de buffer de menor tamaño que esta */
 
        LeerFichero(buffer,nombre,1000);
        FuncionVulnerable(buffer);
        system("pause");
        return 0;
}
 
/* la funcion leer fichero, abre el fichero, lo lee y lo guarda en la variable buffer */
 
int LeerFichero(char*Fbuffer,char*Fnombre, int Limite) 
{
        int c;
        int n=0;
 
        FILE *f;
        f=fopen(Fnombre,"r");
        while ((c=getc(f))!=EOF)
        {
                if(n<Limite)
                {Fbuffer[n++]=c;}
        }
        Fbuffer[n++]=0;
        fclose(f);
        return 0;
}
 
/* funcion vulnerable. Esta funcion es lo importante de este codigo, en esta función
recibimos el puntero donde se encuentra la variable que contiene el texto introducido
en archivo.txt. La funcion copiara el contenido de esta variable a una variable de tipo char
de un tamaño inferior a la variable buffer. seguidamente mostrara el contenido de esta.*/
 
int FuncionVulnerable(char *cptr)
{
        char buff[300]= "Datos";
        strcpy(buff,cptr);
        printf("%s\n\n",buff);
        return 0;
}
 
 
/* Funcion Oculta. Ninguna de las otras funciones anteriares llama a esta */
 
int FuncionOculta()
{
        printf("Este texto nunca deberia de mostrarse");
        return 0;
}

 
