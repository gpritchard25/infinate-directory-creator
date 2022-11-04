#include <stdio.h>
#include <string.h>
void makeDir(char fun[1000000]) 
{
  char jim[50] = "cd ~&\nmkdir .";
  system(strcat(jim,fun));
}
int main(void) 
{
  //system("cd ~&\nmkdir .bob");
  int x = 1;
  while (1) 
  {
    char* newTemp;
    asprintf(&newTemp,"%i",x);
    makeDir(newTemp);
    x = x + 1;
    if (x == 0) 
    {
      break;
    }
  }
  return 0;
}
