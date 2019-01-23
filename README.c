# leetcode2
timu
905：
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    int a = 0,b = ASize-1;
    int* returnarray = malloc(ASize * sizeof(int));
    for(int i = 0;i<ASize;i++){
        if(A[i]%2==0){
            returnarray[a] = A[i];
            a++;
        }else{
            returnarray[b] = A[i];
        b--;
        }
    }
    return returnarray;
}
922：
int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
   *returnSize = ASize;
   int  *returnarray = malloc(ASize * sizeof(int));
    int a = 0,b = 1;
    for(int i = 0;i<ASize;i++){
        if(A[i]%2==0){
            returnarray[a] = A[i];
            a += 2;
        }else{
            returnarray[b] = A[i];
            b += 2;
        }
    }
    return returnarray;
}
561：
int arrayPairSum(int* nums, int numsSize) 
{
    int a;
    int sums;
    sums = 0;
    int i = 0;
    for (i=0; i<numsSize; i++) 
    {
        for (int j=i+1; j<numsSize; j++)
        {
            if (nums[j] < nums[i])
            {
                a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
         }
     }
  
      for (int b=0; b<numsSize; b=b+2)
      {
         sums += nums[b];
      }
      return sums;
 }
 118：
 int** generate(int numRows, int** columnSizes) 
{
    int i,j;
    int** array = (int**)malloc(sizeof(int*)*numRows);
     *columnSizes =(int*)malloc(numRows*sizeof(int*));
    for(i=0; i<numRows; i++)
    {
        (*columnSizes)[i] = i + 1;
        array[i] = (int *)malloc(sizeof(int*)*(*columnSizes)[i]);
        array[i][0] = 1;
        for(j=1; j<i+1; j++)
       {
          array[i][j] = array[i-1][j-1] + array[i-1][j];
       }
    }
    return array;
}
832：
   int** flipAndInvertImage(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize)
{
    int **Array = malloc(ARowRizes*sizeof(int*));
    *columnSizes = malloc(ARowSize * sizeof(int));
    *returnSize = ARowSize;
    for (int i=0; i<ARowSize; i++)
    {  
        (*columnSizes)[i] = AColSizes[i];
         Array[i] = (int*)malloc(AColSizes[i]*sizeof(int)) ;
        for(int h=0; h<AColSizes[i]; h++)
        {
            
            Array[i][h] = !A[i][AColSizes[i]-1-h] ;
        } 
    }
    return Array;
}
