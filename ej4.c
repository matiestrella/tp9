
int check_palindromo(char* str)
{
    char frase[100];
    limpieza_string(str,frase);
    recursiva();
    return ;
}



limpieza_string(char* str,char* frase)
{
    int i,h=0;
    
    for(i=0;*(str+i)!='/0';i++)
    {
      if(*(str+i)>= 'A' && *(str+i)<= 'Z')
        {
          *(frase+h)= (*(str+i)-'0');
          h++;
        }
      else if(*(str+i)>= 'a' && *(str+i)<= 'z')
        {
          *(frase+h)= *(str+i);
          h++;
        }
    }
    
    return frase;
}


recursiva()
{
    if (*str == '\0')
        {
        printf("CASO BASE! Salgo...\n");
        return 0;
        }
    else
        {
        i++;
        arr[i]= *str;
        len = 1 + my_strlen(str+1);
        return len;
        }
}