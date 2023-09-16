# include <stdio.h>
# include <stdlib.h>
int main (){
    char c;
    printf("Enter un caractere: ");
    scanf("%c",&c);

    if(c =='a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'|| c == 'y') {
        printf("%c est une voyelle\n",c);

    }
    else{
        printf("%c est une consonne ",c);
    }


return 0;
}
