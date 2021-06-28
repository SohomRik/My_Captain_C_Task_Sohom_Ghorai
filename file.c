#include<stdio.h>
int main()
{
      FILE *fp;
      char ch;
      int i,pos;
      fp=fopen("input.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      
      FILE *fptr1, *fptr2 , *fptr3;
	char filename[100], c;
    printf("\nCopying One file to Another\n");		
	printf("\nEnter the filename to open for reading \n");
	scanf("%s", filename);

	// Open one file for reading
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", filename);

	// Open another file for writing
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
	
	 printf("\nEnter the filename to open \n");
    scanf("%s", filename);
  
    // Open file
    fptr3 = fopen(filename, "r");
    if (fptr3 == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr3);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr3);
    }
  
    fclose(fptr3);
      
      return 0;
}
