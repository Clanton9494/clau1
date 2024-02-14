/*#include "ft_memset.c"
#include "ft_bzero.c"*/
#include "ft_memcpy.c"
/*#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_memchr.c" 
#include "ft_memcmp.c" 
#include "ft_strnstr.c"
#include "ft_atoi.c"
#include "ft_calloc.c"*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}*/

int main(void)
{
   /* MEMSET
    char str[] = "Hello World";
   printf("Before memset: %s\n", str);
   ft_memset(str, '-', 5);
   printf("After memset: %s\n", str);
   return 0;*/
   /*BZERO
   char str[] = "Hello World";
   printf("Antes: %s\n", str);
   ft_bzero(str, 1);
   write(1,"Después: ", 10);
    int i;
    i=0;
    while(i < 10 )
    {
      write(1,&str[i], 1);
      i++;
    }
    bzero(str,1);*/
   /*MEMCPY*/

   printf("%s\n", ft_memcpy(NULL,NULL , 3));
   printf("%s\n", memcpy(NULL, NULL, 3));

  /*STRLCPY
  char origen[] = "12345789";
  char destino[] = "Hola que tal estas yo muy bien";
  ft_strlcpy(destino, origen, 20);
  //strlcpy(destino, origen, 20);
  int i;
    i=0;
    while(i < 30)
    {
      write(1,&destino[i], 1);
      i++;
    }*/

/*char origen[] = "Claudia";
char destino[20] = "hola";
char origen1[] = "Claudia";
char destino1[20] = "hola";

    
    printf("%lu\n", ft_strlcat(destino, origen, 7));
    printf("%lu", strlcat(destino1, origen1, 7));*/

/* TOUPPER
printf("%c", toupper('c'));
printf("%c", ft_toupper('c')); */
/* TOLOWER
printf("%c", tolower('C'));
printf("%c", ft_tolower('C')); */
/* STRCHR.C
    printf("%s\n", strchr("hola que tal", '\0'));
    printf("%s\n", ft_strchr("hola que tal", '\0'));


printf("%s\n", ft_strrchr("teste", 'e'));
printf("%s\n", strrchr("teste", 'e'));*/


  /*printf("%d", ft_strncmp("test\200", "test\0", 6));
  printf("%d", strncmp("test\200", "test\0", 6));*/
	/* MEMCHR
	const char	str[] = "Hello, World!";
	const void	*result = ft_memchr(str, 'e', 4);
    
    if (result != NULL) 
	{
        printf("Found character at position: %ld\n", ((char*)result - str)+1);
    } else {
        printf("Character not found.\n");
    } */
	/* MEMCMP
	char str1[] = "abcda";
    char str2[] = "abcd";

    int result = ft_memcmp(str1, str2, 3);
	int result1 = memcmp(str1, str2, 3);

	printf("Función: %d\n", result1);
    printf("Mi función: %d\n", result);*/



    /* STRNSTR
    printf("%s\n", ft_strnstr("xxa", "", 0));
    printf("%s", strnstr("xxa", "", 0));*/

    /*if (result != NULL) {
        printf("ft_strnstr: %s\n", result);
    } else {
        printf("No se ha encontrado la subcadena\n");
    }

    if (result1 != NULL) {
    printf("strnstr: %s\n", result1);
    } else {
        printf("No se ha encontrado la subcadena\n");
    }*/

    /* ATOI
    printf("%d\n", ft_atoi("-2147483649"));
    printf("%d", atoi("-2147483649"));*/

    /*CALLOC
        int *num = (int*) ft_calloc(3, sizeof(int));   
    if (num == NULL)
    {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    // Imprimir el valor del entero
    printf("%d\n", *num);
    free(num);*/
	return (0);
}