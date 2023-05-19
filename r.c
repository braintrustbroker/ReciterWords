#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
  {
  char b[MAX_PATH]="\0";
  int x;
  for(x=1;x<argc;x++)
    {
    printf(argv[x]); printf(" "); //Comment out if you don't want to display words
    strcpy(b,".\\zWAV\\");
    strcat(b,argv[x]);
    strcat(b,".wav");
    PlaySound(b,NULL,SND_FILENAME|SND_NODEFAULT);
    }
  return 0;
  }
