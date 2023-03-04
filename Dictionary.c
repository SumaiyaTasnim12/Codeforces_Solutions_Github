


#include<stdio.h>

int main() {
    char s[1];
    int t, count=0;
    scanf("%d", &t);
   while(t--)
    {
        scanf("%s", s);
        int number1 = s[0]-97;
        int number2 = s[1]-97;
        if(number2>=number1)
            count= (number1*25 + number2);
        else{
            count = (number1)*25 + number2+1;
            }
        printf("%d\n", count);


    }

}
