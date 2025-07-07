void duplicateZeros(int* arr, int arrSize) {
    int temp[100000];
    int j=0;
    for(int i=0;i<arrSize;i++)
    {
        temp[j++]=arr[i];
        if(arr[i]==0 && i <arrSize-1)
        {
            temp[j++]=arr[i];
        }
    }
    for(int i=0;i<arrSize;i++)
    {
        arr[i]=temp[i];
    }
}