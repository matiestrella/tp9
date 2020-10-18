

limpieza_string(char* str,char* frase)
recursiva()

int check_palindromo(char* str)
{
    char frase[100];
    int largo_string,resultado=0;
    largo_string = limpieza_string(str,frase);
    recursiva(largo_string,frase);
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


int recursiva(int h,char * frase)
{
    int i=0;flag=1;
    if (h==0)
        {
        return flag;
        }
    else
        {
        i++;
        h--;
        if(frase[i]!=frase[h]);
            {
            flag=0
            }
        recursiva(h,frase);
        return flag;
        }
}