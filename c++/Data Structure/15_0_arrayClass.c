#include<stdio.h>

struct array{
    int length;
    int size;
    int arr[10];
};

void display(struct array *p){
    for (int i = 0; i < p->length; i++){
        cout<<(p->arr[i])<<" ";
    }
    cout<<endl;

}

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j=temp;
    }

void insert(struct array *p,int element,int index){
    if(index>=0 && index<(p->size)){
        int i=p->length-1;
        while (i>=index)
        {
            p->arr[i+1]=p->arr[i];
            i--;
        }
        
        p->arr[i+1]=element;
        p->length+=1;
    }
    else
    {
        cout<<"Insert an correct index";
    }    
}

void append(struct array *p,int element){
    if(p->length<p->size){
        p->arr[p->length++]=element;
    }
    else{
        cout<<"Your array size is full";
    }
}

int del(struct array *p,int index){
    int delElement = p->arr[index];
    if(index<p->length){
        int i=index;
        while (i<p->length-1)
        {
            p->arr[i]=p->arr[i+1];
            i++;
        }
        p->arr[i]=0;
        p->length-=1;
        return delElement;
    }
    else{
        cout<<"Please give correct index"<<endl;
        return -1;
    }
}

void transposition(struct array *p,int i){
    if(i>0) {
        cout<<i<<endl;
        swap(&((*p).arr[i]),&((*p).arr[i-1]));
    }
} 

void moveToFront(struct array  *p,int i){
    if(i>0) swap(&(p->arr[i]),&(p->arr[0]));
}

int linSearch(struct array *p,int key){
    for (int i = 0; i < p->length; i++)
    {
        if (p->arr[i]==key) {
            // transposition(&(*p),i);
            moveToFront(&(*p),i); 
            return i;
        }
    }
    return -1;
}

int binarySearch(struct array a,int key){
    int l=0,h=a.length-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(key==a.arr[mid]){ 
            return mid;
        }
        else if(key>a.arr[mid]){
            l=mid+1;  
        } 
        else{
            h=mid-1;
        }
    }
    return -1;
}

int recurrsiveBinarySearch(int arr[],int key,int l,int h){
    if (l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key) {
            return recurrsiveBinarySearch(arr,key,l,mid-1);
        }
        else {
            return recurrsiveBinarySearch(arr,key,mid+1,h);
        }
    }
    return -1; 
}

int get(struct array a, int index){
    if (index>=0 && index<a.length) return a.arr[index];
    return -1;
}

void set(struct array *p, int element, int index){
    if(index>=0 && index<p->length) p->arr[index]=element;
}

int maxUnsorted(struct array a){
    int max = a.arr[0];
    for (int i = 0; i < a.length; i++)
    {
        if (max<a.arr[i]) max= a.arr[i];
    }
    return max;
}

int minUnsorted(struct array a){
    int min = a.arr[0];
    for (int i = 0; i < a.length; i++)
    {
        if (min>a.arr[i]) min= a.arr[i];
    }
    return min;
}

int sumArray(struct array a){
    int sum = 0; 
    for (int  i = 0; i < a.length; i++) sum+=a.arr[i];
    return sum;
}

int recurrsiveSumArray(struct array *p,int lastIndex){
    if(lastIndex<0) { 
        return 0;
    }
    else {
        return (recurrsiveSumArray(&(*p),lastIndex-1) + (p->arr[lastIndex]));
    }
}

float average(struct array a){
    return (float )sumArray(a)/a.length;
}

void reverse(struct array *p){
    int arrCopy[p->length];
    for (int i = p->length-1, j=0; i >=0, j<p->length; i--,j++) arrCopy[j] = p->arr[i];   
    for (int i = 0; i < p->length; i++) p->arr[i]=arrCopy[i];
}

void reverseSwap(struct array *p){
    int i=0;
    int j=p->length-1;
    while (i<j)  swap(&(p->arr[i++]),&(p->arr[j--]));
}

void leftShift(struct array *p,int shiftNumber){
    int i,j;
    for (i = shiftNumber,j=0; i < p->length-1,j<p->length; i++ , j++) p->arr[j] = p->arr[i];
    for( ; i < p->length; i++) p->arr[i]=0; 
}

void rightShift(struct array *p,int shiftNumber){
    int i,j;
    for (i = p->length-shiftNumber-1,j=p->length-1; i >=0; i-- , j--) cout<<"i "<<i<<" j "<<j<<endl; p->arr[j] = p->arr[i];
    cout<<i<<" "<<j<<endl;
    for( ; j >=0; j--) p->arr[j]=0; 
}

void leftRotate(struct array *p){
    int temp = p->arr[0];
    for (int i = 0; i < p->length-1; i++)    p->arr[i]=p->arr[i+1];
    p->arr[p->length-1] = temp;
}

void rightRotate(struct array *p){
    int temp = p->arr[p->length-1];
    for (int i = p->length-1; i > 0; i--)    p->arr[i]=p->arr[i-1];
    p->arr[0] = temp;
}

void insertEleInSortedArr(struct array *p,int element){
    int i = p->length-1; 
    if (p->length==p->size) return;
    while (p->arr[i]>element){
        // cout<<i<<endl;
        p->arr[i+1] = p->arr[i];
        i--;
    }
    p->arr[i+1] = element;
    p->length++;
}

bool checkSorted(struct array *p){
    int i=0;
    while(i<p->length-1){
        if(p->arr[i]>p->arr[i+1]) return false;
        i++;
    }
    return true;
}

void seperateNegFromPos(struct array *p){
    int i=0, j=p->length-1;
    while (i<j)
    {
        while(p->arr[i]<0) i++;
        while(p->arr[j]>0) j--;
        if(i<j){
            swap(&(p->arr[i]),&(p->arr[j]));
        }
    }
    
}

struct array * mergeSortedArray(struct array *p1,struct array *p2){
    struct array *p3 = new struct array;
    *p3 = { p1->length + p2->length,p1->size};
    int k=0,i,j;
    for (i=0,j=0; i<p1->length && j<p2->length; ){
        if (p1->arr[i] <= p2->arr[j]) p3->arr[k++] = p1->arr[i++];
        else p3->arr[k++] = p2->arr[j++];
    }
    for( ; i<p1->length; i++) p3->arr[k++]=p1->arr[i];
    for( ; j<p2->length; j++) p3->arr[k++]=p2->arr[j];
    return p3;
}

void setUnion(struct array *a,struct array *b,struct array *c){
    int i,j,k=0;
    for (i=0,j=0; i<a->length && j<b->length; ){
        if (a->arr[i] < b->arr[j]) c->arr[k++] = a->arr[i++];
        else if(a->arr[i] > b->arr[j]) c->arr[k++] = b->arr[j++];
        else{ 
            c->arr[k++] = a->arr[i++];
            j++;
        }
    }
    for( ; i<a->length; i++) c->arr[k++]=a->arr[i];
    for( ; j<b->length; j++) c->arr[k++]=b->arr[j];
    c->length = k;
    c->size = a->size;
}

void setIntersection(struct array *a,struct array *b,struct array *c){
    int i,j,k=0;
    for (i=0,j=0; i<a->length && j<b->length; ){
        if (a->arr[i] < b->arr[j]) i++;
        else if(a->arr[i] > b->arr[j]) j++;
        else{ 
            c->arr[k++] = a->arr[i++];
            j++;
        }
    }
    c->length = k;
    c->size = a->size;
}

void setDifference(struct array *a,struct array *b,struct array *c){
    int i,j,k=0;
    for (i=0,j=0; i<a->length && j<b->length; ){
        if(a->arr[i] < b->arr[j]) c->arr[k++]=a->arr[i++];
        else if(a->arr[i] > b->arr[j]) j++;
        else{
            i++;
            j++;
        }
    }
    for( ; i<a->length; ) c->arr[k++] = a->arr[i++];
    c->length = k;
    c->size = a->size;
}

int setMembership(struct array *p,int key){
    int l=0,h=p->length-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(key==p->arr[mid]){ 
            return mid;
        }
        else if(key>p->arr[mid]){
            l=mid+1;  
        } 
        else{
            h=mid-1;
        }
    }
    return -1;
}


int main()
{
    struct array{
        int length;
        int size;
        int arr[10];
    };

    struct array a = {4, 10, {0,2,4,6} }; 
    struct array b = {7, 10, {1,3,5,7,9,11,13}};
    struct array *c;

    int n;
    bool t = true;

    while (t==true){
        printf("Which of the following operation you want to perform :- \n
    1. Insert an element \n
    2. Delete an element \n
    3. Append an element \n
    4. Linear Search \n
    5. Binary Search \n
    6. Recurrsive Binary Search \n
    7. Get an element \n
    8. Set an element \n
    9. Find minimum element \n
   10. Find maximum element \n
   11. Find sum of array \n
   12. Find average of array \n
   13. Reverse the array \n
   14. Left shift \n
   15. Right Shift \n
   16. Left Rotate \n
   17. Right Rotate \n
   18. Insert an element in sorted array \n
   19. Check if array is sorted or not? \n
   20. Seperate Negative element from Positive element \n
   21. Merge the array \n
   22. Set Union \n
   23. Set Different \n
   24. Set Intersection \n
   25. Set Membership \n
   26. Display The array");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Please give element and its index\n");
            scanf("%d",&element);
            scanf("%d",&index);
            insert(&a,element,index);
            break;
        case 26:
            display(&a);
            break;
        }   
    }
    
    return 0;
}