#include <stdio.h>


int test_writeFile()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "start: \narr = { ");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d", arr[i]);
        if (i < size -1 )
        {
            fprintf(file, ", ");
        }
    }
    fprintf(file, " } end; count= %d \n", size);

    fclose(file);
    printf("written  successfully.\n");
    return 0;
}

int main() {
    test_writeFile();
}
