# include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

return(i);

}

int main(void)
{
    char str[] = "hello"; /// ou *str = "hello"
            // avec le * on ne peut pas modifier contenu du str
            ///  alors que avec str[] = "hello", cela est possible
    int result;
    
    result = ft_strlen(str);

    printf("resultat : %i ", result);  /// ATTENTION AU FORMAT %i
    
}
