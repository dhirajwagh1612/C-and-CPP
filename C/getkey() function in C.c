#include<stdio.h>
#include<conio.h>
int main()
{
  int i;
  for (i=0;i<10;i++)
    {
    key = getkey();

    if (key !='\0')
        {
            printf("Press any key to continue");
      //also tried if (key != NULL) and if (key != 0x00)
      break;

    }
    else
    {
        printf("press any key  to stop");

      //do some stuff in loop till any key is pressed
    }
  }
  return 0;
}
