#include <stdio.h>
int main() {
int n;
printf("Enter size of array : ");
scanf("%d", &n);

int arr[n];

printf("Enter the elements : ");
for(int i=0; i<n; i++) {
    scanf("%d",&arr[i]);
}

int count=0, majority=-1;

for (int i=0; i<n; i++) {
    
        for(int j=0; j<n; j++) {
            if (arr[j] == arr[i]) 
                count++;
        }

        if ( count > n/2){
            majority = arr[i];
            break;
        }
}
printf("%d\n",majority);
return 0;
  
}

/*
output
Enter size of array : 7
Enter the elements : 2 2 1 1 1 2 2
2
*/


