#include<stdio.h>
int main() {
   FILE *inputFile, *outputFile;
   char ch;

   inputFile = fopen("data.txt", "r");
   if (inputFile == NULL) {
      puts("File data.txt Open Error.");
      exit(1);
   }

   outputFile = fopen("output.txt", "w");
   if (outputFile == NULL) {
      puts("File output.txt Open Error.");
      exit(1);
   }

   do {
      ch = fgetc(inputFile);
      fputc(ch+3, outputFile);
   } while (ch != EOF);
   
  printf("Data.txt file is successfully encrypted using Caesar Cipher.\n");
  printf("Output.txt file is generated successfully.");
  
  fclose(inputFile);
  fclose(outputFile);
  
  return 0;
}
