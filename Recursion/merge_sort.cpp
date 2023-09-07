void merge(int *a,int l,int mid,int h){
    
int b[h+1];    
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=h){
        
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }
        else b[k++]=a[j++];
    }
    
   while(i<=mid)  b[k++]=a[i++];
    while(j<=h)b[k++]=a[j++];
    
    for(int x=l;x<=h;x++)a[x]=b[x];
    
}

void msort(int *a,int l,int h){
    if(h>l){
        int mid=(l+h)/2;
        msort(a,l,mid);   
        msort(a,mid+1,h);
        merge(a,l,mid,h);
    }    
}

void mergeSort(int input[], int size){
	// Write your code here
        msort(input,0,size-1);
    
}