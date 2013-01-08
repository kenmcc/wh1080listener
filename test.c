#include <stdio.h>
#include <time.h>

int main ()
{
  time_t rawtime;

  time ( &rawtime );
  printf ( "The current local time is: %s", ctime (&rawtime) );
  
  return 0;
}
