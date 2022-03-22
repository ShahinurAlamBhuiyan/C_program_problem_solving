//#include <stdio.h>
//int main () {
//    int array[15], dupArray[10], matchArray[15];
//
//    for (int i = 0; i <= 14; i++) {
//        scanf("%d", &array[i]);
//    }
//
//
////    for (int i = 0; i <= 9; i++) {
////        dupArray[i] = i;
//////        if(array[i] == dupArray[i])
////        for (int j = 0; j <= 14; j++) {
////
////            if(array[j] == j){
////                dupArray[i]++;
////            }
////        }
////    }
//
//    for (int j = 0; j < 10; j++) {
//        dupArray[j] = j;
//    }
//
//
//
//    for (int i = 0; i <= 9; i++) {
//        printf("%d", dupArray[i]);
//    }
//    printf("\n");
//    return 0;
//}



#include <stdio.h>

int main()
{
    int arr1[15], fr1[15];
    int  i, j, ctr;
    
//    taking array input.
    for(i=0;i<15;i++) {
        // taking input in arr1.
        scanf("%d",&arr1[i]);
        
        // Making fr1 array all the index value is -1.
        fr1[i] = -1;
    }
    
    
    for(i=0; i<15; i++){
        ctr = 1;
//        checking
        for(j=i+1; j<n; j++){
//            checking arr1[0] is equal to
//            arr1[0] => arr1[1]
//            arr1[0] => arr1[2]
            if(arr1[i]==arr1[j]){
                ctr++;
                fr1[j] = 0;
            }
        }
        
            if(fr1[i]!=0){
            fr1[i] = ctr;
            }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}
