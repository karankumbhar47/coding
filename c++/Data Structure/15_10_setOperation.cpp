 #include<iostream>

using  namespace std;

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
    struct array a={ 4, 8, {1,5,7,9} };
    struct array b={ 4, 8, {1,5,7,8} };
    struct array c;
    display(&a);
    // display(&b);
    // setUnion(&a,&b,&c); //A U B
    // setIntersection(&a,&b,&c);//A ^ B
    // setDifference(&a,&b,&c);//A - B
    cout<<setMembership(&a,5)<<endl;// set search
    // display(&c);
    display(&a);

        return 0;
    }