#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
   pid_t pid;

   while(1) {
      sleep(5);
      pid = fork();
      if (pid >= 0){
         if (pid == 0){
            printf("Nasceu e Morreu o filho %d \n", pid);
            exit(EXIT_SUCCESS);
         }
      } else {
         printf("Erro forking\n");
      }
   }
   return 0;
}
