

limpieza_string(char* str,char* frase)
recursiva()

int check_palindromo(char* str)
{
    char frase[100];
    int largo_string,resultado=0,i=0;
    
    largo_string = limpieza_string(str,i,frase);
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


int recursiva(int h,int i,char * frase)
{
    flag=1;
    if (h==0)
        {
        return flag;
        }
    else
        {

        if(frase[i]!=frase[h]);
            {
            flag=0
            }
        i++;
        h--;
        recursiva(h,i,frase);
        return flag;
        }
}