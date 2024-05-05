
#include <stdio.h>
#include <string.h>

int main()
{

	
	FILE* filePointer;

	// Get the data to be written in file
	char dataToBeWritten[50] = "HeyThisIsMyFile "
							"OfSciencePortal";

	filePointer = fopen("Test.c", "w");


	if (filePointer == NULL) {
		printf(" file failed to open.");
	}
	else {

		printf("The file is now opened.\n");

		
		if (strlen(dataToBeWritten) > 0) {

			
			fputs(dataToBeWritten, filePointer);
			fputs("\n", filePointer);
		}

		
		fclose(filePointer);

		printf("Data successfully written in file "
			"Test.c\n");
		printf("The file is now closed.");
	}

	return 0;
}
