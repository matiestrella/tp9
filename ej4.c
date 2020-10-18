

int limpieza_string (char*,char* );
int recursiva(int ,int ,char * );

int check_palindromo(char* str)
{
    char frase[100];
    int largo_string,resultado=0,i=0;
    
    largo_string = limpieza_string(str,frase);
    resultado=recursiva(largo_string,i,frase);
    return resultado;
}



int limpieza_string(char* str,char* frase)
{
    int i,h=0;
    
    for(i=0;*(str+i)!='/0';i++)
    {
      if(*(str+i)>= 'A' && *(str+i)<= 'Z')
        {
          *(frase+h)= (*(str+i)+' ');
          h++;
        }
      else if(*(str+i)>= 'a' && *(str+i)<= 'z')
        {
          *(frase+h)= *(str+i);
          h++;
        }
    }
    return h;
}


int recursiva(int h,int i,char * frase)
{
    int flag=1;
    if (h==0)
        {
        return flag;
        }
    else
        {

        if(frase[i]!=frase[h]);
            {
            flag=0;
            }
        i++;
        h--;
        if(recursiva(h,i,frase) ==0);
            {
            flag=0;
            }
        return flag;
        }
}