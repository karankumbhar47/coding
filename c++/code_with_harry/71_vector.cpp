#include<iostream>
#include<vector>

using  namespace std;

template <class T>
void display(vector<T> *v){
    cout<<"displaying this vector..."<<endl;
    for (int i = 0; i < v->size(); i++)
    {
        cout<<"The element at "<<i<<"is ==> "<<((*v)[i])<<endl;
        // cout<<"The element at "<<i<<"is ==> "<<v->at[i]<<endl;
    }
    
}

int main()
{
    // vector <int> vec1;//zero length int vector

    // vector <char> vec2(4); // 
    // vec2.push_back('5');//add 5 at the end of the vector at fifth position
    // display(&vec2);
    // vec2.pop_back();// reomove last element of vector
    // display(&vec2);
    // vector<char>:: iterator iter = vec2.begin();//creating a pointer, poiting at begining of vec2
    // vec2.insert(iter,3,'a');//insertin a, three times at pointer iter
    // display(&vec2);
    
    // vector <char> vec3(vec2); //same vector as vec3
    // display(&vec3);
    
    vector <int> vec4(6,3); //creating a vector of length 6 containing all element as 3
    display(&vec4);
    cout<<"size of vetor is "<<vec4.size()<<endl;
    
    // for (int i = 0; i < 4; i++)
    // {
    //     int element;
    //     cout<<"Please enter the element"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(&vec1);
    // vec1.pop_back();
    // display(&vec1);
    return 0;
}