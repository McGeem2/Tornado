 #include <stdio.h>
  #include <conio.h>
  #include <dos.h>

char * shiftString(char *s);
char * shiftString( char *s )
{
   size_t n = strlen( s );

   if ( n > 1 )
   {
      char c = s[n - 1];
      memmove( s + 1, s, n - 1 );
      *s = c;
   }

   return ( s );
}

int main(int x){
  int i = 0;
char array[40] = "+++ OooO _=+=. - .- .- .- ";
int size = sizeof(array)/sizeof(array[0]);

  for(;;){
  	if(i == 1){
	  system("COLOR 2");
	  }
	  if(i == 2){
	  system("COLOR 7");
	  }
	  if(i== 3){
	  system("COLOR 0");
	  }
	  if(i == 4){
	  system("COLOR 1");
	  }
	  if(i == 5){
	  system("COLOR 2");
	  }
	  if(i == 6){
	  system("COLOR 7");
	  }
	  if(i== 7){
	  system("COLOR F");
	  }
	  if(i == 8){
	  system("COLOR 3");
	  }
  printf("%*s\n", (int)(55+14*sin(x++/(7.))), array );
  
  usleep(50000);
  shiftString(array);
 		
  	i++;
  	if(i>8){
	  i = 0;
	  }
		}
		
  }
  
  
