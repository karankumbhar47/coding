#include <iostream>

using namespace std;

class Array
{
private:
    int length;
    int size;
    int *arr;
    void swap(int *i, int *j);

public:
    Array();
    Array(int capacity);
    ~Array();
    void setArray(int arr[], int length);
    void display();
    void insert(int element, int index);
    void append(int element);
    int del(int index);
    void transposition(int i);
    void moveToFront(int i);
    int linSearch(int key);
    int binarySearch(int key);
    int recurrsiveBinarySearch(int key, int l, int h);
    int get(int index);
    void set(int element, int index);
    int minUnsorted();
    int maxUnsorted();
    int sumArray();
    int recurrsiveSumArray(int last);
    float average();
    void reverse();
    void reverseSwap();
    void leftShift(int shiftNumber);
    void rightShift(int shiftNumber);
    void leftRotate();
    void rightRotate();
    void insertEleInSortedArr(int el);
    bool checkSorted();
    void seperateNegFromPos();
    Array *mergeSortedArray(Array p1, Array p2);
    Array *setUnion(Array a, Array b);
    Array *setIntersection(Array a, Array b);
    Array *setDifference(Array a, Array b);
    int setMembership(int key);
};

Array::Array()
{
    size = 10;
    length = 0;
    arr = new int[size];
};

Array::Array(int capacity)
{
    size = capacity;
    length = 0;
    // arr = new int[size];
};

Array::~Array()
{
    delete[] arr;
};

void Array::display()
{
    cout << "Elements are ... " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void Array::setArray(int array[], int ln){
    length = ln;
    arr = array;
}

void Array::insert(int element, int index)
{
    if (index >= 0 && index < (size))
    {
        int i = length - 1;
        while (i >= index)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = element;
        length += 1;
    }
    else
    {
        cout << "Insert an correct index";
    }
}

void Array::append(int element){
    if (length < size){
        arr[length++] = element;
    }
    else{
        cout << "Your array size is full";
    }
}

int Array::del(int index)
{
    int delElement = arr[index];
    if (index < length)
    {
        int i = index;
        while (i < length - 1)
        {
            arr[i] = arr[i + 1];
            i++;
        }
        arr[i] = 0;
        length -= 1;
        return delElement;
    }
    else
    {
        cout << "Please give correct index" << endl;
        return -1;
    }
}

void Array::transposition(int i)
{
    if (i > 0)
    {
        cout << i << endl;
        swap(&arr[i], &arr[i - 1]);
    }
}

void Array::moveToFront(int i)
{
    if (i > 0)
        swap(&(arr[i]), &(arr[0]));
}

int Array::linSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            moveToFront(i);
            return i;
        }
    }
    return -1;
}

int Array::binarySearch(int key)
{
    int l = 0, h = length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int Array::recurrsiveBinarySearch(int key, int l, int h)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return recurrsiveBinarySearch(key, l, mid - 1);
        }
        else
        {
            return recurrsiveBinarySearch(key, mid + 1, h);
        }
    }
    return -1;
}

int Array::get(int index)
{
    if (index >= 0 && index < length)
        return arr[index];
    return -1;
}

void Array::set(int element, int index)
{
    if (index >= 0 && index < length)
        arr[index] = element;
}

int Array::maxUnsorted()
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int Array::minUnsorted()
{
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int Array::sumArray()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return sum;
}

int Array::recurrsiveSumArray(int lastIndex)
{
    if (lastIndex < 0)
    {
        return 0;
    }
    else
    {
        return (recurrsiveSumArray(lastIndex - 1) + (arr[lastIndex]));
    }
}

float Array::average()
{
    return (float)sumArray() / length;
}

void Array::reverse()
{
    int arrCopy[length];
    for (int i = length - 1, j = 0; i >= 0, j < length; i--, j++)
        arrCopy[j] = arr[i];
    for (int i = 0; i < length; i++)
        arr[i] = arrCopy[i];
}

void Array::reverseSwap()
{
    int i = 0;
    int j = length - 1;
    while (i < j)
        swap(&(arr[i++]), &(arr[j--]));
}

void Array::leftShift(int shiftNumber)
{
    int i, j;
    for (i = shiftNumber, j = 0; i < length - 1, j < length; i++, j++)
        arr[j] = arr[i];
    for (; i < length; i++)
        arr[i] = 0;
}

void Array::rightShift(int shiftNumber)
{
    int i, j;
    for (i = length - shiftNumber - 1, j = length - 1; i >= 0; i--, j--)
        cout << "i " << i << " j " << j << endl;
    arr[j] = arr[i];
    cout << i << " " << j << endl;
    for (; j >= 0; j--)
        arr[j] = 0;
}

void Array::leftRotate()
{
    int temp = arr[0];
    for (int i = 0; i < length - 1; i++)
        arr[i] = arr[i + 1];
    arr[length - 1] = temp;
}

void Array::rightRotate()
{
    int temp = arr[length - 1];
    for (int i = length - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

void Array::insertEleInSortedArr(int element)
{
    int i = length - 1;
    if (length == size)
        return;
    while (arr[i] > element)
    {
        // cout<<i<<endl;
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    length++;
}

bool Array::checkSorted()
{
    int i = 0;
    while (i < length - 1)
    {
        if (arr[i] > arr[i + 1])
            return false;
        i++;
    }
    return true;
}

void Array::seperateNegFromPos()
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        while (arr[i] < 0)
            i++;
        while (arr[j] > 0)
            j--;
        if (i < j)
        {
            swap(&(arr[i]), &(arr[j]));
        }
    }
}

Array * Array::mergeSortedArray(Array p1, Array p2)
{
    Array *p3 = new Array;
    p3->length = p1.length + p2.length;
    p3->size = p1.size;
    int k = 0, i, j;
    for (i = 0, j = 0; i < p1.length && j < p2.length;)
    {
        if (p1.arr[i] <= p2.arr[j])
            p3->arr[k++] = p1.arr[i++];
        else
            p3->arr[k++] = p2.arr[j++];
    }
    for (; i < p1.length; i++)
        p3->arr[k++] = p1.arr[i];
    for (; j < p2.length; j++)
        p3->arr[k++] = p2.arr[j];
    return p3;
}

Array * Array::setUnion(Array a, Array b)
{
    Array *c = new Array;
    int i, j, k = 0;
    for (i = 0, j = 0; i < a.length && j < b.length;)
    {
        if (a.arr[i] < b.arr[j])
            c->arr[k++] = a.arr[i++];
        else if (a.arr[i] > b.arr[j])
            c->arr[k++] = b.arr[j++];
        else
        {
            c->arr[k++] = a.arr[i++];
            j++;
        }
    }
    for (; i < a.length; i++)
        c->arr[k++] = a.arr[i];
    for (; j < b.length; j++)
        c->arr[k++] = b.arr[j];
    c->length = k;
    c->size = a.size;
    return c;
}

Array * Array::setIntersection(Array a, Array b)
{
    Array *c = new Array;
    int i, j, k = 0;
    for (i = 0, j = 0; i < a.length && j < b.length;)
    {
        if (a.arr[i] < b.arr[j])
            i++;
        else if (a.arr[i] > b.arr[j])
            j++;
        else
        {
            c->arr[k++] = a.arr[i++];
            j++;
        }
    }
    c->length = k;
    c->size = a.size;
    return c;
}

Array *Array::setDifference(Array a, Array b)
{
    Array *c= new Array;
    int i, j, k = 0;
    for (i = 0, j = 0; i < a.length && j < b.length;)
    {
        if (a.arr[i] < b.arr[j])
            c->arr[k++] = a.arr[i++];
        else if (a.arr[i] > b.arr[j])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < a.length;)
        c->arr[k++] = a.arr[i++];
    c->length = k;
    c->size = a.size;
    return c;
}

int Array::setMembership(int key)
{
    int l = 0, h = length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int main()
{
    Array a(10), b(10);
    Array *c;
    int arr[8] = {1,2,3,4,5,6,7,8};
    a.setArray(arr,8);
    int n;
    bool t = true;

    while (t == true)
    {
        cout << "Which of the following operation you want to perform :- \n1. Insert an element \n 2. Delete an element \n 3. Append an element \n 4. Linear Search \n 5. Binary Search \n 6. Recurrsive Binary Search \n 7. Get an element \n 8. Set an element \n 9. Find minimum element \n 10. Find maximum element \n 11. Find sum of array \n 12. Find average of array \n 13. Reverse the array \n 14. Left shift \n 15. Right Shift \n 16. Left Rotate \n 17. Right Rotate \n 18. Insert an element in sorted array \n 19. Check if array is sorted or not? \n 20. Seperate Negative element from Positive element \n 21. Merge the array \n 22. Set Union \n 23. Set Different \n 24. Set Intersection \n 25. Set Membership \n 26. Display The array \n 27. Exit"<<endl;
        cin >> n;
        switch (n){
        case 1:
            cout<<"Please give element and its index\n";
            int element,index;
            cin>>element>>index;
            a.insert(element, index);
            break;
        case 26:
            a.display();
            break;
        case 27:
            t = false;
            break;
        }
    }
    return 0;
}