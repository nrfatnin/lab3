#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>

int main(void)
{

  void sigint_handler(int sig);
  char s[200];

  void sigtstp_handler(int sig2);
  void sigquit_handler(int sig3);

  if (signal(SIGINT, sigint_handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }
 
  if (signal(SIGTSTP,sigtstp_handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }

  if (signal(SIGQUIT,sigquit-handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }
   printf("Enter a string:\n");


  if (fgets(s, 200, stdin) == NULL)
      perror("gets");
  else
      printf("you entered: %s\n", s);

  return 0;
}

void sigint_handler(int sig)
{
  printf("Jangan Kacau saya! \n");
}
void sigtstp_handler(int sig)
{
  printf("This is a special signal handler for SIGTSTP \n");
{
void sigquit_handler(int sig)
{
 printf("This is a special signal handler for SIGQUIT \n");
